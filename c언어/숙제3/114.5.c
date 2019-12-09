//사용자가 아스키 코드값을 입력하면 그 아스키 코드값에 해당하는 문자를 출력
//는프로그램을 작성하여보자.예를들어서 65를 입력하면'A'를 출력한다.
#include <stdio.h>


int main(void)
{
  
    char c;
  
    printf("아스키 코드값을 입력하시오:");
	scanf("%d",&c);
    
	printf("아스키 코드값에 해당하는 문자는 %c이다.\n",c);

  
  system("PAUSE");	
  return 0;
}
