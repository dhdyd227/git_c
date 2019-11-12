#include <stdio.h> 

void main(void) 
{ 
   int a, b, x, y, r;
   
   printf("첫번째 정수를 입력하시오: "); 
   scanf("%d", &a); 
   
   printf("두번째 정수를 입력하시오: "); 
   scanf("%d", &b); 
   
   x = (a > b) ? a : b; 
   y = (a < b) ? a : b; 
   while( y > 0 ) 
   { 
      r = x % y; 
      x = y; 
      y = r; 
   } 
   printf("최소공배수는 %d입니다.\n", a*b/x); 
   printf("최대공약수는 %d입니다.\n", x); 


  system("PAUSE");	
  return 0;
}
