// C Programming Language Random Number Game 
// Programmer : cpu-astatine 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    system("clear");
    printf("Random Numara Oyununa Hos Geldiniz\n");
    printf("Programming By cpu-astatine\n");
    printf("Lutfen seciminizi yapin\n");
    
    int secim;
    printf("1- Kolay\n2- Normal\n3- Zor\n: ");
    scanf("%d", &secim);

    if(secim == 1) {
        int puan = 100;
        system("clear");
        printf("Kolay Mod\n");
        printf("Kolay Mod'a hosgeldin.\nBilgisayar, 1'den 10'a kadar olan herhangi bir sayi tahmin etti.\nO sayiyi bul.\nPuan sifirlanirsa oyun biter.\nIyi sanslar\n");
        while(puan > 0)
        {
            int randomNumber = random_number_level1();
            int tahmin;
            printf("Lutfen tahminini gir : ");
            scanf("%d", &tahmin);
            if (tahmin < randomNumber) {
                printf("Girmis oldugun tahmin sayi, tahmin edilen sayidan kucuk. Tekrar dene.\n");
                puan = puan - 10;
                continue;
            }
            if (tahmin > randomNumber) {
                printf("Girmis oldugun tahmin sayi, tahmin edilen sayidan buyuk. Tekrar dene.\n");
                puan = puan - 10;
                continue;
            }
            if (tahmin == randomNumber) {
                printf("Tebrikler tahmin edilen sayiyi buldun!\n");
                printf("Tahmin edilen sayi : %d\n", randomNumber);
                printf("Puanin : %d\n", puan);
                sleep(5);
                break;
            }
            if (puan == 0)
            {
                printf("Oyun bitti.\n");
                sleep(5);
                break;
            }
        }
    }
    if(secim == 2) {
        int puan = 100;
        system("clear");
        printf("Normal Mod\n");
        printf("Normal Mod'a hosgeldin.\nBilgisayar, 1'den 100'e kadar olan herhangi bir sayi tahmin etti.\nO sayiyi bul.\nPuan sifirlanirsa oyun biter.\nIyi sanslar\n");
        while(puan > 0) {
            int randomNumber = random_number_level2();
            int tahmin;
            printf("Lutfen tahminini gir : ");
            scanf("%d", &tahmin);
            if (tahmin < randomNumber) {
                printf("Girmis oldugun tahmin sayi, tahmin edilen sayidan kucuk. Tekrar dene.\n");
                puan = puan - 10;
                continue;
            }
            if (tahmin > randomNumber) {
                printf("Girmis oldugun tahmin sayi, tahmin edilen sayidan buyuk. Tekrar dene.\n");
                puan = puan - 10;
                continue;
            }
            if (tahmin == randomNumber) {
                printf("Tebrikler tahmin edilen sayiyi buldun!\n");
                printf("Tahmin edilen sayi : %d\n", randomNumber);
                printf("Puanin : %d\n", puan);
                sleep(5);
                break;
            }
            if (puan == 0) {
                printf("Oyun bitti.\n");
                sleep(5);
                break;
            }
        }
    }
    if(secim == 3) {
        int puan = 100;
        system("clear");
        printf("Zor Mod\n");
        printf("Zor Mod'a hosgeldin.\nBilgisayar, 1'den 1000'e kadar olan herhangi bir sayi tahmin etti.\nO sayiyi bul.\nPuan sifirlanirsa oyun biter.\nIyi sanslar\n");
        while(puan > 0) {
            int randomNumber = random_number_level3();
            int tahmin;
            printf("Lutfen tahminini gir : ");
            scanf("%d", &tahmin);
            if (tahmin < randomNumber) {
                printf("Girmis oldugun tahmin sayi, tahmin edilen sayidan kucuk. Tekrar dene.\n");
                puan = puan - 10;
                continue;
            }
            if (tahmin > randomNumber) {
                printf("Girmis oldugun tahmin sayi, tahmin edilen sayidan buyuk. Tekrar dene.\n");
                puan = puan - 10;
                continue;
            }
            if (tahmin == randomNumber) {
                printf("Tebrikler tahmin edilen sayiyi buldun!\n");
                printf("Tahmin edilen sayi : %d\n", randomNumber);
                printf("Puanin : %d\n", puan);
                sleep(5);
                break;
            }
            if (puan == 0) {
                printf("Oyun bitti.\n");
                sleep(5);
                break;
            }
        }
    }
}

int random_number_level1()
{
    srand(time(NULL));
    int number = rand() %10;
    printf("%d\n", number);
    return 1;
}

int random_number_level2()
{
    srand(time(NULL));
    int number = rand() %100;
    printf("%d\n", number);
    return 1;
}

int random_number_level3()
{
    srand(time(NULL));
    int number = rand() %1000;
    printf("%d\n", number);
    return 1;
}
