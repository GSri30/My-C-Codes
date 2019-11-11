#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node*link;
};

struct node*root=NULL;
struct node*pointer;
void insert()
{
	struct node*temp=(struct node*)calloc(1,sizeof(struct node));
	scanf("%d",&(temp->data));
	temp->link=NULL;

	if(root==NULL)
	{
		pointer=root=temp;
	}
	else
	{
		pointer->link=temp;
		pointer=temp;
	}
}
int find(int number)
{
	struct node*ptr=root;
	int i=1;
	int ans=0;
	while(ptr!=NULL)	
	{
		if(ptr->data==number)
		{
			ans=i;
		}
		ptr=ptr->link;
		i++;
	}
	return ans;
}

int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		insert();
	}
	int num,answer;
	scanf("%d",&num);
	answer=find(num);
	printf("%d",answer);
	
	return 0;
}
