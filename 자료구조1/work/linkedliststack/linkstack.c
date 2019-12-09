#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

#define MAX_STACK_SIZE 100 //������ �ִ�ũ��

typedef char element; //�������� �ڷ���
typedef struct StackNode{
	element data;
	struct StackNode *link;
}StackNode;

typedef struct{
	StackNode *top;
}LinkedStackType;

//���� �ʱ���� �Լ�
void init(LinkedStackType *s)
{
	s->top = NULL;
} 

//���� ���� ���� �Լ�
int is_empty(LinkedStackType *s)
{
	return (s->top == NULL);
}

//��ȭ ���� ���� �Լ�
int is_full(LinkedStackType *s)
{
	return 0;
} 

//���� �Լ�
void push(LinkedStackType *s,element item)
{
	StackNode *temp = (StackNode *)malloc(sizeof(StackNode));

	temp->data= item;
	temp->link = s->top;
	s->top=temp;
	
} 

///��� 
void print_stack(LinkedStackType *s)
{
	StackNode *p = s->top;
	
	for(p ; p != NULL; p = p->link)
	{
	printf("%c ->",p->data);
	}

	printf("NULL\n");
}

//���� �Լ�
element pop(LinkedStackType *s)
{
	if(is_empty(s))
	{
		fprintf(stderr,"���� ���� ����\n");
		exit(1);
	}
	else
	{
		StackNode *temp = s->top;
		element data = temp->data;
		s->top = s->top->link;
		free(temp);
		return data;
	}
}

//��ũ�Լ�
element peek(LinkedStackType *s)
{
	if(is_empty(s))
	{
		fprintf(stderr,"���� ���� ����\n");
		exit(-1);
	}
	else return s->top->data;
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
	
	LinkedStackType s;
	init(&s);

	int number;
	int i=0;
	
	char name[MAX_STACK_SIZE];
	
	fscanf(fp_letter_in,"%d\n",&number);
	
	printf("=====Palindrome inspectop=====\n");
	printf("The number of words = %d\n",number);
	
	int counter =0;
	
	char check[512];
	
	
	for(i=0;i<number;i++)
	{
		fscanf(fp_letter_in,"%s\n",&name);
		
		while(1)
		{
		push(&s,name[counter]);
		counter++;
		print_stack(&s);

			if(name[counter] =='\0')
			break;
		}
		
		
		
		int check_number=0;

		for(counter;0<counter;counter--)
		{
			check[check_number++] = pop(&s);
			print_stack(&s);
		}	

		if(strcmp(name,check)==1)
		printf(": PASS\n");
		else
		printf(": FALE\n");


	}


	return 0;
}
