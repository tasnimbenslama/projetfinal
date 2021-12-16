#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <gtk/gtk.h>
typedef struct date
{
    int j;
    int m;
    int a;
}date;

typedef struct mesure
{
    int jour;
    int heure;
    int id;
    int valeur;
}mesure;


typedef struct capteur
{
    char id[20];
    int type;
    char bloc[2];
    char marque[20];
    char Etat[20] ;
    date d  ;
}capteur;

void ajouter(capteur u, char *fname);
void supprimer(capteur u, char *fname);
void modifier(capteur u, char *fname);
void afficher(GtkWidget *liste, char *fname);
void cap_def(GtkWidget *liste, char *fname, char *fname1);

