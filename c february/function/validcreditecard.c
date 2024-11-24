#include<stdio.h>
#include<stdlib.h>

//Variables
int DB_PIN; // Store pin
int Balance = 0;
int user_pin;

//Functions
int ENTER_USER_PIN(int);
int PIN_FUNCTION(int);
int VERIFY_PIN(int); 
void CHANGE_PIN();
void DEPOSIT(); 
void WITHDRAW(); 
void BALANCE(); 

		void switchfunction() // Defination
		{  
			char ex;
			do
			{	
				int choice;
				printf("\n_________________");
				printf("\n\n\t\t  Money Bank \t");
				printf("\n_________________");
				printf("\n\n 1 : Deposit  ");
				printf("\n 2 : Withdraw  ");
				printf("\n 3 : Balance  ");
				printf("\n 4 : Cancle ");
				printf("\n 5 : Change PIN ");
				printf("\n\n_________________");
				printf("\n\n Enter choice : ");
				scanf("%d",&choice);
				//printf("\n_________________");
				switch(choice)
				{
				
					case 1 :
							DEPOSIT();	// function	Call
							break;
					
					case 2 :
							WITHDRAW(); // function	Call
							break;
					
					case 3 : 
							BALANCE(); // function	Call	
							break;
							
					case 4 :
						return;
						
					case 5 :
							CHANGE_PIN(); // function	Call	
							break;
							
					default:
               				 printf("\n Invalid choice. Please try again.");
               				 
				}
				
				printf("\n\n Do you want to continue with Money Bank : Press (Y/y for Yes)  : ");
				scanf(" %c",&ex);
				
				system("cls");
				
			}while(ex == 'y' || ex == 'Y');
		}
	
		//change pin function
		void CHANGE_PIN() //defination
		{
			int new_pin,old_pin;
			
			printf("\n Enter Old PIN :  ");
			scanf("%d",&old_pin);
			
			printf("\n Enter New PIN :  ");
			scanf("%d",&new_pin);
			(DB_PIN == old_pin) ? PIN_FUNCTION(new_pin) // new pin pass to check validations
								  : printf("\n Incorrect PIN........!");
			
		}
		
		// Validations for PIN 
		int PIN_FUNCTION(int pin) //defination
		{
			char ex;
		
			if(pin >= 1000 && pin <= 9999)
			{
				DB_PIN = pin; 
				printf("\n PIN Generated / Changed Successfully!");
			}	
			else
			{
				printf("\n PIN should be 4 digit!");
				return 0;
			}
			
			printf("\n\n Do you want to continue with Money Bank : Press (Y/y for Yes)  : ");
			scanf(" %c",&ex);
			
			system("cls");
			
			if(ex == 'Y' || ex == 'y' )
			switchfunction(); // function Call	
		
		}
		
		//Genrate pin function
		void GENERATE_PIN() //defination
		{
			int generate_pin;
			printf("\n_________________");
			printf("\n\n\t Welcome to Money Bank \t");
			printf("\n_________________");
			
			printf("\n\n Generate your PIN : ");
			scanf("%d",&generate_pin);	
			
			PIN_FUNCTION(generate_pin); // generated pin pass to check validations
			
		}
		
		// verify pin - function
		int VERIFY_PIN(int user_pin) //defination
		{
			if(DB_PIN == user_pin) 
			{
				return 1;
			}
			return 0;
		}
	
		// Enter user pin - function
		int ENTER_USER_PIN(int user_pin) //defination
		{
			printf("\n\n Enter your PIN number : ");
			scanf("%d",&user_pin);
			
			return user_pin ;
		}	
		
		//DEPOSIT - function
		void DEPOSIT() // defination
		{
			 user_pin =	ENTER_USER_PIN(user_pin);
			
			int flag = 0;
			flag = VERIFY_PIN(user_pin);  // call 
			
			if(flag)
			{
				int Deposit_Amount = 0;
				printf("\n Enter Deposit amount : ");
				scanf("%d",&Deposit_Amount);
				
				if(Deposit_Amount > 0)
				{
					Balance = Balance + Deposit_Amount;
					printf("\n Deposit Successfull......!");
					Deposit_Amount = 0;	
				}
				else
				{
						printf("\n\n Invalid Amount! : ");
				}
			
			}
			else
			{
				printf("\n Incorrect PIN........!");
			}
			printf("\n_________________");
			
		}
		
		//withdraw function	
		void WITHDRAW()  // defination
		{
			int Withdraw_amt = 0;
			
			 user_pin =	ENTER_USER_PIN(user_pin);
			
			int flag = 0;
			flag = VERIFY_PIN(user_pin);  // call 
			
			if(flag)
			{
				printf("\n Enter withdraw amount : ");
				scanf("%d",&Withdraw_amt);
			
				if(Withdraw_amt > Balance || Withdraw_amt < 0)
				{
					printf("\n\n Insufficient balance.....!");
				}
				else
				{
					Balance =  Balance - Withdraw_amt;
					printf("\n Withdraw Successfull......!");
				}
			
			}
			else
			{
				printf("\n Incorrect PIN........!");
			}
			printf("\n_________________");
		}
		
		//check balance function
		void BALANCE()	// defination
		{
			
			 user_pin =	ENTER_USER_PIN(user_pin);
			
			int flag = 0;
			flag = VERIFY_PIN(user_pin);  // call 
			
			flag ? printf("\n Your account balance is : %d",Balance) : printf("\n Incorrect PIN........!");
			
			printf("\n_________________");
		}
	
	
// Main Function		
int main()
{
	GENERATE_PIN(); // function call
	printf("\n_________________");
	printf("\n\n Thank you visit again...............!");
	printf("\n_________________");
	
	return 0;	
}
