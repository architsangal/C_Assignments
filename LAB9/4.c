#include<stdio.h>
#include<stdlib.h>

struct node
{
	int value;
	struct node *next;
};

void display(struct node *ptr)
{

    if(ptr==NULL)// if n=0
    {    
		printf("NULL\n");
		return;
	}

	//printing elements
	do
	{
		printf("%d-->",(*ptr).value);
		ptr=(*ptr).next;//updating the value of ptr
	}while ( ptr != NULL ); // last node's .next is "NULL"

    printf("NULL\n");
}

struct node * insert(struct node *ptr,int i)
{
	//i==0 this means that we can insert a new node 
 	//i!=0 means we want to finish the linked list inserting by storing at end NULL
	scanf("%d",&(*ptr).value);//inputing the value in ptr
	if(i==0) // allocating a new memory address
		(*ptr).next=(struct node*)(calloc(1,sizeof(struct node)));
	else // NULL is like a fullstop to linked list
		(*ptr).next=NULL;
	
	return (*ptr).next;// returns NULL or the address of newly allocated address.
}

// deletes the next node to the node whose address was passed to the function.
void delete_next(struct node* ptr)
{
	struct node *prev=ptr;
	ptr=(*ptr).next;//address of "next node".
	(*prev).next=(*ptr).next;// ".next" of "passed node" now stores the address of next to next node
	free(ptr);// freeing the "next node"
}

//freeing the allocated space in heap to linked list whose first node's address is being passed.
void freeing(struct node *ptr)
{
	//if n=0
	if(ptr==NULL)
	{
		return;
	}

	while((*ptr).next!=NULL)
	{
		struct node *ptr_next=(*ptr).next;
		free(ptr);
		ptr=ptr_next;
	}
	free(ptr);
}

int main(void)
{
	struct node *ptr = (struct node*)(calloc(1,sizeof(struct node)));
	
	//input that how many nodes should be there.
	int n;
	scanf("%d",&n);

	//as ptr is the address of first node of the linked list we store it in a variable "head".
	struct node *head=ptr;
	
	//end the program here only after freeing the allocated space and displaying the required output.
	if(n==0)
	{
		free(ptr);
		printf("NULL\nNULL\n");
		return 0;
	}

	//loop to insert the nodes and inputing values for them.
	for(int i=1;i<=n;i++)
	{
		if(i!=n)
			ptr=insert(ptr,0);
/*

"0" is for we want to add node and this is not the last node
we want to insert it returns the address of the next node which in turn updates the value of "ptr"

*/

		else
			ptr=insert(ptr,1);
/*

"1" if we donot want to add nodes any further so we put a fullstop to it
by putting "NULL" and it returns NULL

*/
	}

/*

it is a function to which we can pass address of any node 
and it will display or print all the values in linked list
after that node(including the node which is being passed).

*/
    display(head);	

	ptr=head;
	struct node *ptr_next;

/*
We are comparing and deleting node.
we are not deleting the first node but for the rest of node 
we are implementing the policy of "check and delete"
*/
	for(int i=2;i<=n;i++)
	{
		ptr_next=(*ptr).next;
		if(((*ptr_next).value)%2 != 0)
			delete_next(ptr);
		else
			ptr=(*ptr).next;		
	}

/*
we were not checking first node for deletion as one additon step has to take place
i.e. to change the value of head if deletion takes place.
*/
	if((*head).value%2!=0)
		head=(*head).next;

	display(head);

	freeing(head);

	return 0;
}