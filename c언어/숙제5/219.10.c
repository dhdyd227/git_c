#include <stdio.h>

int main(void)
{
    int i,j;
    
    printf("2와 100사이에 있는 모든 소수.\n");
    
    for(i=2;i<=100;i++)
    {
             for(j=2;j<i;j++)
             if (i%j==0)
              break;
              
             if(i==j)
             printf("%d\t",i);
             }
             
  
  system("PAUSE");	
  return 0;
}
