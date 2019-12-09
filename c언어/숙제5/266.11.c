#include <stdio.h>

void show_digit(int x);
int main(void)
{
    int n;
    printf("숫자를 입력하시오:");
    scanf("%d",&n);
    
     
	show_digit(n);
	
	system("PAUSE");
	return 0;
}
void show_digit(int x)
{
	if( x > 0 ) 
	{
	show_digit(x/10);	
	printf("%d ",x%10);		
}
}
