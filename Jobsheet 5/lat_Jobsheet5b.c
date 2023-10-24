/*
Identitas Program :
Nama : Raditya Rafif Pratama Sasmita
NIM : 3.34.23.2.18
*/

#include <stdio.h>

int main()
{
    /*Latihan if-else untuk menentukan ganjil/genap*/
    /*Kamus/Deklarasi Variabel*/
    int bilangan;

    /*Input Data*/
    printf("Masukan Bilangan : ");
    scanf_s("%d", &bilangan);

    /* Proses Algoritmas */
    if (bilangan % 2 == 0)
    {
        printf("Bilangan yang dimasukkan adalah bilangan genap.\n");
    }
    else
    {
        printf("Bilangan yang dimasukkan adalah bilangan ganjil.\n");
    }
}