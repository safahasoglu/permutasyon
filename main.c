#include <stdio.h>
#include <stdlib.h>

int main() {
    int sayi1,sayi2,carpim = 1;

    printf("N ve R degerlerini girin...\n");
    scanf("%d%d",&sayi1,&sayi2);

    int kullanicininGirdigiRakam2 = sayi2;
    int kullanicininGirdigiRakam1 = sayi1;



    if (sayi1>sayi2) {
        while (sayi2>0){
            //printf("%d\n",sayi1);
            carpim = carpim * sayi1;
            sayi1--;
            sayi2--;
        }

        printf("%dP%d: %d",kullanicininGirdigiRakam1,kullanicininGirdigiRakam2,carpim);

        }
    else {
        printf("N, R'den buyuk olmak zorundadir.\n");
    }


}


