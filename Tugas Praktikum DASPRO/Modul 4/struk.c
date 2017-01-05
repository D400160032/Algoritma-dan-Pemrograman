#include<stdio.h>
char nama[200],nama1[200],nama2[200];
int harga,harga1,harga2;
int jumlah,jumlah1,jumlah2;
int total,total1,total2,jml,dis,byr,kbl,cash,item;

int input()
{
printf("Masukkan Produk 1 = ");
scanf("%s%d%d",&nama,&harga,&jumlah);
total=harga*jumlah;
printf("Masukkan Produk 2 = ");
scanf("%s%d%d",&nama1,&harga1,&jumlah1);
total1=harga1*jumlah1;
printf("Masukkan Produk 3 = ");
scanf("%s%d%d",&nama2,&harga2,&jumlah2);
total2=harga2*jumlah2;
jml=(total+total1+total2);
item=jumlah+jumlah1+jumlah2;
printf("Masukkan Discount = ");
scanf("%d",&dis);
byr=(jml-((jml*dis)/100));
printf("Masukkan Uang Tunai = ");
scanf("%d",&cash);
kbl=(cash-byr);
}

void struk()
{
printf("=======================================\n");
printf("\t      INDOMARET\t\n");
printf("\t   JL.SURGA 1 NO 6 \t\n");
printf("=======================================\n");
printf("NO\tNama\tHarga\tJumlah\tTotal\n");
printf("1\t%s\t%d\t%d\t%d\n",nama,harga,jumlah,total);
printf("2\t%s\t%d\t%d\t%d\n",nama1,harga1,jumlah1,total1);
printf("3\t%s\t%d\t%d\t%d\n",nama2,harga2,jumlah2,total2);
printf("\n");
printf("---------------------------------------\n");
printf("Total item\t\t%d\t%d\n",item,jml);
printf("Discount\t\t\t%d\n",dis);
printf("Bayar\t\t\t\t%d\n",byr);
printf("Tunai\t\t\t\t%d\n",cash);
printf("Kembalian\t\t\t%d\n",kbl);
printf("---------------------------------------\n");
printf("\t      Terima Kasih\n");
printf("\t  www.indomaret.co.id\n");
}

void main()
{
    input();
    system("cls");
    struk();
}
