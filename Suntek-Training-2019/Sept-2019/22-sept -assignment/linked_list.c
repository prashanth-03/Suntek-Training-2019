#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node *next;
};
struct Node* create(struct Node *h)
{
	struct Node *h1=h;
	struct Node* node=(struct Node*)malloc(sizeof(struct Node));
	scanf("%d",&node->data);
	node->next=NULL;
	while(h->next!=NULL)
	{
		h=h->next;
	}
	h->next=node;
	return(h1);
}
int lastn(struct Node *h,int n)
{
	if(n==0)
	{
	  printf("error");
	  exit(0);
	}
	while(n-1>0)
	{
		h=h->next;
		n--;
	}
	return(h->data);
}
void main()
{
	int n,l,i;
	struct Node* head=(struct Node*)malloc(sizeof(struct Node));
	struct Node *temp=head;
	printf("enter number of nodes:");
	scanf("%d",&n);
	printf("enter data into the nodes:");
	scanf("%d",&head->data);
	head->next=NULL;
	for(i=1;i<=n-1;i++)
	{ 	
		head=create(head);
	}
	printf("enter node position from the last:");
	scanf("%d",&l);
	printf("data at %d node from last is %d\n",l,lastn(head,n-l+1));
}
