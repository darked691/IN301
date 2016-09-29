/*
 * sysaruse.c
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
{int n,i,y;
	i=0;
	y=0;
	scanf("%d",&n);
	while(n!=1)
	{if(n%2==0)
		{n=n/2;
			i++;
			printf("    i%d",i);
			if(n<10 )
	        {y++;
				printf(" ");
            printf("%d",y);}
			printf("\n");
			printf("%d",n);}
	else
	{n=3*n+1;
		i++;
		printf("    i%d",i);
		if(n<10 )
	    {y++;
			printf(" ");
        printf("%d",y);}
		printf("\n");
		printf("%d",n);}}

			
	
	return 0;
}

