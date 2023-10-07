#include <stdio.h>
void atm(int arr[],int amount){
    int temp;
    printf("The amount is : \n");
    for(int i=0;i<10;i++){
         temp=amount/arr[i];
         printf("%d------>%d\n",arr[i],temp);
         amount=amount%arr[i];
    }
}

int main()
{
   int arr[]={2000,500,200,100,50,20,10,5,2,1};
   int check;
   while(1){
       printf("Enter 'ZERO' for exit otherwise one :: ");
       scanf("%d",&check);
       if(check==1){
             printf("Enter the amount that you want :: ");
             int amount;
             scanf("%d",&amount);
             atm(arr,amount);
       }
       else if(check==0){
           break;
       }
       else{
           printf("Invalid input! Try again.");
       }
   }
}
