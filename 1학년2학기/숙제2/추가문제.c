//1. �Է°����� �й�, ����, ����, ���� ������ �Է� �ް� �й�, ����, ����, ����, ����, ��� �� ����ϴ� ���α׷��� �ۼ��Ѵ�
#include <stdio.h>
int main(void)
{
    int s; //�й��� �Է��Ͻÿ�.
    int k; //���������� �Է��Ͻÿ�. 
    int e; //���������� �Է��Ͻÿ�.
    int m; //���������� �Է��Ͻÿ�.
    int total; //����
    double avg;   //��� 
 
 printf("�й��� �Է��Ͻÿ�:",s);
 scanf("%s",&s);
 
 printf("��������:",k);
 scanf("%d",&k);
 
 printf("��������:",e);
 scanf("%d",&e);
 
 printf("��������:",m);
 scanf("%d",&m);
 
 total=k+e+m;
 avg=total/3;
 printf("����:%d\n",total) ;
 printf("���:%lf\n",avg);
 
  system("PAUSE");	
  return 0;
}
