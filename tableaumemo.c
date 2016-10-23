/*
 * tableaumemo.c
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
#include <time.h>
struct tab
 {int t[100];
	 int p;
 };
 typedef struct tab tableau;
int alea_int(int n)
{
	int i=rand()%n;
	return i;
}

tableau init_tab()
{ tableau t;
	int i;
t.p=10;
t.t[8]=alea_int(20);
	for(i=0;i<10;i++)
		{t.t[i]=alea_int(20);}
	return t;
		
}
tableau affiche()
{tableau t;
	int i;
	for(i=0;i<10;i++)
{printf("%d ",t.t[i]);
}
return t;
}
int produit(tableau t)
{
	int i,prod;
	prod=1;
	t.p=10;
	for(i=0;i<10;i++)
		{prod=prod*t.t[i];}
	return prod;

}
int minimum(tableau t)
{int s,i;
	s=0;
	for(i=1;i<10;i++)
	{
		if(t.t[s]>t.t[i])
		{s=i;}
    }
	return t.t[s];
    
}
tableau decal(tableau t)
{int i,n,s;
	n=9;
	
	for(i=9;i>1;i--)
    {   s=0;
		s=t.t[i-1];
		if(i%2==1)
		t.t[i-1]=t.t[i];
		if(i%2==0)
		s=t.t[i];
	}
	n=n+1;
	t.t[n]=0;

	return t;
}
 tableau tri (tableau t)
 {int i,s;
	s=0;
	i=0;
	 while(i<t.p)
	{ i++;
		s=minimum(t);
		t.t[i]=s;}
		return t;
	}
int main(int argc, char **argv)
{int prod,min,i;
	prod=1;
	min=0;
	srand(time(NULL));
tableau t;
t=init_tab();
//~ t=affiche();
//~ printf("%d",t.t[0]);
 //~ prod=produit(t);
 //~ min=minimum(t);
 //~ printf("%d\n",min);
 for(i=0;i<10;i++)
 {printf(" %d ",t.t[i]);}
 t=tri(t);
 printf("\n");
 for(i=0;i<10;i++)
 {printf(" %d ",t.t[i]);}
	//~ printf("%d\n",alea_int(60));
	//~ printf("%d\n",alea_int(60));
	//~ printf("%d\n",alea_int(60));
	//~ printf("%d\n",alea_int(60));
	return 0;
}

