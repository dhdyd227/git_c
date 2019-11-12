//사용자로부터 세 개의 정수를 입력받은 후, 평균값을 계산하여 화면에 출력하는 프로그램을 작성하여보자.

#include <stdio.h>

int main(void)
{
int x;
int y;
int z;
int avg;

printf("정수를 입력하시오:");             
scanf("%d",&x);

printf("정수를 입력하시오:");
scanf("%d",&y);

printf("정수를 입력하시오:");
scanf("%d",&z);
avg=(x+y+z)/3;
printf("평균은 %d입니다.\n",avg);


  system("PAUSE");	
  return 0;
}
