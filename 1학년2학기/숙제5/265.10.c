#include <stdio.h>
void save(int amount);
int total;

int main(void)
{
	int n;
	while(1){
		printf("얼마를 저축하시겠습니까?(종료는 -1)  ");
		scanf("%d", &n);
		
        if(n==-1) {
        
		printf("종료\n"); 
		break;}
		
		save(n);	
	}
	system("PAUSE");
	return 0;
}

void save(int amount)
{
	total += amount;
	printf("지금까지 총저축액은 %d입니다.\n", total);
}
