typedef struct{
int id;
int idtete;
int idm1;
int idm2;
int idm3;
char code[50];

}liste;


int ajouter_liste(liste l );
int modifier_liste( int id,liste nouv);
int supprimer_liste(int id );
liste chercher_liste(int id);



