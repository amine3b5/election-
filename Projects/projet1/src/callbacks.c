#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
int x;
int y;


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
  GtkWidget *output ;
  int id;
  liste nouv;
  gchar idl[50];
  gchar idt[50];
  gchar idm1[50];
  gchar idm2[50];
  gchar idm3[50];
  gchar ch[50]="liste modifier avec succée!!!";
  gchar sh[50]="veuillez verifié le ID de la liste!!!";
  //GtkWidget *label = lookup_widget(GTK_WIDGET(button), "label39");
  output=lookup_widget(button, "label39");
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
  
id=atoi(idl);
 if(y==1)
{strcpy(nouv.ori,"gauche");}
else if(y==2)
{strcpy(nouv.ori,"centre");}
else if(y==3)
{strcpy(nouv.ori,"droite");}

    
    
    liste anc;
    FILE *f=fopen("listes_electorales.txt","r");
    FILE *f2=fopen("nouv.txt","w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%d %d %d %d %d %s %d\n",&anc.id,&anc.idtete,&anc.idm[0],&anc.idm[1],&anc.idm[2],anc.ori,&anc.nv)!=EOF)
        {
            if(anc.id!=id)
            {   fprintf(f2,"%d %d %d %d %d %s %d\n",anc.id,anc.idtete,anc.idm[0],anc.idm[1],anc.idm[2],anc.ori,anc.nv);
		//gtk_label_set_text( GTK_LABEL(output),sh);
}
                
            else{
		nouv.id=id;
		nouv.idtete=atoi(idt);
		nouv.idm[0]=atoi(idm1);
		nouv.idm[1]=atoi(idm2);
		nouv.idm[2]=atoi(idm3);
		nouv.nv=0;
                fprintf(f2,"%d %d %d %d %d %s %d\n",nouv.id,nouv.idtete,nouv.idm[0],nouv.idm[1],nouv.idm[2],nouv.ori,nouv.nv);
            
		gtk_label_set_text( GTK_LABEL(output),ch);}

        }
    }
    fclose(f);
    fclose(f2);
    remove("listes_electorales.txt");
    rename("nouv.txt","listes_electorales.txt");

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


void
on_radiobutton_mg_gma_toggled          (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if (gtk_toggle_button_get_active(GTK_RADIO_BUTTON (togglebutton)))
{y=1;}
}


void
on_radiobutton_mc_gma_toggled          (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if (gtk_toggle_button_get_active(GTK_RADIO_BUTTON (togglebutton)))
{y=2;}
}


void
on_radiobutton_md_gma_toggled          (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if (gtk_toggle_button_get_active(GTK_RADIO_BUTTON (togglebutton)))
{y=3;}
}

