/*
 * somracine.c
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
#include <math.c>
float precision(float n)
{float precision;
	float inf=0;
	
	
	float sup=n;
	float mid=(inf+sup)/2;
	while((mid*mid<=n-precision) || (mid*mid>=n+precision))
	{
		if(mid*mid>=n)
		{
			sup=mid;
			mid=(inf+sup)/2;
		}
		else
		{
			inf=mid;
			mid=(inf+sup)/2;
		}
	}
return mid;	
}
int main(int argc, char **argv)
{double n,i,p,som;
	scanf("%f",&n);
	p=0;som=0;
	for(i=1;i<n;i++)
	{
		
	  p=sqrt(i);
	 som=sqrt(som+p);
	}		
	return 0;
}

