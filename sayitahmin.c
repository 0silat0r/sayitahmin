#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    // 1'den 10'a kadar sayi tahmin edebilen bir oyun.
    system("clear");
    srand(time(0));
    int n = rand() % 10;
    printf("Sayi Tahmin V1.1\n");
    printf("Programming by Sh4d0wE4\n");
    printf("Degerli oyuncu, bilgisayar tarafindan, 1'den 10'a kadar olan sayi adetlerinin\narasindan bir sayi tahmin edilmistir. Amacin o sayiyi bulmaktir. Basarilar.\n");
    
    while(true)
    {
        int tahmin;
        int sayac = 0;
        printf("Tahmin: ");
        scanf("%d", &tahmin);

        if (tahmin < n) 
        {
            printf("Degerli oyuncu, yazmis oldugun sayi, tahmin edilen degerden cok kucuk. Tekrar dene.\n");
            sayac = sayac + 1;
            continue;
        }
        if (tahmin > n) 
        {
            printf("Degerli oyuncu, yazmis oldugun sayi, tahmin edilen degerden cok buyuk. Tekrar dene.\n");
            sayac = sayac + 1;
            continue;
        }
        if (tahmin == n)
        {
            system("clear");
            printf("Tebrikler! Dogru sayiya ulastin.\n");
            printf("--------------------------------------------\n");
            printf("Bilgisayar tarafindan tahmin edilen sayi: %d\n", n);
            printf("Denemelerin: %d\n", sayac);
            printf("--------------------------------------------\n");
            break;
        }
    }
}
