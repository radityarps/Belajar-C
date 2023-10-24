/*
Identitas Program : Menentukan kelompok Usia
Nama : Raditya Rafif Pratama Sasmita
NIM : 3.34.23.2.18
*/

#include <stdio.h>

int main()
{
    /* Input Data */
    char nama[20];
    printf("Masukkan nama anda: ");
    scanf("%s", nama);
    int umur;
    printf("Masukkan umur anda: ");
    scanf("%d", &umur);

    /* proses */
    if (umur <= 15)
    {
        printf("%s termasuk kelompok usia anak-anak\n", nama);
    }
    else if (umur > 15 && umur <= 24)
    {
        printf("%s termasuk kelompok usia muda\n", nama);
    }
    else if (umur >= 25 && umur <= 34)
    {
        printf("%s termasuk kelompok usia pekerja awal\n", nama);
    }
    else if (umur >= 35 && umur <= 44)
    {
        printf("%s termasuk kelompok usia paruh baya\n", nama);
    }
    else if (umur >= 45 && umur <= 54)
    {
        printf("%s termasuk Kelompook usia pra-pensiun\n", nama);
    }
    else if (umur >= 55 && umur <= 64)
    {
        printf("%s termasuk kelompok usia pensiun\n", nama);
    }
    else if (umur >= 65)
    {
        printf("%s termasuk kelompok usia Lanjut\n", nama);
    }
    else
    {
        printf("Usia Anda tidak termasuk dalam kelompok anak-anak atau muda.\n");
    }

    return 0;
}
