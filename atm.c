#include<stdio.h>
int main(){
    int pin=9868,temppin;
    int n=0;
    int balance=0,temp;
    int withdraw;
    char balcheck;
    printf("Enter your 4 digit ATM Pin : ");
    scanf("%d",&temppin);
    while(temppin!=pin){
        printf("Incorrect Pin !, Please Enter Correct Pin \n");
        scanf("%d",&temppin);
    }

    while(n!=5){
    printf("SELECT OPTIONS FROM BELOW :-\n");
    printf("1. BALANCE INQUIRY\n");
    printf("2. DEPOSIT\n");
    printf("3. CASH WITHDRAWAL\n");
    printf("4. PIN CHANGE\n");
    printf("5. EXIT\n");
    scanf("%d",&n);
    switch(n){
        case 1 : printf("Rs. %d\n",balance);
                 printf("\n");
                 printf("*****************Thank you for Banking with us***********************\n");
                 printf("\n");
        break;
        case 2 : printf("Enter Amount You Want to Deposit : \n");
                 scanf("%d",&temp);
                 balance+=temp;
                 printf("Rs. %d is Successfully Deposited to your Account !\n",temp);
                 printf("Would you like to see your Account Balance \n");
                 printf("If Yes type Y or No type N\n");
                 scanf(" %c",&balcheck);
                 if(balcheck=='y'){
                    printf("Balance : Rs. %d\n",balance);
                 }
                 else{
                    printf("\n");
                 }
                  printf("\n");
                  printf("*****************Thank you for Banking with us***********************\n");
                  printf("\n");
        break;
        case 3 : printf("Enter Amount that you want to Withdraw :\n");
                 scanf("%d",&withdraw);
                 
                 if(withdraw>balance){
                    printf("INSUFFICIENT BALANCE !\n");
                 }
                 else{
                 printf("Rs %d is Withdraw Successfully !\n",withdraw);
                 balance=balance-withdraw;
                 }
                 printf("Would you like to see your Account Balance \n");
                 printf("If Yes type Y or No type N\n");
                 scanf(" %c",&balcheck);
                 if(balcheck=='y'){
                    printf("Balance : Rs. %d\n",balance);
                 }
                 else{
                    printf("\n");
                 }
                  printf("\n");
                  printf("*****************Thank you for Banking with us***********************\n");
                  printf("\n");
        break;
        case 4 : printf("Enter Your New Pin !\n");
                 scanf("%d",&pin);
                 printf("Your ATM Pin Changed Successfully !\n");
        break;
        case 5: printf("*****************Thank you for Banking with us***********************\n");
                return 0;
                }
    
    }
    printf("\n");
    printf("*****************Thank you for Banking with us***********************\n");
    printf("\n");
    return 0;
}