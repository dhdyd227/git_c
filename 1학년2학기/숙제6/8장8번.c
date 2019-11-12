#include <stdio.h>

void X();
int n,m,i,x[10]={0};
int main(void)
{
    
	while(1)
	{
		printf("좌석을 예약하시겠습니까?(1 또는0 ) ");
		scanf("%d",&n);
		
		if(n==1)
		{
		printf("현재의 예약 상태는 다음과 같습니다.\n");
		X();
		
		printf("몇 번째 좌석을 예약하시겠습니까? :");
		scanf("%d",&m);
		
		x[m-1]++;
		if(x[m-1]==2)
		{
            x[m-1]--;
			printf("이미 예약되어있습니다.\n");
			continue;
		}
		printf("에약되었습니다.\n");
		X();
		}
		else if(n==0)
		{
			printf("종료\n");
			break;
		}
		else
			printf("1 또는 0 을 선택\n");
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
