//사용자로부터 소수점 표기 형식으로 실수를 읽어서 지수 형식으로 출력하는 프로그램을 작성하여보자. 
#include <stdio.h>

int main(void)
{
   double x;
    
    printf("실수를 입력하시오:");
    scanf("%lf",&x);
    printf("지수 형식으로는 %1.4le입니다.\n",x);
    
  
  system("PAUSE");	
  return 0;
}
