#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>
#include <string.h>
#include "callbacks.h"
#include "interface.h"
#include "fon.h"
#include "support.h"

int x=1;
int y=1;
void
on_button_vo_gma_clicked               (GtkButton       *button,
                                        gpointer         user_data)
{
  GtkWidget *LE_acceuil_gma;
  GtkWidget *LE_pagevote_gma;
  LE_acceuil_gma = lookup_widget(button, "LE_acceuil_gma");
  gtk_widget_hide (LE_acceuil_gma);
  LE_pagevote_gma = create_LE_pagevote_gma ();
  gtk_widget_show (LE_pagevote_gma);
}


void
on_button_md_gma_clicked               (GtkButton       *button,
                                        gpointer         user_data)
{
  GtkWidget *LE_acceuil_gma;
  GtkWidget *LE_Pmodifier_gma;
  LE_acceuil_gma = lookup_widget(button, "LE_acceuil_gma");
  gtk_widget_hide (LE_acceuil_gma);
  LE_Pmodifier_gma = create_LE_Pmodifier_gma ();
  gtk_widget_show (LE_Pmodifier_gma);
}


void
on_button_aj_gma_clicked               (GtkButton       *button,
                                        gpointer         user_data)
{
  GtkWidget *LE_acceuil_gma;
  GtkWidget *Le_Pajout_gma;
  LE_acceuil_gma = lookup_widget(button, "LE_acceuil_gma");
  gtk_widget_hide (LE_acceuil_gma);
  Le_Pajout_gma = create_Le_Pajout_gma ();
  gtk_widget_show (Le_Pajout_gma);
}


void
on_button_sup_gma_clicked              (GtkButton       *button,
                                        gpointer         user_data)
{
  GtkWidget *LE_acceuil_gma;
  GtkWidget *LE_Psupp_gma;
  LE_acceuil_gma = lookup_widget(button, "LE_acceuil_gma");
  gtk_widget_hide (LE_acceuil_gma);
  LE_Psupp_gma = create_LE_Psupp_gma ();
  gtk_widget_show (LE_Psupp_gma);
}


void
on_button_clicked                      (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_radiobutton_novote_gma_toggled      (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}


void
on_radiobutton_deja_gma_toggled        (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}


void
on_checkbutton_vb_gma_toggled          (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}


void
on_button_vote_gma_clicked             (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
int a;
int valeur;
char ch[50]="vote enregistrer avec succée pour La liste ";
char ch1[10];
el nouv;
el anc;
GtkWidget *nour=lookup_widget(objet_graphique,"spinbutton_num_gma");
GtkWidget *label = lookup_widget(GTK_WIDGET(objet_graphique), "label42_gma");
valeur=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON (nour));
if(valeur==-1)
	{gtk_label_set_text( GTK_LABEL(label),"aucun vote enregistrer");}
else{
sprintf(ch1,"%d",valeur);
strcat(ch,ch1);



    FILE *f=fopen("listes_electorales.txt","r");
    FILE *f2=fopen("nouv.txt","w");
	    if(f!=NULL /*&& f2!=NULL*/)
    {
        while(fscanf(f,"%s %s %s %s %s %s %s\n",anc.id,anc.idtete,anc.idm1,anc.idm2,anc.idm3,anc.ori,anc.nv)!=EOF)
        {
            if(strcmp(anc.id,ch1)==0)
            {  
		//incrimentation de nv
		a=atoi(anc.nv);
		a=a+1;
		sprintf(nouv.nv,"%d",a);
		fprintf(f2,"%s %s %s %s %s %s %s\n",anc.id,anc.idtete,anc.idm1,anc.idm2,anc.idm3,anc.ori,nouv.nv);
		gtk_label_set_text( GTK_LABEL(label),ch);


		
            }
	    else{
		fprintf(f2,"%s %s %s %s %s %s %s\n",anc.id,anc.idtete,anc.idm1,anc.idm2,anc.idm3,anc.ori,anc.nv);
		gtk_label_set_text( GTK_LABEL(label),"veuillez verifier le num de la liste");
                }

        }
    
    }
    fclose(f);
    fclose(f2);
    remove("listes_electorales.txt");
    rename("nouv.txt","listes_electorales.txt");
}


}


void
on_button_ac_gma_clicked               (GtkButton       *button,
                                        gpointer         user_data)
{
  GtkWidget *LE_pagevote_gma;
  GtkWidget *Le_Pajout_gma;
  GtkWidget *LE_Pmodifier_gma;
  GtkWidget *LE_Psupp_gma;
  GtkWidget *LE_recherche_gma;
  LE_pagevote_gma = lookup_widget(button, "LE_pagevote_gma");
  Le_Pajout_gma = lookup_widget(button, "Le_Pajout_gma");
  LE_Pmodifier_gma = lookup_widget(button, "LE_Pmodifier_gma");
  LE_Psupp_gma = lookup_widget(button, "LE_Psupp_gma");
  LE_recherche_gma = lookup_widget(button, "LE_recherche_gma");
  
  gtk_widget_hide (LE_pagevote_gma);
  gtk_widget_hide (Le_Pajout_gma);
  gtk_widget_hide (LE_Pmodifier_gma);
  gtk_widget_hide (LE_Psupp_gma);
  gtk_widget_hide (LE_recherche_gma);
  	
  GtkWidget *LE_acceuil_gma;
  LE_acceuil_gma = create_LE_acceuil_gma ();
  gtk_widget_show (LE_acceuil_gma);
}


void
on_button_save_gma_clicked             (GtkButton       *button,
                                        gpointer         user_data)
{
  el l;
  gchar ch[45]="liste ajouter avec succée!!!";
  
  GtkWidget *label = lookup_widget(GTK_WIDGET(button), "label37_gma");
  GtkWidget *entry = lookup_widget(GTK_WIDGET(button), "entry_idl_gma");
  strcpy(l.id,gtk_entry_get_text(GTK_ENTRY(entry)) );
  GtkWidget *entry1 = lookup_widget(GTK_WIDGET(button), "entry_idt_gma");
  strcpy(l.idtete,gtk_entry_get_text(GTK_ENTRY(entry1)) );
  GtkWidget *entry2 = lookup_widget(GTK_WIDGET(button), "entry_m1_gma");
  strcpy(l.idm1,gtk_entry_get_text(GTK_ENTRY(entry2)) );
  GtkWidget *entry3 = lookup_widget(GTK_WIDGET(button), "entry_m2_gma");
  strcpy(l.idm2,gtk_entry_get_text(GTK_ENTRY(entry3)) );
  GtkWidget *entry4 = lookup_widget(GTK_WIDGET(button), "entry_m3_gma");
  strcpy(l.idm3,gtk_entry_get_text(GTK_ENTRY(entry4)) );
  


strcpy(l.nv,"0");
 if(x==1)
{strcpy(l.ori,"gauche");}
else if(x==2)
{strcpy(l.ori,"centre");}
else if(x==3)
{strcpy(l.ori,"droite");}

	


FILE *f=fopen("listes_electorales.txt","a");
    if(f!=NULL)
    {
	fprintf(f,"%s %s %s %s %s %s %s\n",l.id,l.idtete,l.idm1,l.idm2,l.idm3,l.ori,l.nv);
        fclose(f);}
	gtk_label_set_text( GTK_LABEL(label),ch);
}


void
on_radiobutton3_dr_toggled             (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if (gtk_toggle_button_get_active(GTK_RADIO_BUTTON (togglebutton)))
{x=3;}
}


void
on_radiobutton2_ce_toggled             (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if (gtk_toggle_button_get_active(GTK_RADIO_BUTTON (togglebutton)))
{x=2;}
}


void
on_radiobutton1_ga_toggled             (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if (gtk_toggle_button_get_active(GTK_RADIO_BUTTON (togglebutton)))
{x=1;}
}


void
on_radiobutton_md_gma_toggled          (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if (gtk_toggle_button_get_active(GTK_RADIO_BUTTON (togglebutton)))
{y=3;}
}


void
on_radiobutton_mc_gma_toggled          (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if (gtk_toggle_button_get_active(GTK_RADIO_BUTTON (togglebutton)))
{y=2;}
}


void
on_button_modi_gma_clicked             (GtkButton       *button,
                                        gpointer         user_data)
{
  int tr=0;
  char id[10];
  el nouv;
  el anc;
    
  GtkWidget *output =lookup_widget(button, "label40_gma");
  GtkWidget *entry = lookup_widget(GTK_WIDGET(button), "entry_idlm_gma");
  GtkWidget *entry1 = lookup_widget(GTK_WIDGET(button), "entry_idtm_gma");
  GtkWidget *entry2 = lookup_widget(GTK_WIDGET(button), "entry_m1m_gma");
  GtkWidget *entry3 = lookup_widget(GTK_WIDGET(button), "entry_m2m_gma");
  GtkWidget *entry4 = lookup_widget(GTK_WIDGET(button), "entry_m3m_gma");
  
strcpy(id,gtk_entry_get_text(GTK_ENTRY(entry)));
 if(y==1)
{strcpy(nouv.ori,"gauche");}
else 
if(y==2)
{strcpy(nouv.ori,"centre");}
else 
if(y==3)
{strcpy(nouv.ori,"droite");}

strcpy(nouv.id,gtk_entry_get_text(GTK_ENTRY(entry)));
strcpy(nouv.idtete,gtk_entry_get_text(GTK_ENTRY(entry1)));
strcpy(nouv.idm1,gtk_entry_get_text(GTK_ENTRY(entry2)));
strcpy(nouv.idm2,gtk_entry_get_text(GTK_ENTRY(entry3)));
strcpy(nouv.idm3,gtk_entry_get_text(GTK_ENTRY(entry4)));
strcpy(nouv.nv,"0");

    FILE *f=fopen("listes_electorales.txt","r");
    FILE *f2=fopen("nouv.txt","w");
    if(f!=NULL /*&& f2!=NULL*/)
    {
        while(fscanf(f,"%s %s %s %s %s %s %s\n",anc.id,anc.idtete,anc.idm1,anc.idm2,anc.idm3,anc.ori,anc.nv)!=EOF)
        {
            if(strcmp(anc.id,id)==0)
            {  
		fprintf(f2,"%s %s %s %s %s %s %s\n",nouv.id,nouv.idtete,nouv.idm1,nouv.idm2,nouv.idm3,nouv.ori,nouv.nv); 
		tr=1;
            }
	    else{
		fprintf(f2,"%s %s %s %s %s %s %s\n",anc.id,anc.idtete,anc.idm1,anc.idm2,anc.idm3,anc.ori,anc.nv);
                }

        }
    }
    fclose(f);
    fclose(f2);
    remove("listes_electorales.txt");
    rename("nouv.txt","listes_electorales.txt");
  if(tr==1)
  {gtk_label_set_text( GTK_LABEL(output),"liste modifié avec succée");}
  else
  {gtk_label_set_text( GTK_LABEL(output),"veuillez verifié id de la liste");}


}


void
on_button_supp_gma_clicked             (GtkButton       *button,
                                        gpointer         user_data)
{
  char id[10];
  int tr=0;
  el l;
  GtkWidget *output =lookup_widget(button, "label41_gma");
  GtkWidget *entry = lookup_widget(GTK_WIDGET(button), "entry_idlsupp_gma");
  
   strcpy(id,gtk_entry_get_text(GTK_ENTRY(entry)));
   FILE *f=fopen("listes_electorales.txt","r");
   FILE *f2=fopen("nouv.txt","w");
    if(f!=NULL && f2!=NULL)
    {	
	while(fscanf(f,"%s %s %s %s %s %s %s\n",l.id,l.idtete,l.idm1,l.idm2,l.idm3,l.ori,l.nv)!=EOF)
        {
            if(strcmp(l.id,id)==0)
                tr=1;
            else
                fprintf(f2,"%s %s %s %s %s %s %s\n",l.id,l.idtete,l.idm1,l.idm2,l.idm3,l.ori,l.nv);
        }
    }
    fclose(f);
    fclose(f2);
    remove("listes_electorales.txt");
    rename("nouv.txt","listes_electorales.txt");
  if(tr==1)
  {gtk_label_set_text( GTK_LABEL(output),"liste supprimé avec succée");}
  else
  {gtk_label_set_text( GTK_LABEL(output),"veuillez verifié id de la liste");}
}


void
on_radiobutton_mg_gma_toggled          (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if (gtk_toggle_button_get_active(GTK_RADIO_BUTTON (togglebutton)))
{y=1;}
}


void
on_treeview2_gma_row_activated         (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{
GtkTreeIter iter;
gchar* id;
gchar* idtete;
gchar* idm1;
gchar* idm2;
gchar* idm3;
gchar* ori;
gchar* nv;
el l;

GtkTreeModel *model=gtk_tree_view_get_model(treeview);

if(gtk_tree_model_get_iter(model,&iter,path))
{
gtk_tree_model_get(GTK_LIST_STORE(model),&iter,0,&id,1,&idtete,2,&idm1,3,&idm2,4,&idm3,5,&ori,6,&nv,-1);

afficher(treeview);
}
}


void
on_button1_ref_gma_clicked             (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *LE_recherche_gma;
GtkWidget *w;
GtkWidget *treeview2_gma;

w=lookup_widget(objet,"LE_recherche_gma");
LE_recherche_gma=create_LE_recherche_gma();

gtk_widget_show(LE_recherche_gma);
gtk_widget_hide(w);

treeview2_gma=lookup_widget(LE_recherche_gma,"treeview2_gma");

afficher(treeview2_gma);
}


void
on_button_findliste_gma_clicked        (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *LE_acceuil_gma;
GtkWidget *LE_recherche_gma;
GtkWidget *treeview2_gma;
LE_acceuil_gma=lookup_widget(objet,"LE_acceuil_gma");
gtk_widget_destroy(LE_acceuil_gma);

LE_recherche_gma=lookup_widget(objet,"LE_recherche_gma");
LE_recherche_gma=create_LE_recherche_gma();
gtk_widget_show(LE_recherche_gma);

treeview2_gma=lookup_widget(LE_recherche_gma,"treeview2_gma");
afficher(treeview2_gma);

}


void
on_button1_quitte_gma_clicked          (GtkButton       *button,
                                        gpointer         user_data)
{
/*GtkWidget *LE_acceuil_gma;
GtkWidget *window2;
LE_acceuil_gma=lookup_widget(objet,"LE_acceuil_gma");
gtk_widget_destroy(LE_acceuil_gma);
window2=create_connexion();
gtk_widget_show(window2);*/
}


void
on_button2_retour_gma_clicked          (GtkButton       *button,
                                        gpointer         user_data)
{
/*GtkWidget *LE_acceuil_gma;
GtkWidget *window2;
LE_acceuil_gma=lookup_widget(objet,"LE_acceuil_gma");
gtk_widget_destroy(LE_acceuil_gma);
window2=create_Menu();
gtk_widget_show(window2);*/

}

