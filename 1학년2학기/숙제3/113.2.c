//사용자로부터 x의 값을 실수로 입력받아서 다음과 같은 다항식의 값을 계산하는 프로그램을 작성하여보자 
#include <stdio.h>

int main(void)
{
   
    float x,y;
 
    printf("x의 값을 입력하시오:");
    scanf("%f",&x);
   
    y=(3*x*x*x)-(7*x*x)+9;
    printf("다항식의 값은 %f 입니다.\n",y);
    
  system("PAUSE");	
  return 0;
}

