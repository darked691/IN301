/*
 * taillememory.c
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
//~ void permute(int* a,int *b)
//~ {int temp;
	//~ temp=*a;
	//~ *a=*b;
	//~ *b=temp;
//~ }
//~ int f(int b,int a)
//~ { a=1;
	//~ b=1;}
	void reinitpointeur(int **p)
	{*p=NULL;}
int main(int argc, char **argv)
{
	//~ int a,b;
	//~ a=3;
	//~ b=7;
	//~ permute(&a,&b);
	
	//~ printf("a=%d b=%d"a,b);
	 //~ printf("%d",sizeof(char));
	 //~ printf("%d",sizeof(int));
     //~ printf("%d",sizeof(double));
     //~ printf("%d",sizeof(char*));
	 //~ printf("%d",sizeof(void*));
     //~ printf("%d %d %d",sizeof(int*),sizeof(double*),sizeof(int**));
	 //~ printf("%d %d ",sizeof(int[10]),sizeof(char[7][3]));
	 //~ char tab[10];
	 //~ printf("%d %d %d %d %d",sizeof(tab),sizeof(tab[0]),sizeof(&tab[0]),sizeof(*&tab[0]),sizeof(*&tab));
	//~ char (*p)[10]=&tab;
	//~ printf("%d %d %d %d ",sizeof(p),sizeof(*p),sizeof((*p)[2]),sizeof(&(*p)[2]));
	//~ int a=1;
	//~ int b=2;
	//~ f(a,b);
	//~ printf("%d %d",a,b);
	int a=1;
	int *p=&a;
	reinitpointeur(&p);
	printf("%d",p);
	return 0;
}

