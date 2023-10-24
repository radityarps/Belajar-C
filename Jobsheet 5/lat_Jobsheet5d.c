/*
Identitas Program :
Nama : Raditya Rafif Pratama Sasmita
NIM : 3.34.23.2.18
*/

#include <stdio.h>

int main()
{
    /*Latihan if-else untuk menentu kankode hari*/
    /*Kamus/Deklarasi Variabel*/
    int kode_hari;

    /*Input Data*/
    printf("Masukan Kode Hari (1-7) : ");
    scanf_s("%d", &kode_hari);

    /* Proses Algoritmas */
    if (kode_hari == 1)
    {
        printf("Hari Senin.\n");
    }
    else if (kode_hari == 2)
    {
        printf("Hari Selasa.\n");
    }
    else if (kode_hari == 3)
    {
        printf("Hari Rabu.\n");
    }
    else if (kode_hari == 4)
    {
        printf("Hari Kamis.\n");
    }
    else if (kode_hari == 5)
    {
        printf("Hari Jumat.\n");
    }
    else if (kode_hari == 6)
    {
        printf("Hari Sabtu.\n");
    }
    else if (kode_hari == 7)
    {
        printf("Hari Minggu.\n");
    }
    else
    {
        printf("Kode hari tidak terdetesi.\n");
    }
}