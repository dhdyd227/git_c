#include <stdio.h>

int main(void)
{
    int x,y,i;
    
    printf("*************\n");
    printf("1---Add\n");
	printf("2---Subtract\n");
	printf("3---Multiply\n");
	printf("4---Divide\n");
	printf("5---Quit\n");
	printf("*************\n");
	
	do{   
                     
	printf("������ �����Ͻÿ�: ");
	scanf("%d",&i);
	
	if(i>0 && i<5) {
	printf("�� ���� �������� �и��Ͽ� �Է��Ͻÿ�:");
	scanf("%d%d",&x,&y);}

	switch (i)
	{
	case 1:
         printf("%d\n",x+y);break;
	case 2:
         printf("%d\n",x-y);break;
	case 3:
         printf("%d\n",x*y);break;
	case 4:
         printf("%d\n",x/y);break;
    case 5: break; 
  }
	}
  
  system("PAUSE");	
  return 0;
}
