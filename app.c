#include <stdio.h>
#include <stdlib.h>

void clear(){
    // linux
    // system("clear");
    
    // windows
    system("cls");
}

int main(){

    int n;
    char ulang;

    top:
    clear();
    printf("\n--------------------------------\n");
    printf("Konversi Heksadesimal ke Desimal\n");
    printf("By : AFFALXIMAM\n");
    printf("--------------------------------\n\n");

    printf("Masukan bilangan Heksadesimal : ");
    scanf("%x", &n);
    printf("Bilangan Desimal Adalah : %d \n\n", n);
    
    cek:
    printf("Apakah ingin mengulang ? (y/t) : ");
    scanf(" %c", &ulang);
        if(ulang == 'y'){
            goto top;
        }
        if(ulang == 't'){
            printf("\nProgram Selesai");
        }
        else{
            goto cek;
        }
    return 0;
}