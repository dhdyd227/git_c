//세자리로 이루어진 숫자를 입력받은 후에 각각의 자릿수를 분리하고
//이 자릿수를 출력하는 프로그램을 작성하여좌보자 
#include <stdio.h>

int main(void)
{
    int x;
    
    printf("정수를 입력하시오:");
    scanf("%d",&x);
    
    printf("백의 자리수: %d\n",x/100); 
    printf("십의 자리수: %d\n",x%100/10); 
    printf("일의 자리수: %d\n",x%100%103/1); 
 

  system("PAUSE");	
  return 0;
}
