#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "utilisateur.h"

int ajouter(char *fn , utilisateur p)
{
    FILE *f=fopen(fn, "a");
    if(f!=NULL)
    {
        fprintf(f,"%s %s %s %d %d %s %d %d %d %d %s \n",p.tu,p.nom,p.prenom,p.cin,p.id,p.mdp,p.age,p.cp,p.nbv,p.vote,p.sexe);
        fclose(f);
        return 1;
    }
    else return 0;
}

int modifier(char *fn, int id, utilisateur nouv)
{
	utilisateur p;
	int tr=0;
	FILE *f=fopen(fn, "r");
    	FILE *f2 =fopen("aux.txt", "w");
	if(f!=NULL && f2!=NULL)
	{
		while(fscanf(f,"%s %s %s %d %d %s %d %d %d %d %s \n",p.tu,p.nom,p.prenom,&p.cin,&p.id,p.mdp,&p.age,&p.cp,&p.nbv,&p.vote,p.sexe)!=EOF)
		{
			if(p.id==id) 
			{fprintf(f2,"%s %s %s %d %d %s %d %d %d %d %s \n",nouv.tu,nouv.nom,nouv.prenom,nouv.cin,nouv.id,nouv.mdp,nouv.age,nouv.cp,nouv.nbv,nouv.vote,nouv.sexe);
tr=1;}
			else
			fprintf(f2,"%s %s %s %d %d %s %d %d %d %d %s \n",p.tu,p.nom,p.prenom,p.cin,p.id,p.mdp,p.age,p.cp,p.nbv,p.vote,p.sexe);
		}
        	fclose(f);
        	fclose(f2);
		remove(fn);
		rename("aux.txt", fn);
        	return tr;
	}
}

int supprimer(char *fn, int id)
{
    	utilisateur p;
    	FILE *f=fopen(fn, "r");
	FILE *f2=fopen("aux.txt", "w");
	if(f!=NULL && f2!=NULL)
	{
		while(fscanf(f,"%s %s %s %d %d %s %d %d %d %d %s \n",p.tu,p.nom,p.prenom,&p.cin,&p.id,p.mdp,&p.age,&p.cp,&p.nbv,&p.vote,p.sexe)!=EOF)
		{
			if(p.id!=id)
        		fprintf(f2,"%s %s %s %d %d %s %d %d %d %d %s \n",p.tu,p.nom,p.prenom,p.cin,p.id,p.mdp,p.age,p.cp,p.nbv,p.vote,p.sexe);
		}	
        fclose(f);
        fclose(f2);
	remove(fn);
	rename("aux.txt", fn);
        return 1;
	}
}

utilisateur chercher(char *fn, int id)
{
	utilisateur p;
	int tr;
	FILE *f=fopen(fn, "r");
	tr=0;
	if(f!=NULL )
	{
		while(tr==0 && fscanf(f,"%s %s %s %d %d %s %d %d %d %d %s \n",p.tu,p.nom,p.prenom,&p.cin,&p.id,p.mdp,&p.age,&p.cp,&p.nbv,&p.vote,p.sexe)!=EOF)
			if(p.id==id) tr=1;
	}
	fclose(f);
	if(tr==0) p.id=-1;
	return p;
}

float agemoyen(char * fn)
{ 
	utilisateur p;
	int nb_age=0;
	int nb_elec=0;
	float moy;
	FILE *f=fopen(fn, "r");
	if(f!=NULL )
	{
		while(fscanf(f,"%s %s %s %d %d %s %d %d %d %d %s \n",p.tu,p.nom,p.prenom,&p.cin,&p.id,p.mdp,&p.age,&p.cp,&p.nbv,&p.vote,p.sexe)!=EOF)
		{ 
			if ((strcmp("electeur",p.tu)==0) && (p.vote!=-1) )
               		{
                     		nb_elec++;
                  		nb_age=nb_age+p.age;
				moy=(nb_age/(nb_elec*1.0));	
			}		
		}
	}
fclose(f);
return moy;
}

int nbe( char * fn, int  id )
{
	int z=0;
	utilisateur p;
	FILE *f=fopen(fn, "r");
	if(f!=NULL)
	{
        	while(fscanf(f,"%s %s %s %d %d %s %d %d %d %d %s \n",p.tu,p.nom,p.prenom,&p.cin,&p.id,p.mdp,&p.age,&p.cp,&p.nbv,&p.vote,p.sexe)!=EOF)
        	{
			if(p.id==id){
				if (strcmp("electeur",p.tu)==0) z++;
				    }
		}
	}
fclose(f);
return z;
}


