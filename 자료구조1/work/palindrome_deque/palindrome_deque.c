#include<stdio.h>
#include<stdlib.h>

#define MAX_QUEUE_SIZE 6
typedef char element;
typedef struct{
	element data[MAX_QUEUE_SIZE];
	int front,rear;
}DequeType;

//���� �Լ�
void error(char *message)
{
	fprintf(stderr,"%s\n",message);
}

//�ʱ�ȭ
void init_deque(DequeType *q)
{
	q->front = q->rear =0;
 } 
 
//���� ���� ���� �Լ�
int is_empty(DequeType *q)
{
	return (q->front == q->rear);
} 
 
//��ȭ���� ���� �Լ�
int is_full(DequeType *q)
{
	return ((q->rear +1) % MAX_QUEUE_SIZE == q->front);
}
 
 //����ť ����Լ�
void deque_print(DequeType *q)
{
 	//printf("DEQUE(front=%d rear=%d) = ",q->front,q->rear);
 	if(!is_empty(q)){
 		int i = q->front;
 		do{
 			i = (i+1)%(MAX_QUEUE_SIZE);
 			//printf("%c | ",q->data[i]);
 			if(i == q->rear)
 			break;
 		}while(i != q->front);
	}
} 
 
//���� �Լ�
void add_rear(DequeType *q, element item)
{
	if(is_full(q))
	error("ť�� ��ȭ�����Դϴ�");
	q->rear = (q->rear +1)%MAX_QUEUE_SIZE;
	q->data[q->rear]=item;
}

//�����Լ�
element delete_front(DequeType *q)
{
	if(is_empty(q))
	error("ť�� ��������Դϴ�.");
	q->front = (q->front+1) % MAX_QUEUE_SIZE;
	return q->data[q->front];	
} 

//�����Լ�
element get_front(DequeType *q)
{
	if(is_empty(q))
	error("ť�� ��������Դϴ�.");
	return q->data[(q->front+1)%MAX_QUEUE_SIZE];
} 

//���� �Լ�
void add_front(DequeType *q, element val)
{
	if(is_full(q))
	error("ť�� ��ȭ�����Դϴ�");
	q->data[q->front]=val;
	q->front = (q->front -1 + MAX_QUEUE_SIZE)%MAX_QUEUE_SIZE;
}

//�����Լ�
element delete_rear(DequeType *q)
{
	int prev=q->rear;
	if(is_empty(q))
	error("ť�� ��������Դϴ�");
	q->rear = (q->rear -1 + MAX_QUEUE_SIZE)%MAX_QUEUE_SIZE;
	return q->data[prev];
} 

element get_rear(DequeType *q)
{
	if(is_empty(q))
	error("ť�� ��������Դϴ�");
	return q->data[q->rear];
}

int main(void)
{
	FILE *fp_letter_in=NULL;
	
	fp_letter_in=fopen("words.dat","r");
	
	if(fp_letter_in == NULL)
	printf("���� ���� ����\n");
	else
	printf("���� ���� ����\n");

	DequeType queue;
	
	init_deque(&queue);
	
	int number;
	fscanf(fp_letter_in,"%d\n",&number);
	printf("�ܾ� �� : %d\n",number);
	char name[512];
	int counter =0;

	int i=0;
	int check;
	for(i;i<number;i++)
	{
		fscanf(fp_letter_in,"%s\n",&name);
		printf("(%s)\n",name);
		while(1)
		{	
			add_front(&queue,name[counter]);
			counter++;
			deque_print(&queue);

			if(name[counter] =='\0')
			{
				int k;
				for(k=0;k<counter/2;k++)
				{
					if(delete_front(&queue)==delete_rear(&queue))
					{
						check=1;
					}
					else
					{
						check=0;
					}
				}
				
			

			counter=0;
			if(check==1)
				printf("->PASS\n");
			else
				printf("->FAIL\n");
				
			init_deque(&queue);
			break;
			}
			
		}
		
		
	}
	
	return 0;	
}
