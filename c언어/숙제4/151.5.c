//조건 연산자를 이용하여 사용자로부터 받은 세 개의 정수 중에서 가장 큰 수를 출력하요보자. 
#include <stdio.h>

int main(void)
{
    int x,y,z,max;
    
    printf("정수를 입력하시오:");
    scanf("%d",&x); 
    printf("정수를 입력하시오:");
    scanf("%d",&y); 
    printf("정수를 입력하시오:");
    scanf("%d",&z); 
    
    max=(x>y&&x>z)?x:(y>z)?y:z;
    printf("가장 큰 수는 %d입니다.",max); 
  
  system("PAUSE");	
  return 0;
}
