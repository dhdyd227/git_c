//���� �����ڸ� �̿��Ͽ� ����ڷκ��� ���� �� ���� ���� �߿��� ���� ū ���� ����Ͽ亸��. 
#include <stdio.h>

int main(void)
{
    int x,y,z,max;
    
    printf("������ �Է��Ͻÿ�:");
    scanf("%d",&x); 
    printf("������ �Է��Ͻÿ�:");
    scanf("%d",&y); 
    printf("������ �Է��Ͻÿ�:");
    scanf("%d",&z); 
    
    max=(x>y&&x>z)?x:(y>z)?y:z;
    printf("���� ū ���� %d�Դϴ�.",max); 
  
  system("PAUSE");	
  return 0;
}
