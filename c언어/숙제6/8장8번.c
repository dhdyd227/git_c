#include <stdio.h>

void X();
int n,m,i,x[10]={0};
int main(void)
{
    
	while(1)
	{
		printf("�¼��� �����Ͻðڽ��ϱ�?(1 �Ǵ�0 ) ");
		scanf("%d",&n);
		
		if(n==1)
		{
		printf("������ ���� ���´� ������ �����ϴ�.\n");
		X();
		
		printf("�� ��° �¼��� �����Ͻðڽ��ϱ�? :");
		scanf("%d",&m);
		
		x[m-1]++;
		if(x[m-1]==2)
		{
            x[m-1]--;
			printf("�̹� ����Ǿ��ֽ��ϴ�.\n");
			continue;
		}
		printf("����Ǿ����ϴ�.\n");
		X();
		}
		else if(n==0)
		{
			printf("����\n");
			break;
		}
		else
			printf("1 �Ǵ� 0 �� ����\n");
	}
	system("pause");
	return 0;
}
void X()
{
	printf("---------------------------------\n");
	printf("1 2 3 4 5 6 7 8 9 10\n");
	printf("---------------------------------\n");
	for(i=0;i<10;i++)
		printf("%d ",x[i]);
	printf("\n");
}
