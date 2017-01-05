#include<stdio.h>
#include<math.h>
#include<windows.h>

int gelang=0;
int N;
char warna[][200] = {"hitam","cokelat","merah","orange","kuning","hijau","biru","ungu","abu-abu","putih","emas","perak","tidak berwarna"};
int nilai [10] = {0,1,2,3,4,5,6,7,8,9};
int pengali [200] = {0,10,100,1000,10000,100000,1000000,10000000,100000000,1000000000};
int toleransi [200] = {5,10,20};
int i,reseri,volts,voltp,r1,r2;
float reparalel;
int sr,rang;


void tabel4()
{
    char persen = '%';
    printf("--------------------------------------------------------------------------\n");
    printf("---------------------Menghitung Nilai Resistor----------------------------\n");
    printf("--------------------------------------------------------------------------\n");
    printf("|Warna\t\t\t| Pita1 | Pita2 | Pita3(Pengali)|Pita4(Toleransi)|\n");
    printf("--------------------------------------------------------------------------\n");
    printf("|1.Hitam\t\t| 0 \t|  0 \t|  pow(10,0) \t|   - \t\t |\n");
    printf("|2.Coklat\t\t| 1 \t|  1 \t|  pow(10,1) \t|   - \t\t |\n");
    printf("|3.Merah\t\t| 2 \t|  2 \t|  pow(10,2) \t|   - \t\t |\n");
    printf("|4.Orange\t\t| 3 \t|  3 \t|  pow(10,3) \t|   - \t\t |\n");
    printf("|5.Kuning\t\t| 4 \t|  4 \t|  pow(10,4) \t|   - \t\t |\n");
    printf("|6.Hijau\t\t| 5 \t|  5 \t|  pow(10,5) \t|   - \t\t |\n");
    printf("|7.Biru\t\t\t| 6 \t|  6 \t|  pow(10,6) \t|   - \t\t |\n");
    printf("|8.Ungu\t\t\t| 7 \t|  7 \t|  pow(10,7) \t|   - \t\t |\n");
    printf("|9.Abu-abu\t\t| 8 \t|  8 \t|  pow(10,8) \t|   - \t\t |\n");
    printf("|10.Putih\t\t| 9 \t|  9 \t|  pow(10,9) \t|   - \t\t |\n");
    printf("|11.Emas\t\t| - \t|  - \t|  pow(10,-) \t|   5 %c \t |\n",persen);
    printf("|12.Perak\t\t| - \t|  - \t|  pow(10,-) \t|  10 %c \t |\n",persen);
    printf("|13.Tidak berwarna\t| - \t|  - \t|  pow(10,-) \t|  20 %c \t |\n",persen);
    printf("--------------------------------------------------------------------------\n\n");
}
void tabel5()
{
    char persen = '%';
    printf("----------------------------------------------------------------------------------\n");
    printf("-------------------------Menghitung Nilai Resistor--------------------------------\n");
    printf("----------------------------------------------------------------------------------\n");
    printf("|Warna\t\t\t| Pita1 | Pita2 | Pita3 | Pita4(Pengali)|Pita5(Toleransi)|\n");
    printf("----------------------------------------------------------------------------------\n");
    printf("|1.Hitam\t\t| 0 \t|  0 \t|  0 \t|  pow(10,0) \t|   - \t\t |\n");
    printf("|2.Coklat\t\t| 1 \t|  1 \t|  1 \t|  pow(10,1) \t|   - \t\t |\n");
    printf("|3.Merah\t\t| 2 \t|  2 \t|  2 \t|  pow(10,2) \t|   - \t\t |\n");
    printf("|4.Orange\t\t| 3 \t|  3 \t|  3 \t|  pow(10,3) \t|   - \t\t |\n");
    printf("|5.Kuning\t\t| 4 \t|  4 \t|  4 \t|  pow(10,4) \t|   - \t\t |\n");
    printf("|6.Hijau\t\t| 5 \t|  5 \t|  5 \t|  pow(10,5) \t|   - \t\t |\n");
    printf("|7.Biru\t\t\t| 6 \t|  6 \t|  6 \t|  pow(10,6) \t|   - \t\t |\n");
    printf("|8.Ungu\t\t\t| 7 \t|  7 \t|  7 \t|  pow(10,7) \t|   - \t\t |\n");
    printf("|9.Abu-abu\t\t| 8 \t|  8 \t|  8 \t|  pow(10,8) \t|   - \t\t |\n");
    printf("|10.Putih\t\t| 9 \t|  9 \t|  9 \t|  pow(10,9) \t|   - \t\t |\n");
    printf("|11.Emas\t\t| - \t|  - \t|  - \t|  pow(10,-) \t|   5 %c \t |\n",persen);
    printf("|12.Perak\t\t| - \t|  - \t|  - \t|  pow(10,-) \t|  10 %c \t |\n",persen);
    printf("|13.Tidak berwarna\t| - \t|  - \t|  - \t|  pow(10,-) \t|  20 %c \t |\n",persen);
    printf("----------------------------------------------------------------------------------\n\n");
}
void input()
{
    printf("\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("\n\t\t\t\t\t\t");
    printf("Masukan Jumlah Gelang = ");
    scanf("%d", &gelang );
}
void open()
{
    printf("\n\n\n\n\n\n\n\n\n\n");
    printf("\n\t\t\t\t\t\t");
    printf("Aplikasi Resistor Warna \n\n\n");
    printf("\n\t\t\t\t\t\t");
    printf("  Development for B4");
}
void resistor4()
{
    int G1=0, G2=0, G3=0, G4=0;
	int Nilai,ba,bb,seri,r1,r2,paralel;
	char WARNAS[20],lagi;
	char persen= '%';

	for (N=1; N<=4; N++) {
		printf("Masukan Warna GELANG ke %d: ", N);
		scanf("%s", WARNAS);

		if ( strcmp(WARNAS, warna[0]) == 0 ) {
			 switch (N) {
				case 1: G1 = nilai[0]; break;
				case 2: G2 = nilai[0]; break;
				case 3: G3 = pengali[0]; break;
			 }
		} else if ( strcmp(WARNAS, warna[1]) == 0 ) {
			 switch (N) {
				case 1: G1 = nilai[1]; break;
				case 2: G2 = nilai[1]; break;
				case 3: G3 = pengali[1]; break;
			 }
		} else if ( strcmp(WARNAS, warna[2]) == 0 ) {
			 switch (N) {
				case 1: G1 = nilai[2]; break;
				case 2: G2 = nilai[2]; break;
				case 3: G3 = pengali[2]; break;
			 }
		} else if ( strcmp(WARNAS, warna[3]) == 0 ) {
			 switch (N) {
				case 1: G1 = nilai[3]; break;
				case 2: G2 = nilai[3]; break;
				case 3: G3 = pengali[3]; break;
			 }
		} else if ( strcmp(WARNAS, warna[4]) == 0 ) {
			 switch (N) {
				case 1: G1 = nilai[4]; break;
				case 2: G2 = nilai[4]; break;
				case 3: G3 = pengali[4]; break;
			 }
		} else if ( strcmp(WARNAS, warna[5]) == 0 ) {
			 switch (N) {
				case 1: G1 = nilai[5]; break;
				case 2: G2 = nilai[5]; break;
				case 3: G3 = pengali[5]; break;
			 }
		} else if ( strcmp(WARNAS, warna[6]) == 0 ) {
			 switch (N) {
				case 1: G1 = nilai[6]; break;
				case 2: G2 = nilai[6]; break;
				case 3: G3 = pengali[6]; break;
			 }
		} else if ( strcmp(WARNAS, warna[7]) == 0 ) {
			 switch (N) {
				case 1: G1 = nilai[7]; break;
				case 2: G2 = nilai[7]; break;
				case 3: G3 = pengali[7]; break;
			 }
		} else if ( strcmp(WARNAS, warna[8]) == 0 ) {
			 switch (N) {
				case 1: G1 = nilai[8]; break;
				case 2: G2 = nilai[8]; break;
				case 3: G3 = pengali[8]; break;
			 }
		} else if ( strcmp(WARNAS, warna[9]) == 0 ) {
			 switch (N) {
				case 1: G1 = nilai[9]; break;
				case 2: G2 = nilai[9]; break;
				case 3: G3 = pengali[9]; break;
			 }
		}  else if ( strcmp(WARNAS, warna[10]) == 0 ) {
			 switch (N) {
				case 4: G4 = toleransi[0]; break;
			 }
		} else if ( strcmp(WARNAS, warna[11]) == 0 ) {
			 switch (N) {
				case 4: G4 = toleransi[1]; break;
			 }
		} else if ( strcmp(WARNAS, warna[12]) == 0 ) {
			 switch (N) {
				case 4: G4 = toleransi[2]; break;
			 }
		}
	}

	N = (G1*10 + G2) * G3;
    bb = N - N * (G4*0.01);
    ba = N + N * (G4*0.01);
	printf("\nNilai Resistor R = %d ohm", N );
	printf("\nNilai Toleransi = %d %c", G4, persen );
	printf("\nNilai Max Resistor = %d ohm",ba);
	printf("\nNilai Min Resistor = %d ohm",bb);
}
void resistor5()
{
int G1=0, G2=0, G3=0, G4=0, G5=0;
	int Nilai,ba,bb,seri,r1,r2,paralel;
	char WARNAS[20],lagi;
	char persen= '%';

	for (N=1; N<=5; N++) {
		printf("Masukan Warna GELANG ke %d: ", N);
		scanf("%s", WARNAS);

		if ( strcmp(WARNAS, warna[0]) == 0 ) {
			 switch (N) {
				case 1: G1 = nilai[0]; break;
				case 2: G2 = nilai[0]; break;
				case 3: G3 = nilai[0]; break;
				case 4: G4 = pengali[0]; break;
			 }
		} else if ( strcmp(WARNAS, warna[1]) == 0 ) {
			 switch (N) {
				case 1: G1 = nilai[1]; break;
				case 2: G2 = nilai[1]; break;
				case 3: G3 = nilai[1]; break;
				case 4: G4 = pengali[1]; break;
			 }
		} else if ( strcmp(WARNAS, warna[2]) == 0 ) {
			 switch (N) {
				case 1: G1 = nilai[2]; break;
				case 2: G2 = nilai[2]; break;
				case 3: G3 = nilai[2]; break;
				case 4: G4 = pengali[2]; break;
			 }
		} else if ( strcmp(WARNAS, warna[3]) == 0 ) {
			 switch (N) {
				case 1: G1 = nilai[3]; break;
				case 2: G2 = nilai[3]; break;
				case 3: G3 = nilai[3]; break;
				case 4: G4 = pengali[3]; break;
			 }
		} else if ( strcmp(WARNAS, warna[4]) == 0 ) {
			 switch (N) {
				case 1: G1 = nilai[4]; break;
				case 2: G2 = nilai[4]; break;
				case 3: G3 = nilai[4]; break;
				case 4: G4 = pengali[4]; break;
			 }
		} else if ( strcmp(WARNAS, warna[5]) == 0 ) {
			 switch (N) {
				case 1: G1 = nilai[5]; break;
				case 2: G2 = nilai[5]; break;
				case 3: G3 = nilai[5]; break;
				case 4: G4 = pengali[5]; break;
			 }
		} else if ( strcmp(WARNAS, warna[6]) == 0 ) {
			 switch (N) {
				case 1: G1 = nilai[6]; break;
				case 2: G2 = nilai[6]; break;
				case 3: G3 = nilai[6]; break;
				case 4: G4 = pengali[6]; break;
			 }
		} else if ( strcmp(WARNAS, warna[7]) == 0 ) {
			 switch (N) {
				case 1: G1 = nilai[7]; break;
				case 2: G2 = nilai[7]; break;
				case 3: G3 = nilai[7]; break;
				case 4: G4 = pengali[7]; break;
			 }
		} else if ( strcmp(WARNAS, warna[8]) == 0 ) {
			 switch (N) {
				case 1: G1 = nilai[8]; break;
				case 2: G2 = nilai[8]; break;
				case 3: G3 = nilai[8]; break;
				case 4: G4 = pengali[8]; break;
			 }
		} else if ( strcmp(WARNAS, warna[9]) == 0 ) {
			 switch (N) {
				case 1: G1 = nilai[9]; break;
				case 2: G2 = nilai[9]; break;
				case 3: G3 = nilai[9]; break;
				case 4: G4 = pengali[9]; break;
			 }
		}  else if ( strcmp(WARNAS, warna[10]) == 0 ) {
			 switch (N) {
				case 5: G5 = toleransi[0]; break;
			 }
		} else if ( strcmp(WARNAS, warna[11]) == 0 ) {
			 switch (N) {
				case 5: G5 = toleransi[1]; break;
			 }
		} else if ( strcmp(WARNAS, warna[12]) == 0 ) {
			 switch (N) {
				case 5: G5 = toleransi[2]; break;
			 }
		}
	}

	N = (((G1*100)+(G2*10)) +G3) * G4;
    bb = N - N * (G5*0.01);
    ba = N + N * (G5*0.01);
	printf("Nilai Resistor R = %d ohm", N );
	printf("\nNilai Toleransi = %d %c", G5, persen );
	printf("\nNilai Maks Resistor = %d ohm",ba);
	printf("\nNilai Min Resistor = %d ohm",bb);
}
void masuk()
{
    input();
    system("cls");
    if (gelang == 4)
    {
        tabel4();
        resistor4();
    }
    if (gelang == 5)
    {
        tabel5();
        resistor5();
    }
}
void res2()
{

    printf("\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("\n\t\t\t\t\t\t\t");
    printf("Resistor 2");
    Sleep(1000);
    system("cls");
    masuk();
    r2=N;
    Sleep(2000);
    system("cls");
}
void input_arus()
{
    printf("\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("\n\t\t\t\t\t\t");
    printf("Masukkan Nilai Arus = ");
    scanf("%d",&i);
    system("cls");
}
void rseri()
{
    reseri=(r1+r2);
    volts=(i*reseri);
    printf("\n\n\n\n\n");
    printf("\n\t\t\t\t\t\t");
    printf(" Rangkaian Seri");
    printf("\n\n\t\t\t\t\t\t");
    printf("R1       = %d ohm\n",r1);
    printf("\n\t\t\t\t\t\t");
    printf("R2       = %d ohm\n",r2);
    printf("\n\t\t\t\t\t\t");
    printf("Arus     = %d ampere",i);
    printf("\n\n\t\t\t\t\t\t");
    printf("Tegangan = %d V",volts);
}
void rparalel()
{
    reparalel=((r1*r2)/(r1+r2));
    voltp=(i*reparalel);
    printf("\n\n\n\n\n");
    printf("\n\t\t\t\t\t\t");
    printf(" Rangkaian Paralel");
    printf("\n\n\t\t\t\t\t\t");
    printf("R1       = %d ohm\n",r1);
    printf("\n\t\t\t\t\t\t");
    printf("R2       = %d ohm\n",r2);
    printf("\n\t\t\t\t\t\t");
    printf("Arus     = %d ampere",i);
    printf("\n\n\t\t\t\t\t\t");
    printf("Tegangan = %d V",voltp);
}
void menu()
{
    printf("\n\n\n\n\n\n\n\n");
    printf("\n\t\t\t\t\t\t");
    printf("Rangakaian Listrik\n\n");
    printf("\n\t\t\t\t\t\t");
    printf("  1. Seri\n");
    printf("\n\t\t\t\t\t\t");
    printf("  2. Paralel\n\n");
    printf("\n\t\t\t\t\t\t");
    printf("Pilih Rangkaian = ");
    scanf("%d",&rang);
    if (rang == 1)
    {
        system("cls");
        res2();
        input_arus();
        rseri();
    }
    if (rang == 2)
    {
        system("cls");
        res2();
        input_arus();
        rparalel();
    }
}
void main()
{
    char lagi;
    open();
    Sleep(3000);
    system("cls");
    masuk();
    r1=N;
    Sleep(1000);
    system("cls");
    menu();
    printf("Apakah ingin kembali (y/n) :");
    scanf("%s",&lagi);
    if (lagi=='y')
    {
        system("cls");
        menu();
    }
}
