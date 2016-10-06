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
int main(int argc, char **argv)
{int n,m,i,p,r;
	scanf("%d",&n);
	scanf("%d",&m);
	p=0;r=0;
	int t[n],t1[m];
	for(i=0;i<n;i++)
	{if(i>0 && i<n)
	{t[i]=5;
		p++;}
		for(i=n;i<n+m;i++)
	if(i>n-1 && i<m)
	{t1[i]=5;
		r++;}
	}
  
    printf("%d\n",p);
	printf("%d",r);
	
	return 0;
}

