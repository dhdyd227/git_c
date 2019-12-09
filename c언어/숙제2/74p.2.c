//센티미터를 인치로 변환하는 피로그램을 작성하여보자.프로그램의 입력과 출력은 다음과 같다 
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    
float x,y;  //센치미터 

printf("센티미터를 입력하시오:");             
scanf("%f",&x);

y=x/2.54;
printf("%fcm는 %f인치입니다.\n",x,y);

  system("PAUSE");	
  return 0;

}
