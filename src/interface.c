/*
 * DO NOT EDIT THIS FILE - it is generated by Glade.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

#include <gdk/gdkkeysyms.h>
#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"

#define GLADE_HOOKUP_OBJECT(component,widget,name) \
  g_object_set_data_full (G_OBJECT (component), name, \
    gtk_widget_ref (widget), (GDestroyNotify) gtk_widget_unref)

#define GLADE_HOOKUP_OBJECT_NO_REF(component,widget,name) \
  g_object_set_data (G_OBJECT (component), name, widget)

GtkWidget*
create_dashboard (void)
{
  GtkWidget *dashboard;
  GtkWidget *fixed1;
  GtkWidget *button3_gh;
  GtkWidget *alignment14;
  GtkWidget *hbox11;
  GtkWidget *image11;
  GtkWidget *label35;
  GtkWidget *button1_gh;
  GtkWidget *alignment9;
  GtkWidget *hbox6;
  GtkWidget *image6;
  GtkWidget *label28;
  GtkWidget *button2_gh;
  GtkWidget *alignment10;
  GtkWidget *hbox7;
  GtkWidget *image7;
  GtkWidget *label29;
  GtkWidget *button4_gh;
  GtkWidget *alignment11;
  GtkWidget *hbox8;
  GtkWidget *image8;
  GtkWidget *label32;
  GtkWidget *image18;

  dashboard = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_widget_set_size_request (dashboard, 600, 650);
  gtk_window_set_title (GTK_WINDOW (dashboard), _("Gestion des capteurs"));
  gtk_window_set_position (GTK_WINDOW (dashboard), GTK_WIN_POS_CENTER);
  gtk_window_set_resizable (GTK_WINDOW (dashboard), FALSE);

  fixed1 = gtk_fixed_new ();
  gtk_widget_show (fixed1);
  gtk_container_add (GTK_CONTAINER (dashboard), fixed1);

  button3_gh = gtk_button_new ();
  gtk_widget_show (button3_gh);
  gtk_fixed_put (GTK_FIXED (fixed1), button3_gh, 304, 0);
  gtk_widget_set_size_request (button3_gh, 296, 72);

  alignment14 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment14);
  gtk_container_add (GTK_CONTAINER (button3_gh), alignment14);

  hbox11 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox11);
  gtk_container_add (GTK_CONTAINER (alignment14), hbox11);

  image11 = gtk_image_new_from_stock ("gtk-zoom-fit", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image11);
  gtk_box_pack_start (GTK_BOX (hbox11), image11, FALSE, FALSE, 0);

  label35 = gtk_label_new_with_mnemonic (_("Afficher"));
  gtk_widget_show (label35);
  gtk_box_pack_start (GTK_BOX (hbox11), label35, FALSE, FALSE, 0);

  button1_gh = gtk_button_new ();
  gtk_widget_show (button1_gh);
  gtk_fixed_put (GTK_FIXED (fixed1), button1_gh, 0, 0);
  gtk_widget_set_size_request (button1_gh, 304, 72);

  alignment9 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment9);
  gtk_container_add (GTK_CONTAINER (button1_gh), alignment9);

  hbox6 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox6);
  gtk_container_add (GTK_CONTAINER (alignment9), hbox6);

  image6 = gtk_image_new_from_stock ("gtk-add", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image6);
  gtk_box_pack_start (GTK_BOX (hbox6), image6, FALSE, FALSE, 0);

  label28 = gtk_label_new_with_mnemonic (_("Ajouter"));
  gtk_widget_show (label28);
  gtk_box_pack_start (GTK_BOX (hbox6), label28, FALSE, FALSE, 0);

  button2_gh = gtk_button_new ();
  gtk_widget_show (button2_gh);
  gtk_fixed_put (GTK_FIXED (fixed1), button2_gh, 0, 72);
  gtk_widget_set_size_request (button2_gh, 304, 80);

  alignment10 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment10);
  gtk_container_add (GTK_CONTAINER (button2_gh), alignment10);

  hbox7 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox7);
  gtk_container_add (GTK_CONTAINER (alignment10), hbox7);

  image7 = gtk_image_new_from_stock ("gtk-edit", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image7);
  gtk_box_pack_start (GTK_BOX (hbox7), image7, FALSE, FALSE, 0);

  label29 = gtk_label_new_with_mnemonic (_("Modifier / supprimer /Rechercher"));
  gtk_widget_show (label29);
  gtk_box_pack_start (GTK_BOX (hbox7), label29, FALSE, FALSE, 0);

  button4_gh = gtk_button_new ();
  gtk_widget_show (button4_gh);
  gtk_fixed_put (GTK_FIXED (fixed1), button4_gh, 304, 72);
  gtk_widget_set_size_request (button4_gh, 304, 80);

  alignment11 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment11);
  gtk_container_add (GTK_CONTAINER (button4_gh), alignment11);

  hbox8 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox8);
  gtk_container_add (GTK_CONTAINER (alignment11), hbox8);

  image8 = gtk_image_new_from_stock ("gtk-dialog-warning", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image8);
  gtk_box_pack_start (GTK_BOX (hbox8), image8, FALSE, FALSE, 0);

  label32 = gtk_label_new_with_mnemonic (_("Capteur Defectieux"));
  gtk_widget_show (label32);
  gtk_box_pack_start (GTK_BOX (hbox8), label32, FALSE, FALSE, 0);

  image18 = create_pixmap (dashboard, "l-ing??nieur-ajuste-des-capteurs-de-pression-sur-usine-raffinerie-industrielle-technicien-travaillant-??-d-huile-141048088.jpg");
  gtk_widget_show (image18);
  gtk_fixed_put (GTK_FIXED (fixed1), image18, 0, 152);
  gtk_widget_set_size_request (image18, 600, 376);

  g_signal_connect ((gpointer) button3_gh, "clicked",
                    G_CALLBACK (on_button3_gh_clicked),
                    NULL);
  g_signal_connect ((gpointer) button1_gh, "clicked",
                    G_CALLBACK (on_button1_gh_clicked),
                    NULL);
  g_signal_connect ((gpointer) button2_gh, "clicked",
                    G_CALLBACK (on_button2_gh_clicked),
                    NULL);
  g_signal_connect ((gpointer) button4_gh, "clicked",
                    G_CALLBACK (on_button4_gh_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (dashboard, dashboard, "dashboard");
  GLADE_HOOKUP_OBJECT (dashboard, fixed1, "fixed1");
  GLADE_HOOKUP_OBJECT (dashboard, button3_gh, "button3_gh");
  GLADE_HOOKUP_OBJECT (dashboard, alignment14, "alignment14");
  GLADE_HOOKUP_OBJECT (dashboard, hbox11, "hbox11");
  GLADE_HOOKUP_OBJECT (dashboard, image11, "image11");
  GLADE_HOOKUP_OBJECT (dashboard, label35, "label35");
  GLADE_HOOKUP_OBJECT (dashboard, button1_gh, "button1_gh");
  GLADE_HOOKUP_OBJECT (dashboard, alignment9, "alignment9");
  GLADE_HOOKUP_OBJECT (dashboard, hbox6, "hbox6");
  GLADE_HOOKUP_OBJECT (dashboard, image6, "image6");
  GLADE_HOOKUP_OBJECT (dashboard, label28, "label28");
  GLADE_HOOKUP_OBJECT (dashboard, button2_gh, "button2_gh");
  GLADE_HOOKUP_OBJECT (dashboard, alignment10, "alignment10");
  GLADE_HOOKUP_OBJECT (dashboard, hbox7, "hbox7");
  GLADE_HOOKUP_OBJECT (dashboard, image7, "image7");
  GLADE_HOOKUP_OBJECT (dashboard, label29, "label29");
  GLADE_HOOKUP_OBJECT (dashboard, button4_gh, "button4_gh");
  GLADE_HOOKUP_OBJECT (dashboard, alignment11, "alignment11");
  GLADE_HOOKUP_OBJECT (dashboard, hbox8, "hbox8");
  GLADE_HOOKUP_OBJECT (dashboard, image8, "image8");
  GLADE_HOOKUP_OBJECT (dashboard, label32, "label32");
  GLADE_HOOKUP_OBJECT (dashboard, image18, "image18");

  return dashboard;
}

GtkWidget*
create_mod (void)
{
  GtkWidget *mod;
  GtkWidget *fixed2;
  GtkWidget *mod1_gh;
  GtkWidget *mod3_gh;
  GtkWidget *label4;
  GtkWidget *check_id_gh;
  GtkWidget *alignment18;
  GtkWidget *hbox15;
  GtkWidget *image15;
  GtkWidget *label41;
  GtkWidget *button_mod_gh;
  GtkWidget *alignment1;
  GtkWidget *hbox1;
  GtkWidget *image1;
  GtkWidget *label5;
  GtkWidget *button7;
  GtkWidget *alignment19;
  GtkWidget *hbox16;
  GtkWidget *image16;
  GtkWidget *label42;
  GtkWidget *entry2;
  GtkWidget *mod4_gh;
  GtkWidget *label30;
  GtkWidget *mod2_gh;
  GtkWidget *label7;
  GtkWidget *label8;
  GtkWidget *label45;

  mod = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_widget_set_size_request (mod, 784, 720);
  gtk_window_set_title (GTK_WINDOW (mod), _("Modifier un capteur"));
  gtk_window_set_position (GTK_WINDOW (mod), GTK_WIN_POS_CENTER);
  gtk_window_set_resizable (GTK_WINDOW (mod), FALSE);

  fixed2 = gtk_fixed_new ();
  gtk_widget_show (fixed2);
  gtk_container_add (GTK_CONTAINER (mod), fixed2);

  mod1_gh = gtk_entry_new ();
  gtk_widget_show (mod1_gh);
  gtk_fixed_put (GTK_FIXED (fixed2), mod1_gh, 184, 40);
  gtk_widget_set_size_request (mod1_gh, 176, 40);
  gtk_entry_set_invisible_char (GTK_ENTRY (mod1_gh), 8226);

  mod3_gh = gtk_entry_new ();
  gtk_widget_show (mod3_gh);
  gtk_fixed_put (GTK_FIXED (fixed2), mod3_gh, 176, 272);
  gtk_widget_set_size_request (mod3_gh, 168, 40);
  gtk_entry_set_invisible_char (GTK_ENTRY (mod3_gh), 8226);

  label4 = gtk_label_new (_("ID :"));
  gtk_widget_show (label4);
  gtk_fixed_put (GTK_FIXED (fixed2), label4, 72, 40);
  gtk_widget_set_size_request (label4, 72, 40);

  check_id_gh = gtk_button_new ();
  gtk_widget_show (check_id_gh);
  gtk_fixed_put (GTK_FIXED (fixed2), check_id_gh, 488, 32);
  gtk_widget_set_size_request (check_id_gh, 176, 56);

  alignment18 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment18);
  gtk_container_add (GTK_CONTAINER (check_id_gh), alignment18);

  hbox15 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox15);
  gtk_container_add (GTK_CONTAINER (alignment18), hbox15);

  image15 = gtk_image_new_from_stock ("gtk-find", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image15);
  gtk_box_pack_start (GTK_BOX (hbox15), image15, FALSE, FALSE, 0);

  label41 = gtk_label_new_with_mnemonic (_("Rechercher"));
  gtk_widget_show (label41);
  gtk_box_pack_start (GTK_BOX (hbox15), label41, FALSE, FALSE, 0);

  button_mod_gh = gtk_button_new ();
  gtk_widget_show (button_mod_gh);
  gtk_fixed_put (GTK_FIXED (fixed2), button_mod_gh, 488, 128);
  gtk_widget_set_size_request (button_mod_gh, 168, 56);

  alignment1 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment1);
  gtk_container_add (GTK_CONTAINER (button_mod_gh), alignment1);

  hbox1 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox1);
  gtk_container_add (GTK_CONTAINER (alignment1), hbox1);

  image1 = gtk_image_new_from_stock ("gtk-apply", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image1);
  gtk_box_pack_start (GTK_BOX (hbox1), image1, FALSE, FALSE, 0);

  label5 = gtk_label_new_with_mnemonic (_("Modifier"));
  gtk_widget_show (label5);
  gtk_box_pack_start (GTK_BOX (hbox1), label5, FALSE, FALSE, 0);

  button7 = gtk_button_new ();
  gtk_widget_show (button7);
  gtk_fixed_put (GTK_FIXED (fixed2), button7, 488, 224);
  gtk_widget_set_size_request (button7, 168, 61);

  alignment19 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment19);
  gtk_container_add (GTK_CONTAINER (button7), alignment19);

  hbox16 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox16);
  gtk_container_add (GTK_CONTAINER (alignment19), hbox16);

  image16 = gtk_image_new_from_stock ("gtk-cancel", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image16);
  gtk_box_pack_start (GTK_BOX (hbox16), image16, FALSE, FALSE, 0);

  label42 = gtk_label_new_with_mnemonic (_("Supprimer"));
  gtk_widget_show (label42);
  gtk_box_pack_start (GTK_BOX (hbox16), label42, FALSE, FALSE, 0);

  entry2 = gtk_entry_new ();
  gtk_widget_show (entry2);
  gtk_fixed_put (GTK_FIXED (fixed2), entry2, 176, 336);
  gtk_widget_set_size_request (entry2, 168, 43);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry2), 8226);

  mod4_gh = gtk_combo_box_new_text ();
  gtk_widget_show (mod4_gh);
  gtk_fixed_put (GTK_FIXED (fixed2), mod4_gh, 176, 136);
  gtk_widget_set_size_request (mod4_gh, 168, 40);
  gtk_combo_box_append_text (GTK_COMBO_BOX (mod4_gh), _("A"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (mod4_gh), _("B"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (mod4_gh), _("C"));

  label30 = gtk_label_new (_("Bloc :"));
  gtk_widget_show (label30);
  gtk_fixed_put (GTK_FIXED (fixed2), label30, 64, 136);
  gtk_widget_set_size_request (label30, 80, 32);

  mod2_gh = gtk_combo_box_new_text ();
  gtk_widget_show (mod2_gh);
  gtk_fixed_put (GTK_FIXED (fixed2), mod2_gh, 176, 208);
  gtk_widget_set_size_request (mod2_gh, 168, 40);
  gtk_combo_box_append_text (GTK_COMBO_BOX (mod2_gh), _("Temp\303\251rature"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (mod2_gh), _("D\303\251bit d'eau"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (mod2_gh), _("Mouvement"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (mod2_gh), _("Fum\303\251e"));

  label7 = gtk_label_new (_("Type :"));
  gtk_widget_show (label7);
  gtk_fixed_put (GTK_FIXED (fixed2), label7, 56, 208);
  gtk_widget_set_size_request (label7, 88, 32);

  label8 = gtk_label_new (_("Marque :"));
  gtk_widget_show (label8);
  gtk_fixed_put (GTK_FIXED (fixed2), label8, 64, 280);
  gtk_widget_set_size_request (label8, 72, 32);

  label45 = gtk_label_new (_("Etat :"));
  gtk_widget_show (label45);
  gtk_fixed_put (GTK_FIXED (fixed2), label45, 64, 336);
  gtk_widget_set_size_request (label45, 64, 41);

  g_signal_connect ((gpointer) check_id_gh, "clicked",
                    G_CALLBACK (on_check_id_gh_clicked),
                    NULL);
  g_signal_connect ((gpointer) button_mod_gh, "clicked",
                    G_CALLBACK (on_button_mod_gh_clicked),
                    NULL);
  g_signal_connect ((gpointer) button7, "clicked",
                    G_CALLBACK (on_button7_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (mod, mod, "mod");
  GLADE_HOOKUP_OBJECT (mod, fixed2, "fixed2");
  GLADE_HOOKUP_OBJECT (mod, mod1_gh, "mod1_gh");
  GLADE_HOOKUP_OBJECT (mod, mod3_gh, "mod3_gh");
  GLADE_HOOKUP_OBJECT (mod, label4, "label4");
  GLADE_HOOKUP_OBJECT (mod, check_id_gh, "check_id_gh");
  GLADE_HOOKUP_OBJECT (mod, alignment18, "alignment18");
  GLADE_HOOKUP_OBJECT (mod, hbox15, "hbox15");
  GLADE_HOOKUP_OBJECT (mod, image15, "image15");
  GLADE_HOOKUP_OBJECT (mod, label41, "label41");
  GLADE_HOOKUP_OBJECT (mod, button_mod_gh, "button_mod_gh");
  GLADE_HOOKUP_OBJECT (mod, alignment1, "alignment1");
  GLADE_HOOKUP_OBJECT (mod, hbox1, "hbox1");
  GLADE_HOOKUP_OBJECT (mod, image1, "image1");
  GLADE_HOOKUP_OBJECT (mod, label5, "label5");
  GLADE_HOOKUP_OBJECT (mod, button7, "button7");
  GLADE_HOOKUP_OBJECT (mod, alignment19, "alignment19");
  GLADE_HOOKUP_OBJECT (mod, hbox16, "hbox16");
  GLADE_HOOKUP_OBJECT (mod, image16, "image16");
  GLADE_HOOKUP_OBJECT (mod, label42, "label42");
  GLADE_HOOKUP_OBJECT (mod, entry2, "entry2");
  GLADE_HOOKUP_OBJECT (mod, mod4_gh, "mod4_gh");
  GLADE_HOOKUP_OBJECT (mod, label30, "label30");
  GLADE_HOOKUP_OBJECT (mod, mod2_gh, "mod2_gh");
  GLADE_HOOKUP_OBJECT (mod, label7, "label7");
  GLADE_HOOKUP_OBJECT (mod, label8, "label8");
  GLADE_HOOKUP_OBJECT (mod, label45, "label45");

  return mod;
}

GtkWidget*
create_af (void)
{
  GtkWidget *af;
  GtkWidget *fixed3;
  GtkWidget *scrolledwindow1;
  GtkWidget *alignment4;
  GtkWidget *treeview_gh;
  GtkWidget *label10;
  GtkWidget *button_af_gh;
  GtkWidget *alignment5;
  GtkWidget *hbox3;
  GtkWidget *image3;
  GtkWidget *label11;

  af = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_widget_set_size_request (af, 824, 600);
  gtk_window_set_title (GTK_WINDOW (af), _("Liste des capteurs"));
  gtk_window_set_position (GTK_WINDOW (af), GTK_WIN_POS_CENTER);
  gtk_window_set_resizable (GTK_WINDOW (af), FALSE);

  fixed3 = gtk_fixed_new ();
  gtk_widget_show (fixed3);
  gtk_container_add (GTK_CONTAINER (af), fixed3);

  scrolledwindow1 = gtk_scrolled_window_new (NULL, NULL);
  gtk_widget_show (scrolledwindow1);
  gtk_fixed_put (GTK_FIXED (fixed3), scrolledwindow1, 56, 104);
  gtk_widget_set_size_request (scrolledwindow1, 744, 368);

  alignment4 = gtk_alignment_new (0.5, 0.5, 1, 1);
  gtk_widget_show (alignment4);
  gtk_container_add (GTK_CONTAINER (scrolledwindow1), alignment4);

  treeview_gh = gtk_tree_view_new ();
  gtk_widget_show (treeview_gh);
  gtk_container_add (GTK_CONTAINER (alignment4), treeview_gh);
  gtk_tree_view_set_rules_hint (GTK_TREE_VIEW (treeview_gh), TRUE);
  gtk_tree_view_set_reorderable (GTK_TREE_VIEW (treeview_gh), TRUE);

  label10 = gtk_label_new (_("Liste des capteurs"));
  gtk_widget_show (label10);
  gtk_fixed_put (GTK_FIXED (fixed3), label10, 280, 16);
  gtk_widget_set_size_request (label10, 280, 56);

  button_af_gh = gtk_button_new ();
  gtk_widget_show (button_af_gh);
  gtk_fixed_put (GTK_FIXED (fixed3), button_af_gh, 360, 504);
  gtk_widget_set_size_request (button_af_gh, 112, 48);

  alignment5 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment5);
  gtk_container_add (GTK_CONTAINER (button_af_gh), alignment5);

  hbox3 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox3);
  gtk_container_add (GTK_CONTAINER (alignment5), hbox3);

  image3 = gtk_image_new_from_stock ("gtk-refresh", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image3);
  gtk_box_pack_start (GTK_BOX (hbox3), image3, FALSE, FALSE, 0);

  label11 = gtk_label_new_with_mnemonic (_("Afficher"));
  gtk_widget_show (label11);
  gtk_box_pack_start (GTK_BOX (hbox3), label11, FALSE, FALSE, 0);

  g_signal_connect ((gpointer) treeview_gh, "row_activated",
                    G_CALLBACK (on_treeview_row_activated),
                    NULL);
  g_signal_connect ((gpointer) button_af_gh, "clicked",
                    G_CALLBACK (on_button_af_gh_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (af, af, "af");
  GLADE_HOOKUP_OBJECT (af, fixed3, "fixed3");
  GLADE_HOOKUP_OBJECT (af, scrolledwindow1, "scrolledwindow1");
  GLADE_HOOKUP_OBJECT (af, alignment4, "alignment4");
  GLADE_HOOKUP_OBJECT (af, treeview_gh, "treeview_gh");
  GLADE_HOOKUP_OBJECT (af, label10, "label10");
  GLADE_HOOKUP_OBJECT (af, button_af_gh, "button_af_gh");
  GLADE_HOOKUP_OBJECT (af, alignment5, "alignment5");
  GLADE_HOOKUP_OBJECT (af, hbox3, "hbox3");
  GLADE_HOOKUP_OBJECT (af, image3, "image3");
  GLADE_HOOKUP_OBJECT (af, label11, "label11");

  return af;
}

GtkWidget*
create_aj (void)
{
  GtkWidget *aj;
  GtkWidget *fixed4;
  GtkWidget *ajc_gh;
  GtkWidget *aj3_gh;
  GtkWidget *aj1_gh;
  GtkWidget *aeg;
  GtkWidget *drawingarea1;
  GtkWidget *aj2_gh;
  GtkWidget *label13;
  GtkWidget *label14;
  GtkWidget *button_aj_gh;
  GtkWidget *alignment20;
  GtkWidget *hbox17;
  GtkWidget *image17;
  GtkWidget *label43;
  GtkWidget *label16;
  GtkWidget *aj6_gh;
  GSList *aj6_gh_group = NULL;
  GtkWidget *aj5_gh;
  GtkWidget *aj4_gh;
  GtkWidget *label31;
  GtkWidget *entry1;
  GtkWidget *label44;

  aj = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_widget_set_size_request (aj, 784, 550);
  gtk_window_set_title (GTK_WINDOW (aj), _("Ajouter un capteur"));
  gtk_window_set_position (GTK_WINDOW (aj), GTK_WIN_POS_CENTER);
  gtk_window_set_resizable (GTK_WINDOW (aj), FALSE);

  fixed4 = gtk_fixed_new ();
  gtk_widget_show (fixed4);
  gtk_container_add (GTK_CONTAINER (aj), fixed4);

  ajc_gh = gtk_calendar_new ();
  gtk_widget_show (ajc_gh);
  gtk_fixed_put (GTK_FIXED (fixed4), ajc_gh, 480, 136);
  gtk_widget_set_size_request (ajc_gh, 216, 184);
  gtk_calendar_display_options (GTK_CALENDAR (ajc_gh),
                                GTK_CALENDAR_SHOW_HEADING
                                | GTK_CALENDAR_SHOW_DAY_NAMES);

  aj3_gh = gtk_entry_new ();
  gtk_widget_show (aj3_gh);
  gtk_fixed_put (GTK_FIXED (fixed4), aj3_gh, 144, 72);
  gtk_widget_set_size_request (aj3_gh, 144, 32);
  gtk_entry_set_invisible_char (GTK_ENTRY (aj3_gh), 8226);

  aj1_gh = gtk_entry_new ();
  gtk_widget_show (aj1_gh);
  gtk_fixed_put (GTK_FIXED (fixed4), aj1_gh, 144, 32);
  gtk_widget_set_size_request (aj1_gh, 144, 32);
  gtk_entry_set_invisible_char (GTK_ENTRY (aj1_gh), 8226);

  aeg = gtk_label_new (_("Type :"));
  gtk_widget_show (aeg);
  gtk_fixed_put (GTK_FIXED (fixed4), aeg, 400, 40);
  gtk_widget_set_size_request (aeg, 112, 24);

  drawingarea1 = gtk_drawing_area_new ();
  gtk_widget_show (drawingarea1);
  gtk_fixed_put (GTK_FIXED (fixed4), drawingarea1, 352, 184);
  gtk_widget_set_size_request (drawingarea1, 16, 24);

  aj2_gh = gtk_combo_box_new_text ();
  gtk_widget_show (aj2_gh);
  gtk_fixed_put (GTK_FIXED (fixed4), aj2_gh, 520, 32);
  gtk_widget_set_size_request (aj2_gh, 168, 40);
  gtk_combo_box_append_text (GTK_COMBO_BOX (aj2_gh), _("Temp\303\251rature"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (aj2_gh), _("D\303\251bit d'eau"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (aj2_gh), _("Mouvement"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (aj2_gh), _("Fum\303\251e"));

  label13 = gtk_label_new (_("ID :"));
  gtk_widget_show (label13);
  gtk_fixed_put (GTK_FIXED (fixed4), label13, 56, 32);
  gtk_widget_set_size_request (label13, 104, 32);

  label14 = gtk_label_new (_("Marque :"));
  gtk_widget_show (label14);
  gtk_fixed_put (GTK_FIXED (fixed4), label14, 64, 80);
  gtk_widget_set_size_request (label14, 80, 24);

  button_aj_gh = gtk_button_new ();
  gtk_widget_show (button_aj_gh);
  gtk_fixed_put (GTK_FIXED (fixed4), button_aj_gh, 248, 344);
  gtk_widget_set_size_request (button_aj_gh, 176, 64);

  alignment20 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment20);
  gtk_container_add (GTK_CONTAINER (button_aj_gh), alignment20);

  hbox17 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox17);
  gtk_container_add (GTK_CONTAINER (alignment20), hbox17);

  image17 = gtk_image_new_from_stock ("gtk-add", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image17);
  gtk_box_pack_start (GTK_BOX (hbox17), image17, FALSE, FALSE, 0);

  label43 = gtk_label_new_with_mnemonic (_("Ajouter"));
  gtk_widget_show (label43);
  gtk_box_pack_start (GTK_BOX (hbox17), label43, FALSE, FALSE, 0);

  label16 = gtk_label_new (_("Date d'achat :"));
  gtk_widget_show (label16);
  gtk_fixed_put (GTK_FIXED (fixed4), label16, 320, 216);
  gtk_widget_set_size_request (label16, 152, 32);

  aj6_gh = gtk_radio_button_new_with_mnemonic (NULL, _("C"));
  gtk_widget_show (aj6_gh);
  gtk_fixed_put (GTK_FIXED (fixed4), aj6_gh, 192, 240);
  gtk_widget_set_size_request (aj6_gh, 116, 24);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (aj6_gh), aj6_gh_group);
  aj6_gh_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (aj6_gh));

  aj5_gh = gtk_radio_button_new_with_mnemonic (NULL, _("B"));
  gtk_widget_show (aj5_gh);
  gtk_fixed_put (GTK_FIXED (fixed4), aj5_gh, 192, 208);
  gtk_widget_set_size_request (aj5_gh, 116, 24);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (aj5_gh), aj6_gh_group);
  aj6_gh_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (aj5_gh));

  aj4_gh = gtk_radio_button_new_with_mnemonic (NULL, _("A"));
  gtk_widget_show (aj4_gh);
  gtk_fixed_put (GTK_FIXED (fixed4), aj4_gh, 192, 176);
  gtk_widget_set_size_request (aj4_gh, 116, 24);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (aj4_gh), aj6_gh_group);
  aj6_gh_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (aj4_gh));

  label31 = gtk_label_new (_("Bloc :"));
  gtk_widget_show (label31);
  gtk_fixed_put (GTK_FIXED (fixed4), label31, 64, 200);
  gtk_widget_set_size_request (label31, 112, 24);

  entry1 = gtk_entry_new ();
  gtk_widget_show (entry1);
  gtk_fixed_put (GTK_FIXED (fixed4), entry1, 520, 80);
  gtk_widget_set_size_request (entry1, 168, 35);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry1), 8226);

  label44 = gtk_label_new (_("Etat :"));
  gtk_widget_show (label44);
  gtk_fixed_put (GTK_FIXED (fixed4), label44, 424, 88);
  gtk_widget_set_size_request (label44, 64, 25);

  g_signal_connect ((gpointer) button_aj_gh, "clicked",
                    G_CALLBACK (on_button_aj_gh_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (aj, aj, "aj");
  GLADE_HOOKUP_OBJECT (aj, fixed4, "fixed4");
  GLADE_HOOKUP_OBJECT (aj, ajc_gh, "ajc_gh");
  GLADE_HOOKUP_OBJECT (aj, aj3_gh, "aj3_gh");
  GLADE_HOOKUP_OBJECT (aj, aj1_gh, "aj1_gh");
  GLADE_HOOKUP_OBJECT (aj, aeg, "aeg");
  GLADE_HOOKUP_OBJECT (aj, drawingarea1, "drawingarea1");
  GLADE_HOOKUP_OBJECT (aj, aj2_gh, "aj2_gh");
  GLADE_HOOKUP_OBJECT (aj, label13, "label13");
  GLADE_HOOKUP_OBJECT (aj, label14, "label14");
  GLADE_HOOKUP_OBJECT (aj, button_aj_gh, "button_aj_gh");
  GLADE_HOOKUP_OBJECT (aj, alignment20, "alignment20");
  GLADE_HOOKUP_OBJECT (aj, hbox17, "hbox17");
  GLADE_HOOKUP_OBJECT (aj, image17, "image17");
  GLADE_HOOKUP_OBJECT (aj, label43, "label43");
  GLADE_HOOKUP_OBJECT (aj, label16, "label16");
  GLADE_HOOKUP_OBJECT (aj, aj6_gh, "aj6_gh");
  GLADE_HOOKUP_OBJECT (aj, aj5_gh, "aj5_gh");
  GLADE_HOOKUP_OBJECT (aj, aj4_gh, "aj4_gh");
  GLADE_HOOKUP_OBJECT (aj, label31, "label31");
  GLADE_HOOKUP_OBJECT (aj, entry1, "entry1");
  GLADE_HOOKUP_OBJECT (aj, label44, "label44");

  return aj;
}

GtkWidget*
create_def (void)
{
  GtkWidget *def;
  GtkWidget *fixed6;
  GtkWidget *scrolledwindow2;
  GtkWidget *alignment8;
  GtkWidget *treeview_def_gh;
  GtkWidget *afficher_gh;
  GtkWidget *label25;

  def = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_widget_set_size_request (def, 824, 600);
  gtk_window_set_title (GTK_WINDOW (def), _("Capteur defectieux"));
  gtk_window_set_position (GTK_WINDOW (def), GTK_WIN_POS_CENTER);
  gtk_window_set_resizable (GTK_WINDOW (def), FALSE);

  fixed6 = gtk_fixed_new ();
  gtk_widget_show (fixed6);
  gtk_container_add (GTK_CONTAINER (def), fixed6);

  scrolledwindow2 = gtk_scrolled_window_new (NULL, NULL);
  gtk_widget_show (scrolledwindow2);
  gtk_fixed_put (GTK_FIXED (fixed6), scrolledwindow2, 56, 104);
  gtk_widget_set_size_request (scrolledwindow2, 744, 368);

  alignment8 = gtk_alignment_new (0.5, 0.5, 1, 1);
  gtk_widget_show (alignment8);
  gtk_container_add (GTK_CONTAINER (scrolledwindow2), alignment8);

  treeview_def_gh = gtk_tree_view_new ();
  gtk_widget_show (treeview_def_gh);
  gtk_container_add (GTK_CONTAINER (alignment8), treeview_def_gh);
  gtk_tree_view_set_rules_hint (GTK_TREE_VIEW (treeview_def_gh), TRUE);
  gtk_tree_view_set_reorderable (GTK_TREE_VIEW (treeview_def_gh), TRUE);

  afficher_gh = gtk_button_new_with_mnemonic (_("Afficher"));
  gtk_widget_show (afficher_gh);
  gtk_fixed_put (GTK_FIXED (fixed6), afficher_gh, 392, 504);
  gtk_widget_set_size_request (afficher_gh, 112, 48);

  label25 = gtk_label_new (_("Gestion des capteur"));
  gtk_widget_show (label25);
  gtk_fixed_put (GTK_FIXED (fixed6), label25, 272, 16);
  gtk_widget_set_size_request (label25, 280, 56);

  g_signal_connect ((gpointer) afficher_gh, "clicked",
                    G_CALLBACK (on_afficher_gh_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (def, def, "def");
  GLADE_HOOKUP_OBJECT (def, fixed6, "fixed6");
  GLADE_HOOKUP_OBJECT (def, scrolledwindow2, "scrolledwindow2");
  GLADE_HOOKUP_OBJECT (def, alignment8, "alignment8");
  GLADE_HOOKUP_OBJECT (def, treeview_def_gh, "treeview_def_gh");
  GLADE_HOOKUP_OBJECT (def, afficher_gh, "afficher_gh");
  GLADE_HOOKUP_OBJECT (def, label25, "label25");

  return def;
}

GtkWidget*
create_fontselectiondialog1 (void)
{
  GtkWidget *fontselectiondialog1;
  GtkWidget *ok_button1;
  GtkWidget *cancel_button1;
  GtkWidget *apply_button1;
  GtkWidget *font_selection1;

  fontselectiondialog1 = gtk_font_selection_dialog_new (_("Choisir la police"));
  gtk_container_set_border_width (GTK_CONTAINER (fontselectiondialog1), 5);
  gtk_window_set_type_hint (GTK_WINDOW (fontselectiondialog1), GDK_WINDOW_TYPE_HINT_DIALOG);

  ok_button1 = GTK_FONT_SELECTION_DIALOG (fontselectiondialog1)->ok_button;
  gtk_widget_show (ok_button1);
  GTK_WIDGET_SET_FLAGS (ok_button1, GTK_CAN_DEFAULT);

  cancel_button1 = GTK_FONT_SELECTION_DIALOG (fontselectiondialog1)->cancel_button;
  gtk_widget_show (cancel_button1);
  GTK_WIDGET_SET_FLAGS (cancel_button1, GTK_CAN_DEFAULT);

  apply_button1 = GTK_FONT_SELECTION_DIALOG (fontselectiondialog1)->apply_button;
  gtk_widget_show (apply_button1);
  GTK_WIDGET_SET_FLAGS (apply_button1, GTK_CAN_DEFAULT);

  font_selection1 = GTK_FONT_SELECTION_DIALOG (fontselectiondialog1)->fontsel;
  gtk_widget_show (font_selection1);
  gtk_container_set_border_width (GTK_CONTAINER (font_selection1), 5);
  gtk_font_selection_set_preview_text (GTK_FONT_SELECTION (font_selection1), _("D\303\250s No\303\253l o\303\271 un z\303\251phyr ha\303\257 me v\303\252t de gla\303\247ons w\303\274rmiens je d\303\256ne d\342\200\231exquis r\303\264tis de b\305\223uf au kir \303\240 l\342\200\231a\303\277 d\342\200\231\303\242ge m\303\273r & c\303\246tera\302\240! 0123456789."));

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (fontselectiondialog1, fontselectiondialog1, "fontselectiondialog1");
  GLADE_HOOKUP_OBJECT_NO_REF (fontselectiondialog1, ok_button1, "ok_button1");
  GLADE_HOOKUP_OBJECT_NO_REF (fontselectiondialog1, cancel_button1, "cancel_button1");
  GLADE_HOOKUP_OBJECT_NO_REF (fontselectiondialog1, apply_button1, "apply_button1");
  GLADE_HOOKUP_OBJECT_NO_REF (fontselectiondialog1, font_selection1, "font_selection1");

  return fontselectiondialog1;
}

