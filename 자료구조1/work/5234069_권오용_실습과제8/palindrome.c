#include<stdio.h>
#include<stdlib.h>

#define MAX_STACK_SIZE 100 //스택의 최대크기

typedef char element; //데이터의 자료형
typedef struct{
	element data[MAX_STACK_SIZE];
	int top;
}StackType;

//스택 초기ㅗ하 함수
void init_stack(StackType *s)
{
	s->top = -1;
} 

//공백 상태 검출 함수
int is_empty(StackType *s)
{
	return (s->top == -1);
}

//포화 상태 검출 함수
int is_full(StackType *s)
{
	return (s->top == (MAX_STACK_SIZE -1));
} 

//삽입 함수
void push(StackType *s,element item)
{
	if(is_full(s))
	{
		fprintf(stderr,"스택 포화 에러\n");
		return;
	}
	else s->data[++(s->top)]=item;
} 

//삭제 함수
element pop(StackType *s)
{
	if(is_empty(s))
	{
		fprintf(stderr,"스택 공백 에러\n");
		exit(1);
	}
	else return s->data[(s->top)--];
}

//피크함수
element peek(StackType *s)
{
	if(is_empty(s))
	{
		fprintf(stderr,"스택 공백 에러\n");
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
	printf("파일 열기 실패\n");
	else
	printf("파일 열기 성공\n");
	
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
