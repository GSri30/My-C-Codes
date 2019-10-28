//Write a (C) program to input integers and create a linked listof the integers.  Since this is a linked list where memory needs to beallocated dynamically the count of integers is not needed in the beginning.First, Walk the list and print the integers in the linked list.Next, delete all the odd valued integers.  Print the new list (remember itmay end up being a NULL list).NOTE: You need to create a node structure which has atleast two fields :one to store the integer value, another as a pointer to a neighboring nodethat contains the next integer and so on.  The last node points to a NULLpointer indicating end of the list.
//Sample Input:51 3 6 7 8
//Sample Output:1−−>3−−>6−−>7−−>8−−>NULL
//              6−−>8−−>NULL
//Note:There is no space between the numbers, the hyphens and theequality symbol.


#include<stdio.h>
#include<stdlib.h>

//define a data type called node,which contains two parts, data field and link field
struct node
{
	int data;
	struct node*link;
};

//declare a pointer named pointer globally which is used to iterate through each node
struct node*pointer;
//declare a root pointer globally  which stores the address of the first node
struct node*root=NULL;

//define an insert function which is used to insert a new node
void insert()
{
	//declare a temp pointer pointing towards a node
	//dynamically allocate memory to store the data and link in the node
	struct node*temp=(struct node*)calloc(1,sizeof(struct node));
	//take the input of the data (int in this case)
	scanf("%d",&temp->data);
	//and assign a null value in the link field as it is not pointing towards any other node
	temp->link=NULL;
	//check if the root pointer is pointing to some node or not
	//if it's not pointing any node, then make it to point towards temp
	//also make use of 'pointer' pointer which is used to iterate through each node (in case of more than two nodes)
	if(root==NULL)
	{
		pointer=root=temp;
	}
	//else root is pointing to some node, then use 'pointer' pointer (which points the last node) and make it to point to temp and store the temp address in the node (in link part) pointed by 'pointer'
	else
	{
		pointer->link=temp;
		pointer=temp;
	}
}

//define a remove function used to remove a node based upon it's location
void remove_node(int loc)
{
	//define a temp pointer used to iterate over each node
	struct node*temp;
	//if the node to be removed is first node, then make the temp pointer to point towards the root and store the link part of that node in the root and make it to null
	//finally free the temp pointer
	if(loc==1)
	{
		temp=root;
		root=temp->link;
		temp->link=NULL;
		free(temp);
	}
	//else use a pointer p to point to the node before the removing node and a pointer q pointing to the removing node and then follow the same above procedure(if the removing node is the first node) 
	else
	{
		struct node*p=root,*q;
		int i=1;
		while(i<loc-1)
		{
			p=p->link;
			i++;
		}
		q=p->link;
		p->link=q->link;
		q->link=NULL;
		free(q);
	}
}

int main()
{
	//take the input of number of elements to be taken as input
	int n;
	scanf("%d",&n);
	//declare a count variable to store the location of the node to be removed
	int count=1;

	//to take the input of elements and print them
	
	//take the input of the elemets
	for(int i=0;i<n;i++)
	{
		insert();
	}
	//reset the 'pointer' pointer to root
	pointer=root;
	//now use this pointer to iterate over each element and print it's value
	while(pointer!=NULL)
	{
		printf("%d-->",pointer->data);
		pointer=pointer->link;
	}
	printf("NULL\n");

	//to remove the nodes having odd integers (in data field)

	//declare a ptr pointer and make it to point to the root
	struct node*ptr=root;
	//now iterate over each element and check whether its even integer or odd integer
	//if its odd integer, store its location(using count variable) and call the remove_node function to remove it
	while(ptr!=NULL)
	{
		if((ptr->data)%2!=0)
		{
			ptr=ptr->link;
			remove_node(count);
			count-=1;		
		}
		else
		{
			ptr=ptr->link;
		}
		count++;	
	}
	//now print the elements
	pointer=root;
        while(pointer!=NULL)
        {
                printf("%d-->",pointer->data);
                pointer=pointer->link;
        }
        printf("NULL");

	return 0;
}

