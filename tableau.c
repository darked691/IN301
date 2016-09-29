/*
 * tableau.c
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
int t(int n)
{int i,T[n];
	for(i=0;i<n;i++)
	{T[i]=1;
		return T[i];}}

int mult(int n)
{int i,T[n],m;
	m=1;
	for(i=0;i<n;i++)
	{m=m*T[i];}
	return m;}
int min(int n)
{int i,p,T[n];
	for(i=0;i<n;i++)
	{if(T[i]>T[p])
	{p=i;}}
	return T[p];}
	void dec(int n)
	{int i,T[n];
		T[0]=0;
		T[n-1]=-1;
	for(i=1;i<n-1;i++)
    {T[i+1]=T[i];
		printf("%d",T[i+1]);}
    }


int main(int argc, char **argv)
{int n,T[n],i;
	n=10;
	for(i=0;i<n;i++)
	{T[i]=alea_int(10);}
dec(n);
	return 0;
}

