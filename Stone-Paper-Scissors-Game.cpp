#include<stdio.h>
#include<conio.h>
#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    printf("tas kagit makas oyununa hosgeldiniz \n ");
    srand(time(NULL));

    int ben, bilg, benp = 0, rakipp = 0, secim;

    while (1) {
        bilg = rand() % 3 + 1;
        printf(" 1-tas \n 2- kagit \n 3-makas\n ");
        printf("lutfen seciminizi yapiniz \n");
        scanf("%d", &ben); 
        if (ben == bilg) {
            printf("berabere\n");

        }
        else if (ben == 1 && bilg == 2) {
            printf("bilgisayar  kazandi\n");
            rakipp++;
        }
        else if (ben == 1 && bilg == 3) {
            printf("sen kazandin\n");
            benp++;
        }
        else if (ben == 2 && bilg == 1) {
            printf("sen kazandin\n");
            benp++;

        }
        else if (ben == 2 && bilg == 3) {

            printf("bilgisayar kazandi\n");
            rakipp++;
        }
        else if (ben == 3 && bilg == 1) {
            printf("bilgisayar kazandi\n");
            rakipp++;
        }
        else if (ben == 3 && bilg == 2) {
            printf("sen kazandin");
            benp++;
        }
        else {
            printf("yanlis secim.\n");
        }

        printf("skor: sen = %d \n bilgisayar = %d\n ", benp, rakipp);

        
        if (benp == 5 || rakipp == 5) {
            break;
        }
    }

    if (benp == 5) {
        printf("sen kazandin,oyun bitti.\n");
    }
    else {
        printf("bilgisayar kazandi,oyun bitti \n");
    }

    getch();
    return 0;
}
