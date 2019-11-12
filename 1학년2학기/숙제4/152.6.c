//다음 수식의 값을 계산하여서 화면에 출력하여보자.x의 값은 사용자로부터 입력받는다. 
#include <stdio.h>

int main(void)
{
    double x;         //int 쓰고 싶은데요..  int 사용하면 정수값이 출력되서.. double 씁니다. 
    double y;
    
    printf("정수를 입력하시오:");
    scanf("%lf",&x);
    
    y=((x*x*x)-20)/(x-7);
    
    printf("수식의 값은 %lf입니다.\n",y); 
  
  system("PAUSE");	
  return 0;
}
