/* CMD BANK
Yunus Emre Aydinli
22.08.2020 00:11 */
#include<stdio.h>
#include<locale.h>

#include<conio.h>   

int language;
int main() {
	
	setlocale(LC_ALL,"turkish");
	
	int pass, x=10;	
	
	printf("--------WELCOME TO CMD BANK!--------\n");
 	printf("Please choose your language! (English = 1 / Turkish = 2): ");
 	scanf("%d", &language);
 	
 	if (language == 1) {
 		printf("Application language is English. Please wait...");
	 } else if (language == 2) {
	 	printf("Uygulama dili T�rk�e yap�l�yor. L�tfen Bekleyiniz...");
	 } else {
	 	system("CLS");
	 	printf("Error! Please enter the numbers requested from you.");
	 	sleep(1);
	 	system("CLS");
	return main();
	 }
 
 	sleep(1);
	   	system("CLS");
	
	if(language == 1) {
		 	printf("--------CMD BANKASINA HO�GELD�N�Z!--------\n");
	}
	else{
	 	printf("--------WELCOME TO CMD BANK!--------\n");
	}
 	
	while (x!=0) {
		if(language == 1 ) {
			system("CLS");
			printf("--------WELCOME TO CMD BANK!--------\n");
			printf("\nEnter your password: ");

		}
		else {
			system("CLS");
			printf("--------CMD BANKASINA HO�GELD�N�Z!--------\n");
			printf("\nParolan�z� giriniz: ");

		}
		scanf("%d",&pass);	
		if (pass == 123)
		{
		if(language == 1 ) {
			printf("Logging in...");

		}
		else {
			printf("\nGiri� yap�l�yor...");

		}
		x=0;
		if(language == 1) {
			printf("\nPlease wait...");
		}
		else {
			printf("\nL�tfen Bekleyiniz...");
		}
   			sleep(1);
	   		system("CLS");
	    }
	    else {
	    if(language == 1) {
	    	printf("Wrong password, try another password.");   
	    	system("CLS");
		}
		else {
			printf("Yanl�� �ifre, ba�ka bir �ifre deneyin.");
			system("CLS"); 
		}  
	}
		printf("\n");
   }
   
   system("CLS");
	calistir();
	
	return 0;
}

void calistir() {
	int islem;
	int bakiye = 1000;
	int tutar;
	
	if(language == 1) {
		printf("--------WELCOME TO CMD BANK!--------\n");
	}
	else {
		printf("-------- CMD BANKASINA HO�GELD�N�Z! --------\n\n");
	}
	
	if(language == 1) {
		printf("\t\t\tTransactions\n1. Withdraw money\n2. Deposit\n3. Making Money Transfer\n4. Balance Query\n5. Card Refund\n\n\n");

	}
	else {
		printf("\t\t\t��lemler\n1. Para �ekme\n2. Para Yat�rma\n3. Havale Yapma\n4. Bakiye Sorgulama\n5. Kart �ade\n\n\n");
	}
	
	if(language == 1) {
		printf("Select the action: ");
	}
	else {
		printf("��lemi se�iniz: ");
	}
	scanf("%d",&islem);
	
	switch(islem) {
		
		//TR: Para �ekme - EN: Withdraw money
		case 1 :
			if(language == 1) {
				printf("Your balance: %d\n",bakiye);
			}
			else {
				printf("Bakiyeniz: %d\n",bakiye);
			}
			if(language == 1) {
				printf("Amount to withdraw: ");
			}
			else {
				printf("�ekilecek miktar: ");
			}
			scanf("%d",&tutar);
				if (tutar > bakiye) {
					if(language == 1) {
						printf("Insufficient balance!\n");
				}
				else {
					printf("Yetersiz Bakiye!\n");
				}
			}
			bakiye -= tutar;
			if(language == 1) {
				printf("\t\t\tYour remaining balance: %d",bakiye);
			}
			else {
				printf("\t\t\tKalan Bakiyeniz: %d",bakiye);
			}
		break;
		
		//TR: Para yat�rma - EN: Deposit money
		case 2 :
			if(language == 1) {
				printf("Your balance: %d\n",bakiye);
			}
			else {
				printf("Bakiyeniz: %d\n",bakiye);
			}
			if(language == 1) {
				printf("Amount to be deposited: ");
			}
			else {
				printf("Yat�r�lacak tutar: ");
			}
			scanf("%d",&tutar);
			bakiye += tutar;
			if(language == 1) {
				printf("Your remaining balance: %d",bakiye);
			}
			else {
				printf("Kalan Bakiyeniz: %d",bakiye);
			}
		break;
		
		//TR: Havale yapma - EN: Making a transfer
		case 3 :
			if(language == 1) {
				printf("Your balance: %d\n",bakiye);
			}
			else {
				printf("Bakiyeniz: %d\n",bakiye);
			}
			if(language == 1) {
				printf("Amount to be transferred: ");
			}
			else {
				printf("Havale yap�lacak tutar: ");
			}
			scanf("%d",&tutar);
				if (tutar > bakiye) {
					if(language == 1) {
						printf("Insufficient Balance!\n");
					}
					else {
						printf("Yetersiz Bakiye!\n");
					}
				}
			bakiye -= tutar;
			if(language == 1) {
				printf("Your remaining balance: %d",bakiye);
			}
			else {
				printf("Kalan Bakiyeniz: %d",bakiye);
			}
		break;
			
		//TR: Bakiye sorgulama - EN: Balance query
		case 4 :
		if(language == 1) {
			printf("Your balance: %d",bakiye);
			}
		else {
			printf("Bakiyeniz: %d",bakiye);
			}
		break;
		
		//TR: Kard iade - EN: Card returns
		case 5 :
		if(language == 1) {
			printf("The card is returned.\n");
		}
		else {
			printf("Kart iade edildi.\n");
		}
			break;
			
		//TR: Yanl�� say� girimi - EN: Wrong number entry
		default :
			if(language == 1) {
				system("CLS");
				printf("Error!\nPlease enter the numbers requested from you.");
			}
			else {
				system("CLS");
				printf("Hata!\nL�tfen sizden istenen numaralar� giriniz.");
			}
			break;
	}
	
	int durum; 
		if(language == 1) {
			printf("\nDo you want to leave the Virtual Bank? YES = 1, TURN BACK = 2 :");
		}
		else {
		printf("\nSanal Bankadan ayr�lmak istiyor musunuz? EVET = 1, GER� D�N = 2 :");
		}
	 	scanf("%d", &durum);
	if(durum == 2){
		 system("CLS");
		calistir();
	}

	
}
