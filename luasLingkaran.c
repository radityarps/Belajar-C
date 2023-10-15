/*
Identitas Program : Luas dan Keliling Lingkaran
Nama : Raditya Rafif Pratama Sasmita
NIM : 3.34.23.2.18
*/

#include <stdio.h>

int main()
{
    /* input */
    float pi = 3.14;
    int r = 15;
    /* proses */
    float luasLingkaran = pi * r * r;
    float kelilingLingkaran = 2 * pi * r;
    /* output */
    printf("Luas Lingkaran : %f\n", luasLingkaran);
    printf("Keliling Lingkaran : %f", kelilingLingkaran);
}
