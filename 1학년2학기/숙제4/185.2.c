//근로 소득세를 계산하는 프로그램을 작성하여보자. 근로 소득세율은 다음 표와 같다. 
#include <stdio.h>

int main(void)
{
    int x,y;
    
    printf("과세 표준을 입력하시오(만원):");
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
    printf("소득세는 %d만원입니다.\n",y); 
  
  system("PAUSE");	
  return 0;
}
