/*
 * 1b.c
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
{int n,s,m,h;
	scanf("%d",&n);
	s=n%60;
	m=n/60;
	
	h=n/3600;
	if(m>60)
		{m=m%60;}
		if(h>24)
		{h=h%24;}
	printf("seconde=");
	printf("%d",s);	
	printf("\nminute=");
	printf("%d",m);
    printf("\nheure=");	
	printf("%d",h);
	
	
	
	return 0;
}

