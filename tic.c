#include<stdio.h>

void showboard(char board[9]);
int checkX(char board[9],char player1[20], char player2[20]);
int check0(char board[9],char player1[20], char player2[20]);
void end();

int main(){
    printf("\n");
    printf("\n");
    printf("******************Welcome To TIC-Tac-Toc Game*********************\n");
    printf("*********************Created By Arman Saifi************************\n");
    int n,i,j,k;
    char signX,sign0;
    char player1[20],player2[20];
    printf("Player 1\n");
    printf("Enter your Name :\n");
    scanf("%s",player1);
    printf("Player 2\n");
    printf("Enter your Name :\n");
    scanf("%s",player2);

   char board[9] = {'1','2','3','4','5','6','7','8','9'};
   showboard(board);

   printf("%s's Turn\n",player1);                //1
   printf("Enter Postion & Type X: \n");
   scanf("%d",&n);
   while(n<1 || n>9){
    printf("Enter Correct Position & Type X !\n");
    scanf("%d",&n);
   }
   scanf(" %c",&signX);
   while(signX!='X'){
        printf("Please Write Correct Symbol !\n");
        scanf(" %c",&signX);
}
   board[n-1]=signX;
   printf("\n");
   showboard(board);
   end();


   printf("%s's Turn\n",player2);               //2
   printf("Enter Postion & Type 0: \n");
   scanf("%d",&n);
   while(n<1 || n>9){
    printf("Enter Correct Position & Type 0 !\n");
    scanf("%d",&n);
   }
   for(i=0;;i++){
   if(board[n-1]=='X' || board[n-1]=='0'){
    printf("This position is occupied, Please Choose Another Position \n");
    showboard(board);
    scanf("%d",&n);
   }
    else{
        break;
    }
   }
   scanf(" %c",&sign0);
   while(sign0!='0'){
        printf("Please Write Correct Symbol !\n");
        scanf(" %c",&sign0);
}
   board[n-1]=sign0;
   
   printf("\n");
   showboard(board);
   end();


   printf("%s's Turn\n",player1);                //3
   printf("Enter Postion & Type X: \n");
   scanf("%d",&n);
   while(n<1 || n>9){
    printf("Enter Correct Position & Type X !\n");
    scanf("%d",&n);
   }
   for(i=0;;i++){
   if(board[n-1]=='X' || board[n-1]=='0'){
    printf("This position is occupied, Please Choose Another Position \n");
    showboard(board);
    scanf("%d",&n);
   }
    else{
        break;
    }
   }
   scanf(" %c",&signX);
   while(signX!='X'){
        printf("Please Write Correct Symbol !\n");
        scanf(" %c",&signX);
}
   board[n-1]=signX;
   printf("\n");
   showboard(board);
   end();

 
   printf("%s's Turn\n",player2);               //4
   printf("Enter Postion & Type 0: \n");
   scanf("%d",&n);
    while(n<1 || n>9){
    printf("Enter Correct Position & Type 0 !\n");
    scanf("%d",&n);
   }
   for(i=0;;i++){
   if(board[n-1]=='X' || board[n-1]=='0'){
    printf("This position is occupied, Please Choose Another Position \n");
    showboard(board);
    scanf("%d",&n);
   }
    else{
        break;
    }
   }
    scanf(" %c",&sign0);
   while(sign0!='0'){
        printf("Please Write Correct Symbol !\n");
        scanf(" %c",&sign0);
}
   board[n-1]=sign0;
   
   printf("\n");
   showboard(board);
   end();


   printf("%s's Turn\n",player1);             //5
   printf("Enter Postion & Type X: \n");
   scanf("%d",&n);
   while(n<1 || n>9){
    printf("Enter Correct Position & Type X !\n");
    scanf("%d",&n);
   }
   for(i=0;;i++){
   if(board[n-1]=='X' || board[n-1]=='0'){
    printf("This position is occupied, Please Choose Another Position \n");
    showboard(board);
    scanf("%d",&n);
   }
    else{
        break;
    }
   }
   scanf(" %c",&signX);
   while(signX!='X'){
        printf("Please Write Correct Symbol !\n");
        scanf(" %c",&signX);
}
   board[n-1]=signX;
   printf("\n");
   checkX(board, player1, player2);
   printf("\n");
   showboard(board);
   if(checkX(board,player1,player2)==0){
    return 0;
   }
   end();

   printf("%s's Turn\n",player2);          //6
   printf("Enter Postion & Type 0: \n");
   scanf("%d",&n);
    while(n<1 || n>9){
    printf("Enter Correct Position & Type 0 !\n");
    scanf("%d",&n);
   }
   for(i=0;;i++){
   if(board[n-1]=='X' || board[n-1]=='0'){
    printf("This position is occupied, Please Choose Another Position \n");
    showboard(board);
    scanf("%d",&n);
   }
    else{
        break;
    }
   }
    scanf(" %c",&sign0);
   while(sign0!='0'){
        printf("Please Write Correct Symbol !\n");
        scanf(" %c",&sign0);
}
   board[n-1]=sign0;
   
   printf("\n");
   check0(board, player1, player2);
   printf("\n");
   showboard(board);
   if(check0(board,player1,player2)==0){
    return 0;
   }
   end();


   printf("%s's Turn\n",player1);             //7
   printf("Enter Postion & Type X: \n");
   scanf("%d",&n);
   while(n<1 || n>9){
    printf("Enter Correct Position & Type X !\n");
    scanf("%d",&n);
   }
   for(i=0;;i++){
   if(board[n-1]=='X' || board[n-1]=='0'){
    printf("This position is occupied, Please Choose Another Position \n");
    showboard(board);
    scanf("%d",&n);
   }
    else{
        break;
    }
   }
   scanf(" %c",&signX);
   while(signX!='X'){
        printf("Please Write Correct Symbol !\n");
        scanf(" %c",&signX);
}
   board[n-1]=signX;
   printf("\n");
   checkX(board, player1, player2);
   printf("\n");
   showboard(board);
   if(checkX(board,player1,player2)==0){
    return 0;
   }
   end();

   printf("%s's Turn\n",player2);          //8
   printf("Enter Postion & Type X: \n");
   scanf("%d",&n);
    while(n<1 || n>9){
    printf("Enter Correct Position & Type 0 !\n");
    scanf("%d",&n);
   }
   for(i=0;;i++){
   if(board[n-1]=='X' || board[n-1]=='0'){
    printf("This position is occupied, Please Choose Another Position \n");
    showboard(board);
    scanf("%d",&n);
   }
    else{
        break;
    }
   }
    scanf(" %c",&sign0);
   while(sign0!='0'){
        printf("Please Write Correct Symbol !\n");
        scanf(" %c",&sign0);
}
   board[n-1]=sign0;
   
   printf("\n");
   check0(board, player1, player2);
   printf("\n");
   showboard(board);
   if(check0(board,player1,player2)==0){
    return 0;
   }
   end();

   printf("%s's Turn\n",player1);             //9
   printf("Enter Postion & Type X: \n");
   scanf("%d",&n);
   while(n<1 || n>9){
    printf("Enter Correct Position & Type X !\n");
    scanf("%d",&n);
   }
   for(i=0;;i++){
   if(board[n-1]=='X' || board[n-1]=='0'){
    printf("This position is occupied, Please Choose Another Position \n");
    showboard(board);
    scanf("%d",&n);
   }
    else{
        break;
    }
   }
   scanf(" %c",&signX);
   while(signX!='X'){
        printf("Please Write Correct Symbol !\n");
        scanf(" %c",&signX);
}
   board[n-1]=signX;
   printf("\n");
   checkX(board, player1, player2);
   printf("\n");
   showboard(board);
   if(checkX(board,player1,player2)==0){
    return 0;
   }
   end();

printf("Tie !, None of Player is win\n");
printf("******************Try Again, Next Time*****************************");
    return 0;
}



void showboard(char board[9]){ 
    int i;
    for(i=0;i<9;i++){
    printf("%c\t",board[i]);
    if(i==2 || i==5 || i==8){
        printf("\n");
    }
    }
    printf("\n");
}

int checkX(char board[9],char player1[20], char player2[20]){
    if((board[0]=='X' && board[1]=='X' && board[2]=='X') || (board[3]=='X' && board[4]=='X' && board[5]=='X') 
        || (board[6]=='X' && board[7]=='X' && board[8]=='X') || (board[0]=='X' && board[3]=='X' && board[6]=='X')
        || (board[1]=='X' && board[4]=='X' && board[7]=='X') || (board[2]=='X' && board[5]=='X' && board[8]=='X')
        || (board[0]=='X' && board[4]=='X' && board[8]=='X') || (board[2]=='X' && board[4]=='X' && board[6]=='X')){
        printf("%s Win !\n",player1);
        printf("%s lose !\n",player2);
        return 0;
    }
    else{
        return 1;
    }
}

int check0(char board[9],char player1[20], char player2[20]){
    if((board[0]=='0' && board[1]=='0' && board[2]=='0') || (board[3]=='0' && board[4]=='0' && board[5]=='0') 
        || (board[6]=='0' && board[7]=='0' && board[8]=='0') || (board[0]=='0' && board[3]=='0' && board[6]=='0')
        || (board[1]=='0' && board[4]=='0' && board[7]=='0') || (board[2]=='0' && board[5]=='0' && board[8]=='0')
        || (board[0]=='0' && board[4]=='0' && board[8]=='0') || (board[2]=='0' && board[4]=='0' && board[6]=='0')){
        printf("%s Wins !\n",player2);
        printf("%s lose !\n",player1);
        return 0;
    }
    else{
        return 1;
    }
}

void end(){
    printf("-------------------------------------------------------------------------------------------\n");
    printf("\n");
}