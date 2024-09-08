#include <stdio.h>

int main(void) 
{

int temp1=0, temp2=1, prev0, prev1;	
int n;
printf("enter the bound\n");
scanf("%d",&n);

if (n==1){
    
    printf("%d \n",temp1);
}

else if (n==2) {
    printf("%d\n%d",temp1,temp2);
    
    
}

else 	{
    
printf("%d\n%d\n",temp1,temp2);
    
for (int i=0; i<=n-3;i++) { 
    
  prev0= temp2;
  prev1= temp1+temp2;
  
 printf("%d \n", prev1);
 
 temp2=prev1;
 temp1=prev0;
  
} 
  
  
}
	
	
}

