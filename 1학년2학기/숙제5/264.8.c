#include <stdio.h>

void print_menu();
int get_menu_number(int n);

int main(void)
{
	int menu;
	
	while(1){
             
	print_menu();
	scanf("%d",&menu);
	
	if (get_menu_number(menu))
	switch(menu){
	case 1: 
         printf("1�� �޴� �ܹ��� ����.\n");   break;
	case 2:
         printf("2�� �޴� ġ����� ����.\n"); break;
	case 3:
         printf("3�� �޴� ������ġ ����.\n"); break;
         
	case 4: break; }
	
	else continue; 
    break;}
	system("PAUSE");
	return 0;
}

void print_menu()
{
	printf("1. �ܹ���\n2. ġ�����\n3. ��������\n4. ����\n���ϴ� �޴��� �����Ͻÿ�.");
	
}

int get_menu_number(int n)
{
	return (n<= 4)&&(n>= 1);
}



