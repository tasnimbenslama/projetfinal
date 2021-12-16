#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "capteur.h"


void
on_button1_gh_clicked                     (GtkWidget       *objet,
                                        gpointer         user_data)
{

GtkWidget *aj, *dashboard;
dashboard=lookup_widget(objet,"dashboard");
aj=lookup_widget(objet,"aj");
aj=create_aj();
gtk_widget_show(aj);


}


void
on_button2_gh_clicked                     (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *mod, *dashboard;
dashboard=lookup_widget(objet,"dashboard");
mod=lookup_widget(objet,"mod");
mod=create_mod();
gtk_widget_show(mod);
}


void
on_button3_gh_clicked                     (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *treeview, *af;
af=lookup_widget(objet,"af");
af=create_af();
gtk_widget_show(af);
treeview=lookup_widget(af,"treeview");
afficher(treeview,"capteurs.txt");
}


void
on_button4_gh_clicked                     (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *def, *treeview;
def=lookup_widget(objet,"def");
def=create_def();
gtk_widget_show(def);
treeview=lookup_widget(def,"treeview_def_gh");
cap_def(treeview,"mouvement.txt","fumee.txt");
}


void
on_button_mod_gh_clicked                  (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *mod1, *mod2, *mod3, *pInfo, *mod4;
capteur u;
mod1=lookup_widget(objet,"mod1_gh");
mod2=lookup_widget(objet,"mod2_gh");
mod3=lookup_widget(objet,"mod3_gh");
mod4=lookup_widget(objet,"mod4_gh");
strcpy(u.id,gtk_entry_get_text(GTK_ENTRY(mod1)));
u.type=gtk_combo_box_get_active(GTK_COMBO_BOX(mod2));
strcpy(u.bloc,gtk_combo_box_get_active_text(GTK_COMBO_BOX(mod4)));
strcpy(u.marque,gtk_entry_get_text(GTK_ENTRY(mod3)));
modifier(u,"capteurs.txt");
pInfo=gtk_message_dialog_new(GTK_WINDOW(user_data),GTK_DIALOG_MODAL,GTK_MESSAGE_INFO,GTK_BUTTONS_OK,"Capteur modifié avec succès");
	switch(gtk_dialog_run(GTK_DIALOG(pInfo)))
	{
	case GTK_RESPONSE_OK:
	gtk_widget_destroy(pInfo);
	break;
	}
}


void
on_check_id_gh_clicked                    (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *mod1, *mod2, *mod3, *pInfo, *mod4;
capteur p;
int a=0;
char id[50];
FILE *f;
mod1=lookup_widget(objet,"mod1_gh");
mod2=lookup_widget(objet,"mod2_gh");
mod3=lookup_widget(objet,"mod3_gh");
mod4=lookup_widget(objet,"mod4_gh");
strcpy(id,gtk_entry_get_text(GTK_ENTRY(mod1)));
f = fopen("capteurs.txt","r");
if(f!=NULL){
while(fscanf(f,"%s %d %s %s %d %d %d\n",p.id,&(p.type),p.bloc,p.marque,&(p.d.j),&(p.d.m),&(p.d.a))!=EOF)
	{
		if(strcmp(p.id,id)==0){
			a=1;
			break;
                 }
	}
fclose(f);
}
if(a==1){
gtk_combo_box_set_active(GTK_COMBO_BOX(mod2),p.type);
gtk_entry_set_text(GTK_ENTRY(mod3),p.marque);
gtk_combo_box_set_active(GTK_COMBO_BOX(mod4),strcmp(p.bloc,"A")==0?0:strcmp(p.bloc,"B")==0?1:2);
}
else{
pInfo=gtk_message_dialog_new(GTK_WINDOW(user_data),GTK_DIALOG_MODAL,GTK_MESSAGE_ERROR,GTK_BUTTONS_OK,"Capteur introuvable");
	switch(gtk_dialog_run(GTK_DIALOG(pInfo)))
	{
	case GTK_RESPONSE_OK:
	gtk_widget_destroy(pInfo);
	break;
	}
}
}


void
on_button_af_gh_clicked                   (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *treeview, *af;
af=lookup_widget(objet,"af");
gtk_widget_destroy(af);
af=lookup_widget(objet,"af");
af=create_af();
gtk_widget_show(af);
treeview=lookup_widget(af,"treeview_gh");
afficher(treeview,"capteurs.txt");
}


void
on_button_aj_gh_clicked                   (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *aj1, *aj2, *aj3, *a, *b,*d,  *c;
GtkCalendar *ajc;
capteur u;
guint day, month, year;
aj1=lookup_widget(objet,"aj1_gh");
aj2=lookup_widget(objet,"aj2_gh");
aj3=lookup_widget(objet,"aj3_gh");
ajc=lookup_widget(objet,"ajc_gh");
a=lookup_widget(objet,"aj4_gh");
b=lookup_widget(objet,"aj5_gh");
c=lookup_widget(objet,"aj6_gh");
d=lookup_widget(objet,"entry1");

strcpy(u.id,gtk_entry_get_text(GTK_ENTRY(aj1)));
u.type=gtk_combo_box_get_active(GTK_COMBO_BOX(aj2));
strcpy(u.bloc,gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(a))?"A":gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(b))?"B":"C");
strcpy(u.marque,gtk_entry_get_text(GTK_ENTRY(aj3)));
strcpy(u.Etat,gtk_entry_get_text(GTK_ENTRY(d)));
gtk_calendar_get_date(GTK_CALENDAR(ajc), &day, &month, &year);
u.d.j=year;
u.d.m=month+1;
u.d.a=day;
ajouter(u,"capteurs.txt");
}


void
on_treeview_gh_row_activated              (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{
	GtkTreeIter iter;
	char *id;
	capteur u;
	GtkWidget *pInfo;
	GtkTreeModel *model=gtk_tree_view_get_model(treeview);
	if(gtk_tree_model_get_iter(model,&iter,path)){
	gtk_tree_model_get(GTK_LIST_STORE(model),&iter,0,&id,-1);
	strcpy(u.id,id);
	pInfo=gtk_message_dialog_new(GTK_WINDOW(user_data),GTK_DIALOG_MODAL,GTK_MESSAGE_QUESTION,GTK_BUTTONS_YES_NO,"Voulez-vous vraiment\nsupprimer ce capteur?");
	switch(gtk_dialog_run(GTK_DIALOG(pInfo)))
	{
	case GTK_RESPONSE_YES:
	gtk_widget_destroy(pInfo);
	supprimer(u,"capteurs.txt");
	afficher(treeview,"capteurs.txt");
	break;
	case GTK_RESPONSE_NO:
	gtk_widget_destroy(pInfo);
	break;
}	
}
}


void
on_button_ajm_gh_clicked                  (GtkWidget       *objet,
                                        gpointer         user_data)
{

}


void
on_afficher_gh_clicked                    (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *treeview, *def;
def=lookup_widget(objet,"def");
gtk_widget_destroy(def);
def=lookup_widget(objet,"def");
def=create_def();
gtk_widget_show(def);
treeview=lookup_widget(def,"treeview_def_gh");
cap_def(treeview,"mouvement.txt","fumee.txt");
afficher(treeview,"capteurs.txt");
}


void
on_ajouter_gh_clicked                     (GtkWidget       *objet,
                                        gpointer         user_data)
{

}


void

on_button2_supp_clicked                     (GtkWidget       *objet,
                                        gpointer         user_data)
{

}



void
on_button7_clicked                     (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *mod11, *mod12, *mod13,*mod14, *ppInfo,*pp ;
capteur u;
mod11=lookup_widget(button,"mod1_gh");
mod12=lookup_widget(button,"mod2_gh");
mod13=lookup_widget(button,"mod3_gh");
mod14=lookup_widget(button,"mod4_gh");
//mod15=lookup_widget(button,"mod5_gh");
pp=lookup_widget(button,"mod5_gh");
strcpy(u.id,gtk_entry_get_text(GTK_ENTRY(mod11)));
strcpy(u.Etat,gtk_entry_get_text(GTK_ENTRY(pp)));
u.type=gtk_combo_box_get_active(GTK_COMBO_BOX(mod12));
strcpy(u.bloc,gtk_combo_box_get_active_text(GTK_COMBO_BOX(mod14)));
strcpy(u.marque,gtk_entry_get_text(GTK_ENTRY(mod13)));
strcpy(u.Etat,gtk_entry_get_text(GTK_ENTRY(pp)));
supprimer(u,"capteurs.txt");
ppInfo=gtk_message_dialog_new(GTK_WINDOW(user_data),GTK_DIALOG_MODAL,GTK_MESSAGE_INFO,GTK_BUTTONS_OK,"Capteur supprimée avec succès");
	switch(gtk_dialog_run(GTK_DIALOG(ppInfo)))
	{
	case GTK_RESPONSE_OK:
	gtk_widget_destroy(ppInfo);
	break;
	}

}




