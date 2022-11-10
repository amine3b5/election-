#include "utilisateur.h"


int ajouter(char *filename , utilisateur p)
{
    FILE * f=fopen(filename, "a");
    if(f!=NULL)
    {
        fprintf(f,"%s %s %s %d %s %d %d %d %d %s \n",p.tu,p.nom,p.prenom,p.cin,p.mdp,p.age,p.cp,p.nbv,p.vote,p.sexe);
        fclose(f);
        return 1;
    }
    else return 0;
}

int modifier(int CIN, utilisateur nouv, char * filename)
{
	utilisateur p;
	FILE * f=fopen(filename, "r");
    	FILE * f2 =fopen("aux.txt", "w");
    if(f==NULL || f2==NULL)
return 0;
else
    {
while(fscanf(f,"%s %s %s %d %s %d %d %d %d %s \n",p.tu,p.nom,p.prenom,&p.cin,p.mdp,&p.age,&p.cp,&p.nbv,&p.vote,p.sexe)!=EOF)
{
if(p.cin!=cin)
        fprintf(f2,"%s %s %s %d %s %d %d %d %d %s \n",p.tu,p.nom,p.prenom,p.cin,p.mdp,p.age,p.cp,p.nbv,p.vote,p.sexe);
else

  fprintf(f2,"%s %s %s %d %s %d %d %d %d %s \n",p.tu,p.nom,p.prenom,p.cin,p.mdp,p.age,p.cp,p.nbv,p.vote,p.sexe);

   }
        fclose(f);
        fclose(f2);
remove(filename);
rename("aux.txt", filename);
        return 1;
    }

}

int supprimer(int cin, char * filename)
{
    utilisateur p;
    FILE * f=fopen(filename, "r");
    FILE * f2 =fopen("aux.txt", "w");
    if(f==NULL || f2==NULL)
return 0;
else
    {
while(fscanf(f,"%s %s %s %d %s %d %d %d %d %s \n",p.tu,p.nom,p.prenom,&p.cin,p.mdp,&p.age,&p.cp,&p.nbv,&p.vote,p.sexe)!=EOF)
{
if(p.id!=id)
        fprintf(f2,"%s %s %s %d %s %d %d %d %d %s \n",p.tu,p.nom,p.prenom,p.cin,p.mdp,p.age,p.cp,p.nbv,p.vote,p.sexe);

}
        fclose(f);
        fclose(f2);
remove(filename);
rename("aux.txt", filename);
        return 1;
    }
}
utilisateur chercher(long cin, char * filename)
{
utilisateur p;
 int tr;
    FILE * f=fopen(filename, "r");
tr=0;
 if(f!=NULL )
    {
while(tr==0 && fscanf(f,"%s %s %s %d %s %d %d %d %d %s \n",p.tu,p.nom,p.prenom,&p.cin,p.mdp,&p.age,&p.cp,&p.nbv,&p.vote,p.sexe)!=EOF)
{if(p.cin==cin)
tr=1;
}
}
fclose(f);
if(tr==0)
p.cin=-1;
return p;

}


