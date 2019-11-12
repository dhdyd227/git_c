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
         printf("1번 메뉴 햄버거 선택.\n");   break;
	case 2:
         printf("2번 메뉴 치즈버거 선택.\n"); break;
	case 3:
         printf("3번 메뉴 샌드위치 선택.\n"); break;
         
	case 4: break; }
	
	else continue; 
    break;}
	system("PAUSE");
	return 0;
}

void print_menu()
{
	printf("1. 햄버거\n2. 치즈버거\n3. 샌드위지\n4. 종료\n원하는 메뉴를 선택하시오.");
	
}

int get_menu_number(int n)
{
	return (n<= 4)&&(n>= 1);
}



