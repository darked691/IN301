/*
 * amie.c
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
int div(int n)
{int div,som;
	som=0;
	
	for(div=1;div<n;div++)
	{if(n%div==0) {som=som+div;}}
	return som;
	}

}

int main(int argc, char **argv)
{int n,m,i,j,nmax;
	scanf("%d",&n);
	scanf("%d",&m);
	int somN=div(n);
int somM=div(m);

if(m==somN && n==somM) {printf("amie");}
else
{printf("non amie");}




for(i=1;i<n;i++)
	{nmax=n-i;
		
	int somNMAX=div(nmax);
somN=div(n);
printf("%d",nmax);
if(nmax==somN && n==somNMAX) {printf("amie");
	printf("\n");}
else
{printf("non amie");
	printf("\n");}}
	
}
}

