/*******************************************************************************
 *                   Dobókocka - C nyelven
 *
 *  Dobókocka - véletlenszámok példa program
 *
 * Copyright (C) 2019 skamilinux.hu
 ******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dobas;

    srand(time(0)); //enélkül a sor nélkül mindig ugyanaz a szám jönne ki
    dobas=(rand()%6)+1; //a plusz 1 azért kell, hogy ne legyen nulla és 5 közötti eredmény
    printf("\n\t A dobas eredmenye: %d \n", dobas);

    return 0;
}
