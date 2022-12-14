#include <gtk/gtk.h>
#include <string.h>
typedef struct{
char id[10];
char idtete[10];
char idm1[10];
char idm2[10];
char idm3[10];
char ori[50];
char nv[10];



}el;
void
on_button_vo_gma_clicked               (GtkButton       *button,
                                        gpointer         user_data);

void
on_button_md_gma_clicked               (GtkButton       *button,
                                        gpointer         user_data);

void
on_button_aj_gma_clicked               (GtkButton       *button,
                                        gpointer         user_data);

void
on_button_sup_gma_clicked              (GtkButton       *button,
                                        gpointer         user_data);

void
on_button_clicked                      (GtkButton       *button,
                                        gpointer         user_data);

void
on_radiobutton_novote_gma_toggled      (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_radiobutton_deja_gma_toggled        (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_checkbutton_vb_gma_toggled          (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_button_vote_gma_clicked             (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_button_ac_gma_clicked               (GtkButton       *button,
                                        gpointer         user_data);

void
on_button_save_gma_clicked             (GtkButton       *button,
                                        gpointer         user_data);

void
on_radiobutton3_dr_toggled             (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_radiobutton2_ce_toggled             (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_radiobutton1_ga_toggled             (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_radiobutton_md_gma_toggled          (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_radiobutton_mc_gma_toggled          (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_button_modi_gma_clicked             (GtkButton       *button,
                                        gpointer         user_data);

void
on_button_supp_gma_clicked             (GtkButton       *button,
                                        gpointer         user_data);

void
on_radiobutton_mg_gma_toggled          (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_treeview2_gma_row_activated         (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);


void
on_button1_ref_gma_clicked             (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_button_findliste_gma_clicked        (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_button1_quitte_gma_clicked          (GtkButton       *button,
                                        gpointer         user_data);

void
on_button2_retour_gma_clicked          (GtkButton       *button,
                                        gpointer         user_data);
