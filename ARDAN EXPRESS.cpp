/*PROGRAM PENGIRIMAN BARANG*/
#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
int  harga, x;
float biaya, bayar;
char kode, nama[20];

for (x=1; x<=3; x++)
{
printf("\n");
printf("--------------------------------------\n");
printf("PENGIRIMAN BARANG ARDAN EXPRESS\n");
printf("--------------------------------------\n");
printf("Masukkan Nama Pengirim            :");scanf("%s", &nama);
printf("Masukkan Harga Barang         	  :");scanf("%i", &harga);fflush(stdin);
printf("Masukkan kode kota  [J/B/R/F/K]   :");scanf("%c", &kode);
printf("--------------------------------------\n");
switch(kode)
    { 
    case 'J':
    case 'j':
        {
        biaya = 9000;
        bayar = harga*biaya;
        printf("Nama pengirim            :%s\n", nama);
        printf("Tujuan                   :JAKARTA\n");
        printf("Jumlah Bayar             :9.000\n", bayar);
        break;
        }
    case 'B':
    case 'b':
        {
        biaya = 15.000;
        bayar = harga*biaya;
        printf("Nama pengirim            :%s\n", nama);
        printf("Tujuan                   :BEKASI\n");
        printf("Jumlah Bayar             :15.000\n", bayar);
        break;
        }
    case 'R':
    case 'r':
        {
        biaya = 20.000;
        bayar = harga*biaya;
        printf("Nama pengirim            :%s\n", nama);
        printf("Tujuan                   :BOGOR\n");
        printf("Jumlah Bayar             :20.000\n", bayar);
        break;
        }
	case 'F':
    case 'f':
        {
        biaya = 10.000;
        bayar = harga*biaya;
        printf("Nama pengirim            :%s\n", nama);
        printf("Tujuan                   :KEMANAPUN\n");
        printf("Jumlah Bayar             :FREE\n", bayar);
        break;
        }
    case 'K':
    case 'k':
        {
        biaya = 6500.000;
        bayar = harga*biaya;
        printf("Nama pengirim            :%s\n", nama);
        printf("Tujuan                   :DI LUAR PULAU JAWA\n");
        printf("Jumlah Bayar             :SESUAI WILAYAH\n", bayar);
        break;
        }
    default :
        {
        }
    }
printf("======================================\n");
}
getch();
}
