#include <gtk/gtk.h>

typedef struct{
int id;
int idtete;
int idm[3];
char ori[50];
int nv;

}liste;

void
on_button_clicked                      (GtkButton       *button,
                                        gpointer         user_data);

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
on_button_ac_gma_clicked               (GtkButton       *button,
                                        gpointer         user_data);

void
on_button_vote_gma_clicked             (GtkButton       *button,
                                        gpointer         user_data);

void
on_button_save_gma_clicked             (GtkButton       *button,
                                        gpointer         user_data);

void
on_button_modi_gma_clicked             (GtkButton       *button,
                                        gpointer         user_data);

void
on_button_supp_gma_clicked             (GtkButton       *button,
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
on_button_saveavote_gma_clicked        (GtkButton       *button,
                                        gpointer         user_data);

void
on_radiobutton1_ga_toggled             (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_radiobutton2_ce_toggled             (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_radiobutton3_dr_toggled             (GtkToggleButton *togglebutton,
                                        gpointer         user_data);
