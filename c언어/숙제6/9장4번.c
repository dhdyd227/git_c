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
	
	printf("ISBN ��ȣ�� �Է��Ͻÿ�: ");
	
	for(0;i<13;i++)
		scanf("%d",&ISBN[i]);
		
	check(ISBN);
	
	if(check(ISBN)==1)
		printf("��ȿ�� ISBN ��ȣ�Դϴ�.\n");
	else
		printf("��ȿ���� ���� ISBN ��ȣ�Դϴ�.\n");
	system("PAUSE");
	return 0;
}
