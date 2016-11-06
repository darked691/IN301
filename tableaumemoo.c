/*
 * 1.c
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
void tri_insertion(int tab[], int taille)

{

   int i, j;

   for (i = 1; i < taille; ++i) {

       int elem = tab[i];

       for (j = i; j > 0 && tab[j-1] > elem; j--)

           tab[j] = tab[j-1];

       tab[j] = elem;

   }

}
void inserer(int element_a_inserer, int tab[], int taille_gauche)

{

    int j;

    for (j = taille_gauche; j > 0 && tab[j-1] > element_a_inserer; j--)

      tab[j] = tab[j-1];

    tab[j] = element_a_inserer;

}
int main(int argc, char **argv)
{
    int i;
    int n=10;
    int tableau[10] = {9, 8, 6, 7, 5, 2, 4, 1, 3, 10};
    
    printf("avant le tri : ");
    for(i = 0; i < 10; i++) printf("%d ", tableau[i]);
    printf("\n");
    
    tri_insertion(tableau, 10);
  
    
    printf("apres le tri : ");
    for(i = 0; i < 10; i++) printf("%d ", tableau[i]);
    printf("\n");
	
	return 0;
}

