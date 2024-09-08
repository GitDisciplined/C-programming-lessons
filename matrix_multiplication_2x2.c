#include <stdio.h>
//#include <math.h>


int main()
{
 
int arr[2][2]={{1,2},{5,4}};
int arr1[2][2]={{1,0},{5,4}};
int arr3[2][2];



for(int i=0; i<2;i++)
 {
     
  for(int j=0;j<2;j++)
  {
     arr3[i][j]=0; 
  }

 } 


for(int k=0; k<2; k++)
{

for(int i=0; i<2;i++)
 {
     
  for(int j=0;j<2;j++)
  {
   arr3[k][i]=arr3[k][i] + arr[k][j]*arr1[j][i]; 
  }
}
 } 

 
for(int i=0; i<2;i++)
 {
     
  for(int j=0;j<2;j++)
  {
   printf("%d \n",arr3[i][j]);
  }

 } 
 
 
return 0;
}


