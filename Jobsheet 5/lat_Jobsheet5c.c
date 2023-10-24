/*
Identitas Program :
Nama : Raditya Rafif Pratama Sasmita
NIM : 3.34.23.2.18
*/

#include <stdio.h>

int main()
{
    /*Latihan if-else untuk menentukan rentang angka*/
    /*Kamus/Deklarasi Variabel*/
    int angka;

    /*Input Data*/
    printf("Masukan Angka : ");
    scanf_s("%d", &angka);

    /* Proses Algoritmas */
    if ((angka >= 0) && (angka <= 100))
    {
        printf("Angka berada di rentang 0-100.\n");
    }
    else
    {
        printf("Angka tidak berada di rentang 0-100.\n");
    }
}