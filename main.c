//
//  main.c
//  mocnění_horner
//
//Určete poslední dvě číslice zadané mocniny. Na prvním řádku vstupu je číslo a, které je základem mocniny. Na druhém řádku je zadaný exponent b. Zatímco základ je zadán v desítkové soustavě, exponent je zadán v soustavě dvojkové. Určete poslední dvojčíslí mocniny a^b. Povšimněte si, prosím, že neříkáme, zda se zadaná čísla vejdou vůbec do nějakého datového typu (neřkuli do paměti).


//  Created by Natálie Smolíková on 16.10.2021.
//

#include <stdio.h>

int dejcislo()
{
 int vstup1, vstup2;
 vstup1 = getchar();
 //vstup2 = getchar();

if (vstup1 == 45)
{   vstup1 = getchar();
    vstup2 = getchar();
    int z;
    z = getchar();
    while ((z >= 48) && (z <= 57))
    {
        vstup1 = vstup2;
        vstup2 = z;
        z = getchar();
    }
   return ((vstup1 - 48) * 10 + (vstup2 - 48));
}

    
//if (vstup1 >= 48 && vstup1 <= 57)
    else
{
     vstup2 = getchar();
    if (vstup2 >=48 && vstup2 <=57)
    {    int z;
         z = getchar();
         while ((z >= 48) && (z <= 57))
         {
             vstup1 = vstup2;
             vstup2 = z;
             z = getchar();
         }
        return ((vstup1 - 48) * 10 + (vstup2 - 48));
    }

    else
    {
        return (vstup1-48);
    }
}

 }
    

int mocneni(int a, int b)
{
    int i = 0, cislo =1;
    
    for (i; i<b;++i)
    {
        cislo *= a;
    }
    return cislo;
}

int main()
{   int mocnina, zaklad, vysledek = 1;
    
    zaklad = dejcislo();
    //printf("%d", zaklad);
    
    mocnina = getchar();
    while(mocnina >=48 && mocnina <=49)
    {
        mocnina -= 48;
        vysledek = (mocneni(vysledek, 2) * mocneni(zaklad, mocnina)) %100;
        mocnina = getchar();
    }
    
    
    
    if (vysledek >= 1 && vysledek <=9)
        
        printf("%d%d",0, vysledek);
    else
        printf("%d", vysledek);
    
    return 0;
}
