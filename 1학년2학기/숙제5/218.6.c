#include <stdio.h>

int main(void)
{
    int x=0,min=10001;
    
    while(1)
    {
            printf("데이터를 입력하시오(음수를 입력하면 종료):"); 
            scanf("%d",&x);
            if(x<min && x>=0)
            {
                   min=x;
                   }
                   else if(x<0)
                   break;
                   }
                    
                   printf("최솟값은 %d입니다.\n",min); 
  
  system("PAUSE");	
  return 0;
}
