#include <stdio.h>
#include <stdlib.h>

void light(int *p);
int main(void)
{
	int i,count=0;
	int image[100]=
	{
		0,0,0,0,9,0,0,0,0,0,
		0,0,0,9,9,0,0,0,0,0,
		0,0,9,0,9,0,0,0,0,0,
		0,0,0,0,8,0,0,0,0,0,
		0,0,0,0,9,0,0,0,0,0,
		0,0,0,0,7,0,0,0,0,0,
		0,0,0,0,8,0,0,0,0,0,
		0,0,0,0,9,0,0,0,0,0,
		0,0,0,0,9,0,0,0,0,0,
		0,0,6,6,9,7,7,0,0,0
	};
	
	light(image);
	for(i=0;i<100;i++)
	{
		printf("%d ",image[i]);
		if(i==9||i==19||i==29||i==39||i==49||i==59||i==69||i==79||i==89||i==99)
			printf("\n");
	}
	system("pause");
	return 0;
}
void light(int *p)
{
	int i;
	for(i=0;i<100;i++)
		if(0<*(p+i))
			(*(p+i))--;

}
