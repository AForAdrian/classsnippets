#include <stdio.h>
int input;
int ac,opt;
int sum=900000;
int password;

void withdraw()
{
    printf("Enter amount to Withdraw:\t");
    scanf("%d", &input);
    for(input;input>sum;)
    {
      printf("Failed!Your current balance is insufficient!\nEnter a valid amount to Withdraw: \t");
      scanf("%d", &input);
    }
     sum=sum-input;
     printf("Success! You have withdrawn Ksh.%d\nYour new balance is: Ksh.%d", input,sum);
}

void balance_enquiry()
{
   printf("\nSuccess! Your current balance is: Ksh.%d", sum);
}

void fund_transfer()
{
    printf("Enter amount to Transfer: \t");
    scanf("%d", &input);
    for(input;input>sum;)
    {
      printf("Failed!Your current balance is insufficient!\nEnter a valid amount to Transfer: \t");
      scanf("%d", &input);
    }
    if(input>1000000)
    {
     printf("Failed!You Cannot transfer more than Ksh.1,000,000!\nEnter a valid amount to Transfer:  ");
     scanf("%d", &input);
    }
    else
    {
     printf("Enter account number to transfer to:\t");
     scanf("%d", &ac);
     sum=sum-input; 
     printf("Success! You have transfered Ksh.%d to %d\n Your new balance is: Ksh.%d", input,ac,sum);
    }
}

void bank_deposit()
{
  printf("Enter amount to Deposit:  ");
    scanf("%d", &input);
    for(input;input>1000000;)
    {
      printf("Failed!You Cannot Deposit more than Ksh.1,000,000!\nEnter a valid amount to Deposit:\t");
      scanf("%d", &input);
    } 
    printf("Enter amount to Deposit\t");
    sum=sum+input;
    printf("Success! You have Deposited Ksh.%d\n to Your account!\nYour new balance is: Ksh.%d", input,sum);
}

int main()
{
 char str[20];
 printf("Enter Your acccount Name\t");
 gets(str);
 printf("\nInput Password\t");
 scanf("%d", &password);
 if(password==1234)
 { 
  printf("\nDear  ");
  puts(str);
  printf("Welcome! Welcome!:\n");
  do
  {
  printf("\nSelect a transaction:\n\t1.Withdraw Cash\n\t2.Balace Enquiry\n\t3.Fund Transfer\n\t4.Bank Deposit\n\t5.Exit\nNote: Select an option:\t");
  scanf("%d", &opt);
  if(opt==1)
  {
    withdraw();
  }
  else if(opt==2)
  {
    balance_enquiry(); 
  }
  else if(opt==3)
  {
    fund_transfer();
  }
  else if(opt==4)
  {
    bank_deposit();
  }
  else if(opt==5)
  {
     printf("\nExit Successful!");
  }
  else
  {
  printf("Invalid option");
  }
 }while(opt!=5);
 }
 else
 {
  printf("Invalid account details");
 }
return 0;
}