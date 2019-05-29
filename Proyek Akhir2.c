#include <stdio.h>
#include <windows.h>
#include "mmsystem.h"

char nama[100];
int sum=0;


    
int main(){
    int age=0, coins = 0, energy=100, hunger=100;
    int x;
    double y;
 	char text1[] = "\t\t\t   Selamat datang di Tamagotchi!";
    char text2[] = "\t\t\t\t\t\t  oleh";
    char text3[] = "\t\t\t\t\t  Nando & Glory";

	system("COLOR 70");
    Sleep(1000);
//    PlaySound(TEXT("E:\\Backup\\C\\Documents\\Program\\Coba\\New folder\\Proyek akhir\\Musik\\Title Screen.wav"), NULL, SND_FILENAME |SND_LOOP| SND_ASYNC);
    printf("\n\n========================================================================================================================\n");
    printf("========================================================================================================================\n");
	printf("\n\t\t\t\t\tT A M A G O T C H I\n");
	printf("\n\t\t\t\t\t\t\t E N T E R T A I N M E N T\n\n");
	printf("========================================================================================================================");
	printf("\n========================================================================================================================\n");
    
    printf("\n\n\n\n\t\t\t\t\t\tP R E S E N T S . . .");
    getch();
    system("cls");
    
    printf("\n\n========================================================================================================================\n");
    printf("========================================================================================================================\n");
    printf("=        =                                                                                                    =        =\n");
    printf("=        =                                                                                                    =        =\n");
    printf("= == = = =                                                                                                    = = = == =\n");
    
    printf("\n\n");
    for(x=0; text1[x]!=0; x++)
 	{
    	printf(" %c",text1[x]);
    	for(y=0; y<=5888888; y++){}
    }
    
    printf("\n\n");
    for(x=0; text2[x]!=0; x++)
    {
    	printf(" %c",text2[x]);
    	for(y=0; y<=5888888; y++){}
    }
    
    printf("\n\n");
    for(x=0; text3[x]!=0; x++)
    {
		printf(" %c",text3[x]);
    	for(y=0; y<=5888888; y++){}
    }
    printf("\n\n\n\t\t\t\t\t Tekan tombol apapun untuk lanjut!");
    printf("\n");
    getch();
//    PlaySound(NULL, 0, 0); 
    system("cls");
 
  	printf("            ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
  	printf("           ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
  	printf("          ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
  	printf("         ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
  	printf("      ||||||||||||||\t\t\t\t\t\t\t\t\t\t    ||||||||||||||\n");
  	printf("   |||||||||||||||\t\t\t\t\t\t\t\t\t\t      |||||||||||||||\n");
  	printf("||||||||||||||||\t\t\t\t\t\t\t\t\t\t        ||||||||||||||||\n");
  	printf("|||||||||||||||\t\t\t\t\t\t\t\t\t\t\t         |||||||||||||||\n");
  	printf("||||||||||||||\t\t\t\t\t   * * * * * * *  \t\t\t\t\t  ||||||||||||||\n");
  	printf("|||||||||||||\t\t\t\t\t * * *       * * *\t\t\t\t\t   |||||||||||||\n");
  	printf("||||||||||||\t\t\t\t       * * *  |    |  * * *  \t\t\t\t\t    ||||||||||||\n");
  	printf("|||||||||||\t\t\t\t\t* * * * * * * * * *               \t\t             |||||||||||\n");
  	printf("||||||||||\t\t\t\t\t      * * * *                                  \t\t      ||||||||||\n");
  	printf("|||||||||\t\t\t\t        T A M A G O T C H I    \t\t\t\t               |||||||||\n");
  	printf("||||||||\t\t\t\t\t\t\t\t\t                                ||||||||\n");
  	printf("|||||||\t\t\t\t\t\t\t\t\t                                         |||||||\n");
  	printf("||||||\t\t\t\t\t\t\t\t\t                                          ||||||\n");
  	printf("(===)\t\t\t\t\t\t\t\t\t                                           (===)");
  	printf("\t\t\t\t======================================================================\n\n");
  	printf("\t\t\t\t    Masukkan nama Tamagotchi kamu: ");
  	scanf("%s", &nama);
	
//    PlaySound(TEXT("E:\\Backup\\C\\Documents\\Program\\Coba\\New folder\\Proyek akhir\\Musik\\Accept Choice.wav"), NULL, SND_FILENAME | SND_ASYNC);
    Sleep(1000);
	system("cls");
    if(strcmp(nama, "nanori")==0){
		coins = 999999;
    }
	else{
		coins = 500;
	}
	system("cls");
	starter(age, coins, energy, hunger);
	return 0;
}

int starter(int age, int coins, int energy, int hunger){
	int reply;
	
//    PlaySound(TEXT("E:\\Backup\\C\\Documents\\Program\\Coba\\New folder\\Proyek akhir\\Musik\\RIP.wav"), NULL, SND_FILENAME | SND_ASYNC);
	system("cls");
	printf("========================================================================================================================\n");
	printf("\t   <<<<< %s >>>>>", nama);
	printf("\t\t  Energy: %d", energy);
	printf("\t      Hunger: %d", hunger);
	printf("\t   Coins : %d", coins);
	printf("\t      Age: %d", age);
	printf("\n========================================================================================================================");
	
	tamagotchi(age);
	
	printf("========================================================================================================================");
 	printf("\n\n\t\t1. Minigames");
 	printf("\t\t\t\t2. Shop");
	printf("\t\t\t\t3. Sleep\n\n");
	printf("========================================================================================================================");
 
	printf("\n\nKemana kamu akan membawaku? ");
	scanf("%d", &reply);
//	PlaySound(TEXT("E:\\Backup\\C\\Documents\\Program\\Coba\\New folder\\Proyek akhir\\Musik\\Accept Choice.wav"), NULL, SND_FILENAME | SND_ASYNC);
	
	switch(reply){
		case 1:
			mg(age, coins, energy, hunger);
			break;
		case 2:
			shop(age, coins, energy, hunger);
			break;
		case 3:
			sleep(age, coins, energy, hunger);
			break;
	    default:
//	   	    PlaySound(TEXT("E:\\Backup\\C\\Documents\\Program\\Coba\\New folder\\Proyek akhir\\Musik\\Chicken Effect.wav"),NULL,SND_SYNC);
	   		printf("Pilihan tidak ada!");
	   		getch();
	   		starter(age, coins, energy, hunger);
	}
}

int sleep(int age, int coins, int energy, int hunger){
	system("COLOR 07");
	system("cls");
	energy += rand()%10;
	hunger -= rand()%10;
	Sleep(1000);	
	system("cls");
	system("COLOR 70");
	starter(age, coins, energy, hunger);
}

int tamagotchi(int age){
	if(age == 0){
		printf("\n\n\t\t\t\t\t\t    * *\n");
		printf("\t\t\t\t\t         *       *\n");
		printf("\t\t\t\t\t      *             *\n");
		printf("\t\t\t\t\t    *                 *\n");
		printf("\t\t\t\t\t  *       |          |  *\n");
		printf("\t\t\t\t\t  *                     *\n");
		printf("\t\t\t\t\t  *                     *\n");
		printf("\t\t\t\t\t  *                     *\n");
		printf("\t\t\t\t\t    *                 *\n");
		printf("\t\t\t\t\t      *             *\n");
		printf("\t\t\t\t\t    *                 *\n");
		printf("\t\t\t\t\t         *       *");
		printf("\n\t\t\t\t\t\t    * *\n");
	}
	if(age == 1){
		printf("\n\n\t\t\t\t\t\t     * *\n");
		printf("\t\t\t\t\t\t * * * * * *");
		printf("\n\t\t\t\t\t  *  *                *  *");
		printf("\n\t\t\t\t\t* * *   |           |   * * *");
		printf("\n\t\t\t\t     * * * *                     * * * *");
		printf("\n\t\t\t\t\t * * * * * * * * * * * * * *");
		printf("\n\t\t\t\t\t* * * * * * * * * * * * * * *");
	}
	if(age == 2){
		printf("\n\n\t\t\t\t* * * * * * * * * * * * * \n");
		printf("\t\t\t      *                          *\n");
		printf("\t\t\t      *    * *      *    * *     *\n");
		printf("\t\t\t      *    *   *    *    *   *   *\n");
		printf("\t\t\t      *    * * *    *    * *     *\n");
		printf("\t\t\t      *    *  *     *    *       *\n");
		printf("\t\t\t      *    *    *   *    *       *\n");
		printf("\t\t\t      *                          *\n");
		printf("\t\t\t      *                          *\n");
		printf("\t\t\t      *                          *\n");
		printf("\t\t\t      *                          *\n");
		printf("\t\t\t      *                          *\n");
		printf("\t\t\t  * * * * * * * * * * * * * * * * * * *\n");			
		printf("\t\t\t  *                                   *\n");
		printf("\t\t\t  *        T a m a g o t c h i        *\n");
		printf("\t\t\t  *                                   *\n");
		printf("\t\t\t  *    E n t e r t a i n t m e n t    *\n");
		printf("\t\t\t  *                                   *\n");
		printf("\t\t\t  * * * * * * * * * * * * * * * * * * *\n");
	}	
}	


	

int shop(int age, int coins, int energy, int hunger){
	int jawab, jwb;
	
	system("cls");
	printf("\n\t\t\t\t\t             * * * * * * *\n");
	printf("\t\t\t\t\t             *           *\n");
	printf("\t\t\t\t\t        *    * * * * * * *\n");
	printf("\t\t\t\t\t      *  *      *     *\n");
	printf("\t\t\t\t\t     *     *    *     *\n");
	printf("\t\t\t\t\t    * * * * *   *     *\n");
	printf("\t\t\t\t\t    *       *   *     *\n");
	printf("\t\t\t\t\t    *       *   *     *\n");
	printf("\t\t\t\t\t =====================================\n");
	printf("\n\t\t\t\t\t   ======       ======       ======\n");
	printf("\n\t\t\t\t\t =====================================\n");	
	
	printf("\n\t\t1. Toko Makanan");
	printf("\t\t\t2. Apotek");
	printf("\t\t3. Pulang ke Rumah");
	printf("\n\nApa yang kamu butuhkan? ");
	scanf("%d", &jawab);
	system("cls");
	switch(jawab){
		case 1:
			tokoMakanan(age, coins, energy, hunger);
			shop(age, coins, energy, hunger);
		case 2:
			apotek(age, coins, energy, hunger);
			shop(age, coins, energy, hunger);
		case 3:
			starter(age, coins, energy, hunger);
		default:
			printf("Kamu berkelana menuju area yang tidak ada....");
			fflush(stdin);
			shop(age, coins, energy, hunger);
	}
}

int tokoMakanan(int age, int coins, int energy, int hunger){
	int coklat = 125, esKrim = 200, pizza = 500, jwb = 1;
	int size, bayar, length=100;
	int belanja[length], i, j = 0;

	while(jwb != 4){
		system("cls");
		printf("========================================================================================================================\n");
	    printf("========================================================================================================================\n");
		printf("\t\t\t\t\t\t     *\n ");
		printf("\t\t\t\t\t\t    * *\n ");
		printf("\t\t\t\t\t\t     *\n ");
		printf("\t\t\t\t\t\t     *\n ");
		printf("\t\t\t\t\t\t     *\n ");
		printf("\t\t\t\t\t\t   * * *\n");
		printf("\t\t\t\t\t\t  *     *\n");
		printf("\t\t\t\t\t\t *  |   |*\n");
		printf("\t\t\t\t\t        *         *\n");
		printf("\t\t\t\t\t       *           *\n");
		printf("\t\t\t  * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");			
		printf("\t\t\t  *                                                     *\n");
		printf("\t\t\t  *                       S h o p                       *\n");
		printf("\t\t\t  *                         & n                         *\n");
		printf("\t\t\t  *                       k e e p                       *\n");
		printf("\t\t\t  *                                                     *\n");
		printf("\t\t\t  * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n"); 
	    printf("========================================================================================================================\n");
	    printf("========================================================================================================================\n");
	    
		printf("\n1. Coklat ~125");
		printf("\n2. Es Krim ~200");
		printf("\n3. Pizza ~500");
		printf("\n4. Keluar Toko Makanan");
		printf("\nButuh makanan apa? \n");
		printArr(belanja, length);
		scanf("%d", &jwb);
		if(jwb!=4 && size!=5){
			switch(jwb){
				case 1:
					size+=1;
					i=size-1;
					belanja[i]=125;
					sum+=coklat;
					printf("Kamu berhasil membeli Coklat!");
					getch();
					break;
				case 2:
					size+=1;
					i=size-1;
					belanja[i]=200;
					sum+=esKrim;
					printf("Kamu berhasil membeli Es Krim!");
					getch();
					break;
				case 3:
					size+=1;
					i = size-1;
					belanja[i]=500;
					sum+=pizza;
					printf("Kamu berhasil membeli Pizza!");
					getch();
					break;
			}
		}
		else{
			system("cls");
			checkout(belanja, length);
			printf("\n\nTotal yang dibeli: %d", sum);
			printf("\nApa kau mau mebayarnya?");
			printf("\n1. Ya\n2. Tidak\n");
			scanf("%d", &bayar);
			if (bayar==1){
				coins-=sum;
				printf("Selamat Kamu Berhasil Membeli Makanan");
				for(j=0; j<size; j++){
					if(belanja[j] = 125){
						energy += 15;
						energy = energy>100? 100:energy;
						hunger += 25;
						hunger = hunger>100? 100:hunger;
					}
					else if(belanja[j] = 200){
						energy += 25;
						energy = energy>100? 100:energy;
						hunger += 10;
						hunger = hunger>100? 100:hunger;
					}
					if(belanja[j] = 500){
						energy += 50;
						energy = energy>100? 100:energy;
						hunger += 60;
						hunger = hunger>100? 100:hunger;
					}
				}
				
			}
			else{
				printf("Kamu memutuskan untuk membatalkannnya!");
			}
			getch();
			shop(age, coins, energy, hunger);
		}
	}
}

int checkout(int arr[], int length){
	int i, a;
	int coklat = 0, esKrim = 0, pizza = 0;
	for(i=0; i<length; i++){
		if(arr[i]!=0){	
			a=arr[i];
			switch(a){
				case 125:
					coklat += 1;
					break;
				case 200:
					esKrim += 1;
					break;
				case 500:
					pizza += 1;
					break;
			}	
		}
	}
	if(coklat!=0) printf("\n\nCoklat: %d", coklat);
	if(esKrim!=0) printf("\nEs krim: %d", esKrim);
	if(pizza!=0) printf("\nPizza: %d", pizza);
}

int apotek(int age, int coins, int energy, int hunger){
	int obatTima = 5000;
	int obatTemur = 2500;
	int obatKel = 1000;
	int miNu = 2000;
	int jwb;
	
	system("cls");
    printf("========================================================================================================================\n");
    printf("========================================================================================================================\n");
	printf("\n\t\t\t\t\t   * * *  \t * * * * \t  * * *\n");
	printf("\t\t\t\t\t  *     * \t *     * \t * * * *\n");
	printf("\t\t\t\t\t  *     * \t *     * \t *     *\n");
	printf("\t\t\t\t\t  *  D  * \t *  S  * \t *  T  *\n");
	printf("\t\t\t\t\t  *     * \t *     * \t *     *\n");
	printf("\t\t\t\t\t  * * * * \t * * * * \t * * * *\n");
	printf("\t\t\t\t  * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");			
	printf("\t\t\t\t  *                       M e d i                       *\n");
	printf("\t\t\t\t  *                          +                          *\n");
	printf("\t\t\t\t  *                        + + +                        *\n");
	printf("\t\t\t\t  *                          +                          *\n");
	printf("\t\t\t\t  *                                                     *\n");
	printf("\t\t\t\t  * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
    printf("\n========================================================================================================================\n");
    printf("========================================================================================================================\n");	
    
	printf("\n1. Obat R.I.P.	~5000");
	printf("\n2. Tetesan Umur	~2500");
	printf("\n3. Kelahiran ~1000");
	printf("\n4. Min Umur	~2000");
	printf("\n5. Kembali ke jalan");
	printf("\n\nRamuan apa yang mau kamu beli?\n");
	scanf("%d", &jwb);
		switch(jwb){
			case 1:
				coins-=obatTima;
				printf("Kamu mati! HAHHAHAHAHA");
				getch();
				exit(0);
			case 2:
				coins-=obatTemur;
				age+=1;
				age = age>3?3:age;
				printf("Selamat anda tua!!!");
				getch();
				apotek(age, coins, energy, hunger);
			case 3:
				coins -= obatKel;
				age = 0;
				apotek(age, coins, energy, hunger);
			case 4:
				coins -= miNu;
				age-=1;
				age = age<1? 0:age;
				getch();
				shop(age, coins, energy, hunger);
			case 5:
				getch();
				shop(age, coins, energy, hunger);
			default:
				printf("Kamu bercanda? Keluar!");
				fflush(stdin);
				shop(age, coins, energy, hunger);
			}
}


int mg(int age, int coins, int energy, int hunger){
	system("cls");
	int game, bet;
	printf("========================================================================================================================\n");
    printf("========================================================================================================================\n");
	printf("\n\n\t\t\t\t\t\tLevel 1");
	printf("\n\n\t\t\t\t\t\t1. Hitung Jumlah");
	printf("\n\t\t\t\t\t\t2. Tebak Angka"); 
	printf("\n\t\t\t\t\t\t3. Poker Tamagotchi");
	printf("\n\n\t\t\t\t\t\t===>Pilih game: ");
	printf("\n\n========================================================================================================================\n");
    printf("========================================================================================================================\n");
	scanf("%d", &game);
	system("cls");
	switch(game){
		case 1:
			if(energy>=15 && hunger>=8) hitungJumlah(age, coins, energy, hunger);
			else printf("Energy dan hunger kurang");
			Sleep(2000);
			starter(age, coins, energy, hunger);
		case 2:
			printf("\nMemory game\n");
			printf("Tes kecepatan ingatanmu dengan mengingat sebuah angka dalam 1,5 detik!\n\n");
			printf("Ketik 0 pada tebakan untuk kembali ke menu dan klaim koin!\n");
			if(energy>=15 && hunger>=8) guessGame(age, coins, energy, hunger);
			else printf("Energy dan hunger kurang");
			Sleep(2000);
			starter(age, coins, energy, hunger);
		case 3:
			if(energy>=15 && hunger>=8){
   			system("cls");
   			printf("Berapa taruhan yang ingin kamu masukkan? ");
   			scanf("%d", &bet);
    		if(coins>bet){
     			printf("Kamu memasukkan %d koin sebagai taruhan\nApabila kamu kalah, koinmu akan berkurang", bet);
     			printf("\n\nNamun, jika kamu menang.\nMaka, koinmu akan bertambah sejumlah yang kamu pertaruhkan");
     			getch();
     			texas(age, coins, energy, hunger, bet);
    		}
			else{
     			printf("Koin kamu kurang!");
     			getch();
     			starter(age, coins, energy, hunger);
    		}
   		}
   			else{
			    printf("Energy atau hunger kurang!");
				mg(age, coins, energy, hunger);
		default:
			printf("Kamu lupa ingin melakukan apa...");
//			PlaySound(TEXT("E:\\Backup\\C\\Documents\\Program\\Coba\\New folder\\Proyek akhir\\Musik\\Chicken Effect.wav"),NULL,SND_SYNC);
			getch();
			fflush(stdin);
			starter(age, coins, energy, hunger);
		}
	}
}


int hitungJumlah(int age, int coins, int energy, int hunger){

	int angka1, angka2, tebakan=1, koin=0;
	time_t t;
	srand((unsigned) time(&t));
	
	
	while (tebakan!=0){
	angka1 = rand()%10;
	angka2 = rand()%10;
	
	printf("========================================================================================================================\n");
    printf("========================================================================================================================\n");
	printf("Mini games hitung jumlah!\n");
	printf("\n\nKetik 0 pada tebakan untuk kembali ke menu dan klaim koin!\n");
	printf("\nKoin: %d\n", koin);
	printf("\n%d + %d = ", angka1, angka2);
	printf("\n========================================================================================================================\n");
    printf("========================================================================================================================\n");
	scanf("%d", &tebakan);
	
	if(tebakan!=0){
		if (tebakan==(angka1+angka2)){
			koin+=10;
			printf("\nTebakan Benar!\n");
			printf("Koin: +10");	
		}else{
			printf("\nTebakan Salah\n");
			printf("Hasil yang benar adalah: %d\n", angka1+angka2);
		}
}

	getch();
	system("cls");
	}
	win(age);
	printf("Selamat, kamu mendapatkan %d koin: ", koin);
	coins+=koin;
	energy-=15;
	hunger-=rand()%3+3;
	printf("\nSee you later!");
	getch();
//	PlaySound(NULL, 0, 0);
	mg(age, coins, energy, hunger);
}

int guessGame(int age, int coins, int energy, int hunger){
	int guess=1, angka, koin = 0;
	time_t t;
	srand((unsigned) time(&t));
	
	while(guess!=0){
		system("cls");
		printf("========================================================================================================================\n");
    	printf("========================================================================================================================\n");
		printf("\nMemory game\n");
		printf("Tes kecepatan ingatanmu dengan mengingat sebuah angka dalam 1,5 detik!\n\n");
		printf("Ketik 0 pada tebakan untuk kembali ke menu dan klaim koin!\n");
		printf("\nKoin: %d\n", koin);
		angka = rand()%999999*99;
		printf("\n%d", angka);
		printf("\n========================================================================================================================\n");
    	printf("========================================================================================================================\n");
		
		Sleep(1500);
		system("cls");
		
		printf("========================================================================================================================\n");
    	printf("========================================================================================================================\n");
		printf("\nMemory game\n");
		printf("Tes kecepatan ingatanmu dengan mengingat sebuah angka dalam 1,5 detik!\n\n");
		printf("Ketik 0 pada tebakan untuk kembali ke menu dan klaim koin!\n");
		printf("\nKoin: %d\n", koin);
		printf("\nAngka berapa yang baru muncul: ");
		printf("\n========================================================================================================================\n");
    	printf("========================================================================================================================\n");
		scanf("%d", &guess);
	
		if(guess!=0){
			if(guess==angka){
				koin+=10;      
				printf("\nTebakan Benar!\n");
				printf("Koin: +10");
				getch();
			}else{
				printf("\nPayah Kamu!\nYang benar: %d", angka);
				getch();
			}
		}else{                                 
			system("cls");
			win(age);
			printf("Kamu mendapat %d koin", koin);
			getch();
//			PlaySound(NULL, 0, 0);
			mg(age, coins, energy, hunger);
		}
	}
	
}
int texas(int age, int coins, int energy, int hunger, int bet){
	int koin, result;
	int kartu3, kartu1, kartu2, op1, op2, jawab, jumlah, move2, op3, jumlah1;
	time_t t;
	srand((unsigned) time(&t));
	
	system("cls");
	kartu1 = rand()%5+1;
	kartu2 = rand()%5+1;
	op1 = rand()%5+1;
	op2 = rand()%5+1;
	
	printf("Simple Poker Tamagotchi");
	printf("\n\n");
	printf("\t\tKartu lawan: ");
	printf("\n\t\t ___\t ___");
	printf("\n\t\t|   |\t|   |");
	printf("\n\t\t|   |\t|   |");
	printf("\n\t\t|___|\t|___|");
	
	printf("\n\n\n\t\tKartu %s:", nama);
	printf("\n\t\t ___\t ___");
	printf("\n\t\t|   |\t|   |");
	printf("\n\t\t|   |\t|   |");
	printf("\n\t\t|___|\t|___|");
	
	getch();
	system("cls");
	printf("Simple Texas Hold'em'");
	printf("\n\n");
	printf("\t\tKartu lawan: ");
	printf("\n\t\t ___\t ___");
	printf("\n\t\t|   |\t|   |");
	printf("\n\t\t|   |\t|   |");
	printf("\n\t\t|___|\t|___|");
	
	printf("\n\n\n\t\tKartu %s:", nama);
	printf("\n\t\t ___\t ___");
	printf("\n\t\t|   |\t|   |");
	printf("\n\t\t| %d |\t| %d |", kartu1, kartu2);
	printf("\n\t\t|___|\t|___|");
	
	printf("\n\n\nApakah ingin menambah jumlah kartu? ");
	printf("\n*Jika menambah jumlah kartu dan melewati 8, maka jumlah akan dikurangi 8");
	printf("\n\n1. Ya\n2. Tidak\n");
	scanf("%d", &jawab);
	system("cls");
		
	if(jawab==1){
		kartu3=rand()%5+1;
		jumlah = kartu1+kartu2+kartu3;
		jumlah = jumlah>8? jumlah-8:jumlah;
		
		printf("\t\tKartu lawan: ");
		printf("\n\t\t ___\t ___");
		printf("\n\t\t|   |\t|   |");
		printf("\n\t\t|   |\t|   |");
		printf("\n\t\t|___|\t|___|");
	
		printf("\n\n\n\t\tKartu %s:", nama);
		printf("\n\t\t ___\t ___\t ___");
		printf("\n\t\t|   |\t|   |\t|   |");
		printf("\n\t\t| %d |\t| %d |\t|   |", kartu1, kartu2);
		printf("\n\t\t|___|\t|___|\t|___|");
		
		getch();
		system("cls");
					
		move2=rand()%2+1;
	
		if(move2==1){
			op3=rand()%5+1;
			jumlah1= op1+op2+op3;
			jumlah1 = jumlah1>8? jumlah1-8:jumlah1;
			
			printf("\t\tKartu lawan: ");
			printf("\n\t\t ___\t ___\t ___");
			printf("\n\t\t|   |\t|   |\t|   |");
			printf("\n\t\t|   |\t|   |\t|   |");
			printf("\n\t\t|___|\t|___|\t|___|");
	
			printf("\n\n\n\t\tKartu %s:", nama);
			printf("\n\t\t ___\t ___\t ___");
			printf("\n\t\t|   |\t|   |\t|   |");
			printf("\n\t\t| %d |\t| %d |\t| %d |", kartu1, kartu2, kartu3);
			printf("\n\t\t|___|\t|___|\t|___|");
			
			getch();
			system("cls");
			result = jumlah>jumlah1? 1:0;
			printf("\t\tKartu lawan: ");
			printf("\n\t\t ___\t ___\t ___");
			printf("\n\t\t|   |\t|   |\t|   |");
			printf("\n\t\t| %d |\t| %d |\t| %d |", op1, op2, op3);
			printf("\n\t\t|___|\t|___|\t|___|");
	
			printf("\n\n\n\t\tKartu %s:", nama);
			printf("\n\t\t ___\t ___\t ___");
			printf("\n\t\t|   |\t|   |\t|   |");
			printf("\n\t\t| %d |\t| %d |\t| %d |", kartu1, kartu2,kartu3);
			printf("\n\t\t|___|\t|___|\t|___|");
			
		}else{
			jumlah1=op1+op2;
			jumlah1 = jumlah1>8? jumlah1-8:jumlah1;
		
			printf("\n\t\t ___\t ___");
			printf("\n\t\t|   |\t|   |");
			printf("\n\t\t|   |\t|   |");
			printf("\n\t\t|___|\t|___|");
	
			printf("\n\n\n\t\tKartu %s:", nama);

			printf("\n\t\t ___\t ___\t ___");
			printf("\n\t\t|   |\t|   |\t|   |");
			printf("\n\t\t| %d |\t| %d |\t| %d |", kartu1, kartu2, kartu3);
			printf("\n\t\t|___|\t|___|\t|___|");
			
			getch();
			result = jumlah>jumlah1? 1:0;
			system("cls");
			
			printf("\t\tKartu lawan: ");
			printf("\n\t\t ___\t ___");
			printf("\n\t\t|   |\t|   |");
			printf("\n\t\t| %d |\t| %d |", op1, op2);
			printf("\n\t\t|___|\t|___|");
	
			printf("\n\n\n\t\tKartu %s:", nama);
			printf("\n\t\t ___\t ___\t ___");
			printf("\n\t\t|   |\t|   |\t|   |");
			printf("\n\t\t| %d |\t| %d |\t| %d |", kartu1, kartu2,kartu3);
			printf("\n\t\t|___|\t|___|\t|___|");
		}
	}else{
		
		jumlah=kartu1+kartu2;
		jumlah = jumlah>8? jumlah-8:jumlah;
		
		move2=rand()%2+1;
	
		if(move2==1){
			op3=rand()%5;
			jumlah1= op1+op2+op3;
			jumlah1 = jumlah1>8? jumlah1-8:jumlah1;
			printf("\t\tKartu lawan: ");
			printf("\n\t\t ___\t ___\t ___");
			printf("\n\t\t|   |\t|   |\t|   |");
			printf("\n\t\t|   |\t|   |\t|   |");
			printf("\n\t\t|___|\t|___|\t|___|");
	
			printf("\n\n\n\t\tKartu %s:", nama);
			printf("\n\t\t ___\t ___");
			printf("\n\t\t|   |\t|   |");
			printf("\n\t\t| %d |\t| %d |", kartu1, kartu2);
			printf("\n\t\t|___|\t|___|");
			getch();	
			system("cls");
			result = jumlah>jumlah1? 1:0;
			printf("\t\tKartu lawan: ");
			printf("\n\t\t ___\t ___\t ___");
			printf("\n\t\t|   |\t|   |\t|   |");
			printf("\n\t\t| %d |\t| %d |\t| %d |", op1, op2, op3);
			printf("\n\t\t|___|\t|___|\t|___|");
	
			printf("\n\n\n\t\tKartu %s:", nama);
			printf("\n\t\t ___\t ___");
			printf("\n\t\t|   |\t|   |");
			printf("\n\t\t| %d |\t| %d |", kartu1, kartu2);
			printf("\n\t\t|___|\t|___|");
			
		}else{
			jumlah=kartu1+kartu2;
			jumlah = jumlah>8? jumlah-8:jumlah;
			jumlah1=op1+op2;
			jumlah1 = jumlah1>8? jumlah1-8:jumlah1;
			result = jumlah>jumlah1? 1:0;
			
			printf("\n\t\t ___\t ___");
			printf("\n\t\t|   |\t|   |");
			printf("\n\t\t|   |\t|   |");
			printf("\n\t\t|___|\t|___|");
	
			printf("\n\n\n\t\tKartu %s:", nama);

			printf("\n\t\t ___\t ___");
			printf("\n\t\t|   |\t|   |");
			printf("\n\t\t| %d |\t| %d |", kartu1, kartu2);
			printf("\n\t\t|___|\t|___|");
			getch();
			system("cls");
			
			result= jumlah>jumlah1? 1:0;
			printf("\t\tKartu lawan: ");
			printf("\n\t\t ___\t ___");
			printf("\n\t\t|   |\t|   |");
			printf("\n\t\t| %d |\t| %d |", op1, op2);
			printf("\n\t\t|___|\t|___|");
	
			printf("\n\n\n\t\tKartu %s:", nama);
			printf("\n\t\t ___\t ___");
			printf("\n\t\t|   |\t|   |");
			printf("\n\t\t| %d |\t| %d |", kartu1, kartu2);
			printf("\n\t\t|___|\t|___|");
		}
	}
	if(result==1){
		printf("\n\nKAMU MENANG!");
		printf("\nKamu mendapat %d koin", bet);
		coins+=bet;
	}else{
		printf("\n\nKAMU KALAH!");
		printf("\nKamu kehilangan %d koin", bet);
		coins-=bet;
	}
	getch();
	mg(age, coins, energy, hunger);
}

int printArr(int arr[], int length){
	int i, a, b;
	int coklat = 0, esKrim = 0, pizza = 0;
	printf("{");
	for(i=0; i<length; i++){
		if(arr[i]!=0){	
			a=arr[i];
			switch(a){
				case 125:
					printf("Coklat, ");
					coklat += 1;
					break;
				case 200:
					printf("Es Krim, ");
					esKrim += 1;
					break;
				case 500:
					printf("Pizza, ");
					pizza += 1;
					break;
			}	
		}
	}
		printf("}");
}

int win(age){
//	PlaySound(TEXT("E:\\Backup\\C\\Documents\\Program\\Coba\\New folder\\Proyek akhir\\Musik\\Victory.wav"), NULL, SND_FILENAME | SND_ASYNC);
	printf("========================================================================================================================\n");
	printf("========================================================================================================================\n");
	if(age == 0){
		printf("\n\n\t\t\t\t\t\t    * *\n");
		printf("\t\t\t\t\t         *       *\n");
		printf("\t\t\t\t\t      *             *\n");
		printf("\t\t\t\t\t    *     /\\       /\\ *\n");
		printf("\t\t\t\t\t  *                     *\n");
		printf("\t\t\t\t\t  *                     *\n");
		printf("\t\t\t\t\t  *                     *\n");
		printf("\t\t\t\t\t  *                     *\n");
		printf("\t\t\t\t\t    *                 *\n");
		printf("\t\t\t\t\t      *             *\n");
		printf("\t\t\t\t\t    *                 *\n");
		printf("\t\t\t\t\t         *       *");
		printf("\n\t\t\t\t\t\t    * *\n");
	}
	if(age == 1){
		printf("\n\n\t\t\t\t\t\t     * *\n");
		printf("\t\t\t\t\t\t * * * * * *");
		printf("\n\t\t\t\t\t  *  *     /\\       /\\*  *");
		printf("\n\t\t\t\t\t* * *                   * * *");
		printf("\n\t\t\t\t     * * * *                     * * * *");	
		printf("\n\t\t\t\t\t * * * * * * * * * * * * * *");
		printf("\n\t\t\t\t\t* * * * * * * * * * * * * * *\n");		
	}
	if(age == 2){
		printf("\n\n\t\t\t\t* * * * * * * * * * * * * \n");
		printf("\t\t\t      *                          *\n");
		printf("\t\t\t      *    * *      *    * *     *\n");
		printf("\t\t\t      *    *   *    *    *   *   *\n");
		printf("\t\t\t      *    * * *    *    * *     *\n");
		printf("\t\t\t      *    *  *     *    *       *\n");
		printf("\t\t\t      *    *    *   *    *       *\n");
		printf("\t\t\t      *                          *\n");
		printf("\t\t\t      *                          *\n");
		printf("\t\t\t      *                          *\n");
		printf("\t\t\t      *                          *\n");
		printf("\t\t\t      *                          *\n");
		printf("\t\t\t  * * * * * * * * * * * * * * * * * * *\n");			
		printf("\t\t\t  *                                   *\n");
		printf("\t\t\t  *        T a m a g o t c h i        *\n");
		printf("\t\t\t  *                                   *\n");
		printf("\t\t\t  *    E n t e r t a i n t m e n t    *\n");
		printf("\t\t\t  *                                   *\n");
		printf("\t\t\t  * * * * * * * * * * * * * * * * * * *\n");		
		printf("Dia tersenyum di alam sana...");
	}
	printf("========================================================================================================================\n");
	printf("========================================================================================================================\n");
}

