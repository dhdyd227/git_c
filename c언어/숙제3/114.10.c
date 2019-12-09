//사용자로부터 하나의 실수를 입력받아서 소수점 표기 방법과 지수 표기 방법으로
//출력하는 프로그램을 작성하여보자. 
//즉, 사용자가 3.14를 입력하면 3.140000,3.14e0와 같은 식으로 출력한다. 
#include <stdio.h>


int main(void)
{
  float x;
  
  printf("실수를 입력하시오.:");
  scanf("%f",&x); 
  
  printf("소수6개로 표현:%1.6f\n",x);
  printf("지수로 표현:%1.2e\n",x);
   
  
  system("PAUSE");	
  return 0;
}
