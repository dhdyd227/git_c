//온스로 표시된 무게를 그램으로 변경가는 프로그램을 작성하여보자.1온스는28.3그램이다 
#include <stdio.h>

int main(void)
{
    
double oz,g; //온스 그램 

printf("온스를 입력하시오:");         
scanf("%lf",&oz);

g=oz*(28.3);
printf("%lf온스는 %lf그램입니다.\n",oz,g);

  
  system("PAUSE");	
  return 0;
}
