//���� ������ ���� ����Ͽ��� ȭ�鿡 ����Ͽ�����.x�� ���� ����ڷκ��� �Է¹޴´�. 
#include <stdio.h>

int main(void)
{
    double x;         //int ���� ��������..  int ����ϸ� �������� ��µǼ�.. double ���ϴ�. 
    double y;
    
    printf("������ �Է��Ͻÿ�:");
    scanf("%lf",&x);
    
    y=((x*x*x)-20)/(x-7);
    
    printf("������ ���� %lf�Դϴ�.\n",y); 
  
  system("PAUSE");	
  return 0;
}
