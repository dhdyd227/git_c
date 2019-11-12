//달의중력은 지구의 약 17%라고 한다.자신의 몸무게를 입력받아서 달에서의 몸무게를 계산하는 프로그램을 작성하여보자. 
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  double kg,moon; //몸무게
 
  
  printf("몸무게를 입력하시요:");
  scanf("%lf",&kg);
  
  moon=kg*16/70;
  
  printf("달에서의 몸무게는 %lfkg입니다.\n",moon); 
  
  system("PAUSE");	
  return 0;
}
