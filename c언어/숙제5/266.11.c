#include <stdio.h>

void show_digit(int x);
int main(void)
{
    int n;
    printf("���ڸ� �Է��Ͻÿ�:");
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
