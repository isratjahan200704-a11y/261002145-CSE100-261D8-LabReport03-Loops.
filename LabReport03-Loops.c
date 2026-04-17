#include<stdio.h>
   int main(){
     int Number,originalNumber,reminder,reversedNumber=0;

         printf("Enter an integer: ");
         scanf("%d", &Number);
         originalNumber=Number;
             int isNegative=0;
         if ( Number < 0){
            isNegative=1;
            Number=-Number;
         }
         while(Number !=0){
            reminder=Number%10;
            reversedNumber=reversedNumber* 10+reminder;
            Number=Number/10;
         }
         printf("original number:%d\n",originalNumber);
         printf("Reversed number:%d\n", reversedNumber);

         return 0;
   }
