/**
*   
*    Comment Template
*   
*    by GrinuX ( Toni Juliá Muntaner )
*  
*    CS50 2012
*
*    Palma de Mallorca Spain
*
*/

#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
   
   //var declaration 
   float money;
   int cents;
   int count = 0;
    
   // this loop promtp the user again if the input is negative 
   do
   {
       printf ("O hai!  How much change is owed?: ");
       money = GetFloat(); 
   }
   while (money < 0 ); 
    
    
   //convert dollars into cents and round the result
   money = round(money * 100.00);
   cents = (int)money;
   
   
   // divide cents by quarters and the rest is the new cents amount
   while (cents >= 25)
   {
       count = cents / 25;
       cents = cents % 25;
       
   }
    
   // divide cents by dimes  and the rest is the new cents amount
   while (cents >= 10)
   {
       count = count + (cents / 10);
       cents = cents % 10;
       
   }
    
    //divide cents by nickels and the rest is the new cents amount
   while (cents >= 5)
   {
       count = count + (cents / 5);
       cents = cents % 5;
       
   }
   
   // last count of coins, we dont need another loop
   count = count + cents;
    
   // print the result  
   printf("%i\n",count);
   
   return 0;
}
