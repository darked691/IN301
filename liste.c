/*
 * liste.c
 * 
 * Copyright 2016 Utilisateur <user@lubuntu>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <stdio.h>
#include <stdlib.h>

struct element
{int val;
struct element* suiv;
};
typedef struct element element;
typedef element* liste;

liste creer_vide(){
	return NULL;  }

int est_vide(liste l)
{if(l==NULL)return 1;
else return 0;}

void affiche(liste l)
{ 
	element *tmp=l;
	while(tmp!=NULL)
	{printf("%d ",tmp->val);
	tmp=tmp->suiv;
    }
}

void affiche_recursif(liste l){
	if(est_vide(l))
	{printf("\n");}
	else
	{printf("%d",l->val);
		affiche(l->suiv);
	}
}
void libere(liste l)
{
	if(!est_vide(l))
	{
		libere(l->suiv);
		free(l);
	}
}
liste insere_debut(liste l,int x){
	liste new=malloc(sizeof(element));
	new->val=x;
	new->suiv=l;
	
	
	return new;}
	
 liste insere_fin(liste l,int x)
 {
	 liste new=malloc(sizeof(element));
	new->val=x;
	new->suiv=NULL;
 
	element *tmp=l;
	while(tmp!=NULL)
	{
		tmp=tmp->suiv;}
	tmp->suiv=new;
	return new;
  }

	
int main(int argc, char **argv)
{liste l=creer_vide();
	l=insere_debut(l,10);
	l=insere_debut(l,15);
	affiche(l);
	printf("\n");
	l=insere_fin(l,20);
	l=insere_fin(l,25);
	affiche(l);
	return 0;
}

