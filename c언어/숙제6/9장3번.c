#include <stdio.h> 

void main(void) 
{ 
   int a, b, x, y, r;
   
   printf("ù��° ������ �Է��Ͻÿ�: "); 
   scanf("%d", &a); 
   
   printf("�ι�° ������ �Է��Ͻÿ�: "); 
   scanf("%d", &b); 
   
   x = (a > b) ? a : b; 
   y = (a < b) ? a : b; 
   while( y > 0 ) 
   { 
      r = x % y; 
      x = y; 
      y = r; 
   } 
   printf("�ּҰ������ %d�Դϴ�.\n", a*b/x); 
   printf("�ִ������� %d�Դϴ�.\n", x); 


  system("PAUSE");	
  return 0;
}
