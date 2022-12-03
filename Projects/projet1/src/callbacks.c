#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
int x;


void
on_button_clicked                      (GtkButton       *button,
                                        gpointer         user_data)
{

}


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
on_button_ac_gma_clicked               (GtkButton       *button,
                                        gpointer         user_data)
{
  
  GtkWidget *LE_pagevote_gma;
  GtkWidget *Le_Pajout_gma;
  GtkWidget *LE_Pmodifier_gma;
  GtkWidget *LE_Psupp_gma;
  LE_pagevote_gma = lookup_widget(button, "LE_pagevote_gma");
  Le_Pajout_gma = lookup_widget(button, "Le_Pajout_gma");
  LE_Pmodifier_gma = lookup_widget(button, "LE_Pmodifier_gma");
  LE_Psupp_gma = lookup_widget(button, "LE_Psupp_gma");
  gtk_widget_hide (LE_pagevote_gma);
  gtk_widget_hide (Le_Pajout_gma);
  gtk_widget_hide (LE_Pmodifier_gma);
  gtk_widget_hide (LE_Psupp_gma);
  	
  GtkWidget *LE_acceuil_gma;
  LE_acceuil_gma = create_LE_acceuil_gma ();
  gtk_widget_show (LE_acceuil_gma);
}


void
on_button_vote_gma_clicked             (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button_save_gma_clicked             (GtkButton       *button,
                                        gpointer         user_data)
{ 
  gchar idl[50];
  gchar idt[50];
  gchar idm1[50];
  gchar idm2[50];
  gchar idm3[50];
  gchar ch[50]="liste ajouter avec succée!!!";
  GtkWidget *label = lookup_widget(GTK_WIDGET(button), "label38");
  GtkWidget *entry = lookup_widget(GTK_WIDGET(button), "entry_idl_gma");
  strcpy(idl,gtk_entry_get_text(GTK_ENTRY(entry)) );
  GtkWidget *entry1 = lookup_widget(GTK_WIDGET(button), "entry_idt_gma");
  strcpy(idt,gtk_entry_get_text(GTK_ENTRY(entry1)) );
  GtkWidget *entry2 = lookup_widget(GTK_WIDGET(button), "entry_m1_gma");
  strcpy(idm1,gtk_entry_get_text(GTK_ENTRY(entry2)) );
  GtkWidget *entry3 = lookup_widget(GTK_WIDGET(button), "entry_m2_gma");
  strcpy(idm2,gtk_entry_get_text(GTK_ENTRY(entry3)) );
  GtkWidget *entry4 = lookup_widget(GTK_WIDGET(button), "entry_m3_gma");
  strcpy(idm3,gtk_entry_get_text(GTK_ENTRY(entry4)) );
  gtk_label_set_text( GTK_LABEL(label),ch);

liste l;
l.id=atoi(idl);
l.idtete=atoi(idt);
l.idm[0]=atoi(idm1);
l.idm[1]=atoi(idm2);
l.idm[2]=atoi(idm3);
l.nv=0;
 if(x==1)
{strcpy(l.ori,"gauche");}
else if(x==2)
{strcpy(l.ori,"centre");}
else if(x==3)
{strcpy(l.ori,"droite");}

	


FILE *f=fopen("listes_electorales.txt","a");
    if(f!=NULL)
    {
	fprintf(f,"%d %d %d %d %d %s %d\n",l.id,l.idtete,l.idm[0],l.idm[1],l.idm[2],l.ori,l.nv);
        fclose(f);}

}


void
on_button_modi_gma_clicked             (GtkButton       *button,
                                        gpointer         user_data)
{
  

}


void
on_button_supp_gma_clicked             (GtkButton       *button,
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
on_button_saveavote_gma_clicked        (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_radiobutton1_ga_toggled             (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if (gtk_toggle_button_get_active(GTK_RADIO_BUTTON (togglebutton)))
{x=1;}

}


void
on_radiobutton2_ce_toggled             (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if (gtk_toggle_button_get_active(GTK_RADIO_BUTTON (togglebutton)))
{x=2;}
}


void
on_radiobutton3_dr_toggled             (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if (gtk_toggle_button_get_active(GTK_RADIO_BUTTON (togglebutton)))
{x=3;}
}

