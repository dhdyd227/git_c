//�ٷ� �ҵ漼�� ����ϴ� ���α׷��� �ۼ��Ͽ�����. �ٷ� �ҵ漼���� ���� ǥ�� ����. 
#include <stdio.h>

int main(void)
{
    int x,y;
    
    printf("���� ǥ���� �Է��Ͻÿ�(����):");
    scanf("%d",&x);
    
    if(x<=1000)
    {y=x*(0.08);
}
    else if(x<=4000)
    {y=x*(0.17);
}
    else if(x<=8000)
    {y=x*(0.26);
}
    else
   { y=x*(0.35);
}
    printf("�ҵ漼�� %d�����Դϴ�.\n",y); 
  
  system("PAUSE");	
  return 0;
}
