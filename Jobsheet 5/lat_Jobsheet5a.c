/*
Identitas Program :
Nama : Raditya Rafif Pratama Sasmita
NIM : 3.34.23.2.18
*/

#include <stdio.h>

int main()
{
    /*Latihan if untuk pemberian diskon*/
    /*Kamus/Deklarasi Variabel*/
    float total_bayar, diskon;

    /*Input Data*/
    printf("Masukan total Bayar : ");
    scanf_s("%f", &total_bayar);

    /* Proses Algoritmas */
    if (total_bayar >= 100000)
    {
        diskon = total_bayar * 0.05;
        printf("Anda memperoleh dikson 0.05: %0.2f\n", diskon);
        total_bayar = total_bayar - diskon;
    }

    /*Output*/
    printf("Total Yang Harus Dibayar : %0.2f\n", total_bayar);
}