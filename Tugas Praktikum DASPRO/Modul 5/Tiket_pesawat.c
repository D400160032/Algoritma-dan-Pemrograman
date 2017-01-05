#include <stdio.h>
#include<string.h>
   int ktp,code,jml,bill,bali,cod;
   int harga;
   char nama[200];
   char byr;
   char pesawat[20],jurusan[20],lan[20],tak[20];
   int kode[4] = {1,2,3,4};
   char maskapai[][50] = {"Garuda Indonesia","Batik Air","Citilink","Air Asia"};
   char departure[][50] = {"SOC - JKT","SOC - JND","SOC - SG","SOC - GWS"};
   char landing[][200]={"13:00","15:45","10:15","09:30"};
   char takeoff[][200]={"14:10","16:15","18:20","11:00"};
   int price[4] = {657000,348000,2358000,463000};
void input()
{
    printf("---------------------------------------------\n");
    printf("\tSistem Pemesanan Tiket Pesawat\n");
    printf("---------------------------------------------\n");
    printf("NOMOR KTP = ");
    scanf("%d",&ktp);
    printf("NAMA = ");
    scanf("%s",&nama);
    printf("Kode Penerbangan = ");
    scanf("%d",&cod);
    if (cod == kode[0])
    {
        strcpy(pesawat,maskapai[0]);
        strcpy(jurusan,departure[0]);
        harga=price[0];
        strcpy(lan,landing[0]);
        strcpy(tak,takeoff[0]);
    }
     if (cod == kode[1])
    {
        strcpy(pesawat,maskapai[1]);
        strcpy(jurusan,departure[1]);
        harga=price[1];
        strcpy(lan,landing[1]);
                strcpy(tak,takeoff[1]);
    }
     if (cod == kode[2])
    {
        strcpy(pesawat,maskapai[2]);
        strcpy(jurusan,departure[2]);
        harga=price[2];
        strcpy(lan,landing[2]);
        strcpy(tak,takeoff[2]);
    }
     if (cod == kode[3])
    {
        strcpy(pesawat,maskapai[3]);
                strcpy(jurusan,departure[3]);
        harga=price[3];
        strcpy(lan,landing[3]);
        strcpy(tak,takeoff[3]);
    }
    printf("Jumlah Tiket = ");
    scanf("%d",&jml);
    bill=harga*jml;
    printf("Bayar = Rp.%d\n\n",bill);
}
void tiket()
{
    printf("\n-------------------------------------------------------\n");
    printf("\t\t\tE - Ticket\n");
    printf("-------------------------------------------------------\n");
    printf("\tNO KTP\t\t\t= %d\n",ktp);
    printf("\tNama\t\t\t= %s\n",nama);
    printf("\tMaskapai\t\t= %s\n",pesawat);
    printf("\tPrice \t\t\t= Rp.%d\n",bill);
    printf("\tTime Destination\t= %s - %s\n",lan,tak);
    printf("-------------------------------------------------------\n");
}
void main()
{
    input();
    printf("Bayar Sekarang (y/n) = ");
    scanf("%s",&byr);
    if (byr=='y')
    {
        system("cls");
    }
    tiket();
}
