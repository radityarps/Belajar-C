/*
Identitas Program :
Nama : Raditya Rafif Pratama Sasmita
NIM : 3.34.23.2.18
*/

#include <stdio.h>

int main()
{
    /*Latihan if-else untuk menentu suhu*/
    /*Kamus/Deklarasi Variabel*/
    float suhu;

    /*Input Data*/
    printf("Masukan Suhu : ");
    scanf_s("%f", &suhu);

    /* Proses Algoritmas */
    if (suhu == 0)
    {
        printf("Suhu ruangan 0 derajat.\n");
    }
    else if (suhu > 0)
    {
        printf("Suhu lebih dari 0 derajat yaitu : %0.1f.\n", suhu);
    }
    else
    {
        printf("Suhu kurang dari 0 derajat yaitu : %0.1f.\n", suhu);
    }
}