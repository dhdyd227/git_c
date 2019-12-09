#include <stdio.h>

int main(void)
{
	int i, j, sum;
	int x[3][5] =
	  { { 12, 56, 32, 16, 98 },
		{ 99, 56, 34, 41, 3 },
     	{ 65, 3, 87, 78, 21 } };

	for(i=0;i<3;i++){
		sum = 0;
		for(j=0;j<5;j++)
			sum += x[i][j];
		printf("%d행 합: %d\n",i+1,sum);
	}
	
	printf("\n");
	
	for(j=0;j<5;j++){
		sum = 0;
		for(i=0;i<3;i++)
			sum += x[i][j];
		printf("%d열 합: %d\n",j+1,sum);
	}
	system("pause");
	return 0;
}
