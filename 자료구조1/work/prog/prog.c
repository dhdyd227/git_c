//�ڷᱸ��1 �߰�����_5234069_�ǿ���
#include<stdio.h>
#include<stdlib.h>

int read_plain(char *s)
{
	FILE *fp_letter_in=NULL;
	
	fp_letter_in=fopen("input.dat","r");
	
	if(fp_letter_in ==NULL)
		printf("���Ͽ��� ����read_plain\n");
	else
		printf("���Ͽ��� ����read_plain\n");
	
	int ch;
	char *start;
	start=s;
	
	//int last = '.';
	while(1)
	{
		ch=getc(fp_letter_in);
		switch(ch)
		{
			//case '':
			case '\n':
			*s++=ch;
			
			default:
			//printf("%c",ch);
			*s++=ch;
				
		}
		if(ch =='.')break;
		
	}
	
	while(1)
	{
		printf("%c",*start);
		if(*start == '.') break;;
		
		start++;
	}	
	
	printf("\n\n");
	fclose(fp_letter_in);

}

//5234069_�ǿ��� 
int encypt_array(char *s)
{
	FILE *fp_letter_in=NULL;
	
	fp_letter_in=fopen("input.dat","r");
	
	if(fp_letter_in ==NULL)
		printf("���Ͽ��� ����encypt_array\n");
	else
		printf("���Ͽ��� ����encypt_array\n");
			
	int ch;
	char *start;
	start=s;
	
	//int last = '.';
	while(1)
	{
		ch=getc(fp_letter_in);
		switch(ch)
		{
			//case '':
			case '\n':
			//printf("%c",ch);
			//*s++=ch+3;
		
			case '.':
			*s++='.';
			
			case ' ':
			
			default:
			//printf("%c",ch);
			if('z'<(ch+1))
			*s++='a';
			
			else if('z'<(ch+2))
			*s++='a'+1;
			
			else if('z'<(ch+3))
			*s++='a'+2;
			
			else
			{
				if(*s==' ')
				*s++=' '; 
				else
				*s++=ch+3; 
			}
		}
		
		if(ch =='.')break;
			
	}
	//char end = '.'+3;
	
	while(1)
	{
		printf("%c",*start);
		if(*start == '.') break;;
		
		start++;
	}	
	
	printf("\n\n");

	s=start;
	
	fclose(fp_letter_in);
}

//stack 5234069_�ǿ���
 #define MAX_STACK_SIZE 100
 typedef char element;
 
 typedef struct 
 {
 	element data[MAX_STACK_SIZE];
    int top;
 }StackType;
 
 void init_stack(StackType *s)
 {
 	s->top =-1;
 }
 
 int is_empty(StackType *s)
 {
 	return(s->top==-1);
 }
 
 int is_full(StackType *s)
 {
 	return (s->top ==(MAX_STACK_SIZE-1));
 }
 
 void push(StackType *s,element item)
 {
 	if(is_full(s))
 	{
 		fprintf(stderr,"���� ��ȭ ����\n");
 		return;
	 }
	 else s->data[++(s->top)]=item;
 }
 
 element pop(StackType *s)
 {
 	if(is_empty(s))
 	{	 	
	 	fprintf(stderr,"���� ���� ����\n");
	 	exit(1);
 	}
 	else return s->data[(s->top)--];
}

element peek(StackType *s)
{
	if(is_empty(s)){
		fprintf(stderr,"���� ���鿡��\n");
		exit(1);
	}
	else return s->data[s->top];
	
}

revers_encypt_array(char *s)
{	
	printf("������\n");

	StackType s1,s2;
	
	init_stack(&s1);
	init_stack(&s2);
	int i=-1;
	char *start;
	
	start=s; 
	
	while(1)
	{
		i++;

		if(*s == '.') break;;
		push(&s1,*(start+i));

		s++;
	}
	
	char *test;
	
	s=start;
	int k=0;
	int k2=0,k3=0;
	
	for(k;k<i;k++)  
	{
		
		push(&s2,test=pop(&s1));
		k2++;
		//printf("%c\n",test);
		if(test == ' ')
		{
			pop(&s2);
			for(k3;k3<k2-1;k3++)
			{
			printf("%c",pop(&s2));
			}
			push(&s2,' ');
			printf("%c",pop(&s2));
			k2=0,k3=0;
		}
		else if(k==i-1)
		{
			for(k3;k3<k2-1;k3++)
			{
			printf("%c",pop(&s2));
			}
			printf("%c",pop(&s2));
			k2=0,k3=0;
		}
		
	}
		
}


 int main(void)
 {
 	char Plain_Array[BUFSIZ];
	 read_plain(Plain_Array);
	 encypt_array(Plain_Array);
	 revers_encypt_array(Plain_Array);
	 
	 return 0;
  } 
  
