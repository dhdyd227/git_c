#include <stdio.h>
#include <time.h>

int main(void)
{
    
	int i;
    int x[6]={0};
	srand(time(NULL));
	
	for(i=0;i<60000;i++)
		x[rand()%6]++;
	printf("주사위면        빈도\n");
	
	for(i=0;i<6;i++)
		printf("   %d		%d\n",i+1,x[i]);
  
  system("PAUSE");	
  return 0;
}
