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


int alea(int n)
{
	
	return rand()%n;
}

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
	 if(new==NULL) return 0;
	new->val=x;
	new->suiv=NULL;
	if(l==NULL)
	{return new;}
	else
	{
        element *tmp=l;
	while(tmp->suiv!=NULL)
	{
		tmp=tmp->suiv;}
	tmp->suiv=new;
	
	return l;
}
  }
  liste ajout(liste l,int p)
  {if(l==NULL)
	 {
    liste new=malloc(sizeof(element));
	new->val=p;
	new->suiv=l;
	
 }
	
	else
{l->suiv=ajout(l->suiv,p);}
}
	
  liste remplir_alea(liste l,int n)
  {int p=alea(n);
	  while(p!=0)
	  {l=insere_debut(l,p);
		  p=alea(n);}
		  return l;
  }
int est_trie(liste l)
{
	int i; 
    element *tmp=l;
	element *tmp1=l;
	while(tmp->suiv!=NULL && tmp1->suiv!=NULL)
	{
		tmp1=tmp;
		tmp=tmp->suiv;
		
		if(tmp->val>tmp1->val)
		{
			
		    return 1;
			
			}
		else 
		return 0;
	}
}
int nombre_element(liste l)
{
	int occ;
	occ=1;
	element *tmp=l;
	while(tmp->suiv!=NULL)
	{
		tmp=tmp->suiv;
		occ++;
	}
	return occ;
}
int search(liste l,int e)
{
	element *tmp=l;
	while(tmp->suiv!=NULL)
	{
		tmp=tmp->suiv;
		if(tmp->val==e)
		return 1;
	}
	return 0;
}
liste delete(liste l)
{
	if(l!=NULL)
	{
		element *tmp=l->suiv;
		free(l);
	
	return tmp;
   }
   else
   {
	   return NULL;
   }
}liste delete2(liste l)
{
	if(l==NULL)
	{return NULL;}
	if(l->suiv==NULL)
	{free(l);
	return NULL;}
	element *tmp=l;
	element *tmp1=l;
	while(tmp->suiv!=NULL)
	{
		tmp1=tmp;
		tmp=tmp->suiv;
	}
	tmp1->suiv=NULL;
	free(tmp);
	return l;
}
liste inverse(liste l,liste l1)
{ int x;
	l1=insere_fin(delete(l),l->val);}
liste somme(liste l)
{
	int a;
	a=0;
	element *tmp=l;
	while(tmp!=NULL)
	{ if(tmp->suiv!=NULL)
		{
	    tmp=tmp->suiv;
		a=a+tmp->val;
	    }
	    else
	    {
			a=a+tmp->val;
			l=insere_fin(l,a);
			
			
		}
	}
	
	
	
	return l;
}
liste sup(liste l,int x)
{
	if(l==NULL)
	{return NULL;}
	if(l->val==x)
     {
		 element* tmp=l->suiv;
         free(l);
         tmp=sup(tmp,x);
         return tmp;
      }
      else
      {
		  l->suiv=sup(l->suiv,x);
		  return l;
	  }

   
}

	
liste conca(liste l1,liste l2)
{ 
	if(!l1)
	return l2;
	element *tmp=l1;
	while(tmp->suiv)
	tmp=tmp->suiv;
	tmp->suiv=l2;
	
	return l1;
}
int pre(liste l,liste l1)
{
	int compt=0;
	element *tmp=l;
	element *tmp1=l1;
	while(tmp->suiv!=NULL && tmp1-> suiv!=NULL)
	{
		while(tmp->val==tmp1->val)
	  {
		  compt++;
		tmp=tmp->suiv;
		tmp1=tmp1->suiv;
		
	  }
	  return compt++;
	}
	
}
liste inserefin(liste l,char x)
 {
	 liste new=malloc(sizeof(element));
	 if(new==NULL) return 0;
	new->val=x;
	new->suiv=NULL;
	if(l==NULL)
	{return new;}
	else
	{
        element *tmp=l;
	while(tmp->suiv!=NULL)
	{
		tmp=tmp->suiv;}
	tmp->suiv=new;
	
	return l;
}
  }
 liste entrelace(liste l,liste l1)
 {
	 if(l==NULL)
	 return l1;
	 if(l1==NULL)
	 return l;
	 if(l->val<l1->val)
	 {l->suiv=entrelace(l->suiv,l1);
	 
	 }
	 else
	  {l1->suiv=entrelace(l,l1->suiv);
		  
	}
}
liste bulle(liste l)
{
	int s;
	element *tmp=l;
	element *tmp1=tmp->suiv;
	if(tmp->val>tmp1->val)
		{
		s=tmp1->val;
		tmp1->val=tmp->val;
		tmp->val=s;
	}
	while(tmp1->suiv!=NULL)
	{
		tmp=tmp->suiv;
		tmp1=tmp1->suiv;
		if(tmp->val>tmp1->val)
		{
		s=tmp1->val;
		tmp1->val=tmp->val;
		tmp->val=s;
	    }
	 }
	 return l;
}		
		
int main(int argc, char **argv)
{
	 int compt=0;
	 int a=0;
	srand(time(NULL));
	liste l=creer_vide();
	liste l1=creer_vide();
	liste l2=creer_vide();
	//~ l=inserefin(l,c);
	//~ l=inserefin(l,o);
	//~ l=inserefin(l,n);
	//~ l=inserefin(l,d);
	//~ 
	//~ l1=inserefin(l1,c);
	//~ l1=inserefin(l1,o);
	//~ l1=inserefin(l1,n);
	//~ l1=inserefin(l1,s);
	//~ l1=inserefin(l1,s);
	l=remplir_alea(l,20);
	affiche(l);
	printf("\n");
	l=sup(l,10);
	  affiche(l);
	
	//~ for(a=0;a<3;a++)
		//~ {
			  //~ l=bulle(l);
		  	 //~ printf("\n");
		     //~ est_trie(l);
	    	 //~ affiche(l);
      //~ }
	 //~ 
	 //~ printf("\n");
		 //~ ;
	libere(l);
	
	
	return 0;
}

