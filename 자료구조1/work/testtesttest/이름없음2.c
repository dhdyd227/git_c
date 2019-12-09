#include<stdio.h>
#include<stdlib.h>

typedef int element;
typedef struct ListNode{ //노드타입 
	element data;
	struct ListNode *link;
}ListNode;

//오류처리함수
void error(char *message)
{
	fprintf(stderr,"%s\n",message);
	exit(1);
} 
 int count=1;

//마지막 노드삽입 
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
	p3=p2; //p3는 마지막 노드(NULL전) 
	
	p3->link=p;
	
	return head;
}

ListNode* delete_last(ListNode *head)
{
	ListNode *p,*p2,*p3;
	
	int count = 0; 
	for(p = head; p != NULL; p=p->link)
	p2=p; //삭제할 NULL전 마지막 노드 
	
	
	for(p = head; p != p2 ; p=p->link)
	{
	p3=p;// 연결할 p2 전 노드; 
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
