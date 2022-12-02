typedef struct{
int id;
int idtete;
int idm[3];
char ori[50];
int nv;

}liste;


int ajouter_liste(char *,liste);
int modifier_liste( char *,int,liste);
int supprimer_liste(char *,int);
liste chercher_liste(char *,int);



