#include <stdio.h>
void save(int amount);
int total;

int main(void)
{
	int n;
	while(1){
		printf("�󸶸� �����Ͻðڽ��ϱ�?(����� -1)  ");
		scanf("%d", &n);
		
        if(n==-1) {
        
		printf("����\n"); 
		break;}
		
		save(n);	
	}
	system("PAUSE");
	return 0;
}

void save(int amount)
{
	total += amount;
	printf("���ݱ��� ��������� %d�Դϴ�.\n", total);
}
