#include <stdio.h>
#include <stdlib.h>

int check(int *p)
{
	int i=0,result=0;
	
	for(0;i<13;i+=2)
		result+=*(p+i);
	for(i=1;i<13;i+=2)
		result+=3*(*(p+i));
		
	if(result%10==0)
		return 1;
	else return 0;
}
int main(void)
{
	int i=0,ISBN[13]={0};
	
	printf("ISBN 번호를 입력하시오: ");
	
	for(0;i<13;i++)
		scanf("%d",&ISBN[i]);
		
	check(ISBN);
	
	if(check(ISBN)==1)
		printf("유효한 ISBN 번호입니다.\n");
	else
		printf("유효하지 않은 ISBN 번호입니다.\n");
	system("PAUSE");
	return 0;
}
