#include <stdio.h>

int main(void)
{
    int x=0,min=10001;
    
    while(1)
    {
            printf("�����͸� �Է��Ͻÿ�(������ �Է��ϸ� ����):"); 
            scanf("%d",&x);
            if(x<min && x>=0)
            {
                   min=x;
                   }
                   else if(x<0)
                   break;
                   }
                    
                   printf("�ּڰ��� %d�Դϴ�.\n",min); 
  
  system("PAUSE");	
  return 0;
}
