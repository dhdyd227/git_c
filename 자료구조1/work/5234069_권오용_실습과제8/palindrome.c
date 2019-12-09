#include<stdio.h>
#include<stdlib.h>

#define MAX_STACK_SIZE 100 //������ �ִ�ũ��

typedef char element; //�������� �ڷ���
typedef struct{
	element data[MAX_STACK_SIZE];
	int top;
}StackType;

//���� �ʱ���� �Լ�
void init_stack(StackType *s)
{
	s->top = -1;
} 

//���� ���� ���� �Լ�
int is_empty(StackType *s)
{
	return (s->top == -1);
}

//��ȭ ���� ���� �Լ�
int is_full(StackType *s)
{
	return (s->top == (MAX_STACK_SIZE -1));
} 

//���� �Լ�
void push(StackType *s,element item)
{
	if(is_full(s))
	{
		fprintf(stderr,"���� ��ȭ ����\n");
		return;
	}
	else s->data[++(s->top)]=item;
} 

//���� �Լ�
element pop(StackType *s)
{
	if(is_empty(s))
	{
		fprintf(stderr,"���� ���� ����\n");
		exit(1);
	}
	else return s->data[(s->top)--];
}

//��ũ�Լ�
element peek(StackType *s)
{
	if(is_empty(s))
	{
		fprintf(stderr,"���� ���� ����\n");
		exit(-1);
	}
	else return s->data[s->top];
} 

int strcmp(char *a,char *b)
{
	int i;
	
	for(i=0;a[i]!='\0' || b[i] != '\0';i++)
	{
		if(a[i] != b[i] ) return 0;
	}
	return 1;
}
int main(void)
{
	FILE *fp_letter_in=NULL;
	
	fp_letter_in=fopen("words.dat","r");
	
	if(fp_letter_in == NULL)
	printf("���� ���� ����\n");
	else
	printf("���� ���� ����\n");
	
	StackType A;
	init_stack(&A);

	
	
	int number;
	int i=0;
	char name[512];
	
	
	char *start;
	fscanf(fp_letter_in,"%d\n",&number);
	
	printf("=====Palindrome inspectop=====\n");
	printf("The number of words = %d\n",number);
	
	int counter =0;
	
	char check[512];
	
	
	for(i=0;i<number;i++)
	{
		int k;
		fscanf(fp_letter_in,"%s\n",&name);
		
		printf("%s",name);
		
		while(1)
		{
		push(&A,name[counter]);
		counter++;
		
		if(name[counter] =='\0')
		break;
		}
		
		int check_number=0;

		for(counter;0<counter;counter--)
		{
			check[check_number++] = pop(&A);

		}	

		if(strcmp(name,check)==1)
		printf(": PASS\n");
		else
		printf(": FALE\n");


	}


	return 0;
}
