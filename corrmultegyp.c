/*
 * corrmultegyp.c
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
{
	int a,x,y;
	a=0;
	scanf("%d",&x);
	scanf("%d",&y);
	
	printf("%d*%d \n",x,y);
	while(x!=1)
	{if(x%2==1)
		{a=a+y;
			x=x-1;
			printf("%d*%d+%d\n",x,y,a);}
			else
			{x=x/2;
				y=y*a;
				printf("%d*%d+%d",x,y,a);}
				printf("%d\n",y+a);
			}
	return 0;
}

