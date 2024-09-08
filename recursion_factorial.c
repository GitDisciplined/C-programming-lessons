#include <stdio.h>

int recu(int n)
{
   
   if (n==0) 
   {
       return 1;
   }
   
   else
   {
      return n * recu(n-1);
   }
    
    
}


int main(void) 
{
	
int b;
b=recu(20);
printf("%d", b);

}

