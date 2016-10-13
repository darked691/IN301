/*
 * valtab.c
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
struct amis
{int t[1][1];
int* n;
};
void modif(struct amis S,int T[1][1])
{
	  printf("%d %d %d %d\n",sizeof(S),sizeof(T),sizeof(S.t),sizeof(S.n));
	T[0][0]=1;
	S.t[0][0]=1;
	S.n[0]=1;
}
int main()
{struct amis S;
	
	int T[1][1]={{0}};
	S.n[0]=1;
	S.t[0][0]=0;
	S.n=malloc(sizeof(int));
	S.n[0]=0;
	
	 //~ printf("%d %d %d\n",T[0][0],S.t[0][0],S.p[0]);
	modif(S,T);
	//~ printf("%d %d %d\n",T[0][0],S.t[0][0],S.p[0]);
	free(S.n);
	
	return 0;
}

