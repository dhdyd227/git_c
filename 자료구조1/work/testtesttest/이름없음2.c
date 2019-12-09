#include<stdio.h>
#include<stdlib.h>

typedef int element;
typedef struct ListNode{ //���Ÿ�� 
	element data;
	struct ListNode *link;
}ListNode;

//����ó���Լ�
void error(char *message)
{
	fprintf(stderr,"%s\n",message);
	exit(1);
} 
 int count=1;

//������ ������ 
ListNode* insert_last(ListNode *head,int value)
{
	ListNode *p=(ListNode *)malloc(sizeof(ListNode));

	if(count==1)
	{
		p->data = value;
		p->link=head;
		head=p;
		count=0;
		
		return head;
	}
	
	p->data = value;
	p->link=NULL;
	
	ListNode *p2,*p3;
	
	for(p2 = head; p2 != NULL; p2=p2->link)
	p3=p2; //p3�� ������ ���(NULL��) 
	
	p3->link=p;
	
	return head;
}

ListNode* delete_last(ListNode *head)
{
	ListNode *p,*p2,*p3;
	
	int count = 0; 
	for(p = head; p != NULL; p=p->link)
	p2=p; //������ NULL�� ������ ��� 
	
	
	for(p = head; p != p2 ; p=p->link)
	{
	p3=p;// ������ p2 �� ���; 
	count++;
	}
	
	if(count == 0)
	{
		head=p->link;
		free(p);
		return head;
	}
	
	p3->link =NULL;
	free(p2);
	
	return head;
}

void print_list(ListNode *head)
{
	ListNode *p;
	for(p = head; p != NULL; p=p->link)
	printf("%d->",p->data);
	
	printf("NULL\n");
}

int main(void)
{
	ListNode *head = NULL;
	
	int i;
	for(i=0;i<5;i++)
	{
		head= insert_last(head,i);
		print_list(head);
	}
	for(i=0;i<5;i++)
	{
		head= delete_last(head);
		print_list(head);
	}
	
	return 0;
}
