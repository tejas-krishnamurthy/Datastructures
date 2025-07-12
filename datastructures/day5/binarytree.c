//To demonstrate the binary tree data structure



#include<stdio.h>

#include<stdlib.h>


struct node

{

	struct node* left;

	int data;

	struct node* right;
};

struct node* root,*parent,*child;

void create (struct node** dp,int num)

{


	if(*dp==NULL)

	{

		(*dp) = (struct node*)malloc(sizeof(struct node));

		if((*dp) ==NULL)

		{
			printf("\n Node creation failed\n");

			return ;

		}

		(*dp)-> data = num;

		(*dp)->left =NULL;

		(*dp)->right =NULL;

	}

	else

	{

		if((*dp)->data>num)

			create(&(*dp)->left,num);

		else

			create(&(*dp)->right,num);

	}

}
void inorder(struct node* sp)
{

	if(sp !=NULL)
	{

		inorder(sp->left);

		printf("%d\n",sp->data);

		inorder(sp->right);

	}
}

void preorder(struct node* sp)

{

	if(sp !=NULL)

	{

		printf("%d\n",sp->data);

		preorder(sp->left);

		preorder(sp->right);

	}
}

void postorder(struct node* sp)

{

	if(sp!=NULL)

	{

		postorder(sp->left);

		postorder(sp->right);

		printf("%d\n",sp->data);

	}
}
void delete(struct node* sp)
{

	if(sp ==NULL)

	{

		printf("\n!!  No Nodes Created !! \n");

		return;

	}

	int key = 0;

	printf("\nEnter thye Data to Deloete :\n");

	scanf("%d",&key);

	while(sp && sp->data !=	key)
	{
		parent =sp;

		if(sp->data >key)

			sp = sp->left;

		else

			sp = sp->right;	

	}

	if(sp ==NULL)

	{
		printf("\n !! Key Not found !!\n");

		return ;
	}

	if(sp->left ==NULL && sp->right ==NULL)
	{
		if(sp == root)
		{	
			free(sp);

			root = NULL;

			return ;
	
		}

		if(sp == parent->right)

			parent->right =NULL;
		else
			parent->left =NULL;

		free(sp);

		return ;
	}

	if(sp->left ==NULL && sp->right !=NULL)

	{	

		if(sp == parent->left)

			parent->left = sp->right;

		else

			parent->right = sp->right;	

		free(sp);

		return;
	}
	if(sp->left !=NULL && sp->right==NULL)
	{
		if(sp ==parent->right)
			parent->right = sp->left;
		else
			parent->left= sp->left;

		free(sp);

		return;

	}
	if(sp->left != NULL && sp->right !=NULL)
	{
		parent = sp;

		child = sp->right;

		while(child->left !=NULL)
		{

			parent =child;

			child = child->left;

		}

		sp->data = child->data;

		sp = child;

	if(sp->left ==NULL && sp->right ==NULL)
	{
		if(sp == parent->right)

			parent->right =NULL;
		else
			parent->left =NULL;

		free(sp);

		return ;

	}

	if(sp->left ==NULL && sp->right !=NULL)
	{	

		if(sp == parent->left)
			parent->left = sp->right;

		else

			parent->right = sp->right;	
		free(sp);

		return;
	}
		return;

	}


}
int depth(struct node* sp)

{
	int ldepth = 0,rdepth = 0;

	if(sp->left !=NULL)
	{
		ldepth = depth(sp->left);
		ldepth++;
	
	}
	if(sp->right !=NULL)
	{
		rdepth = depth(sp->right);
		rdepth++;
	
	}
	if(rdepth>ldepth)
	{
		return rdepth;
	}
	else
	{
		return ldepth;
	}

}

int main()

{

	int ch = 0 , data = 0,max_depth= 0;

	while(1)

	{
		printf("\n\n0. Exit\n1. Create\n2. Inorder\n3. Pre Order\n4. Post order\n5. Delete\n6. Depth\n\n");

		printf("\nEnter your Choice :\n");

		scanf("%d",&ch);

		switch(ch)

		{
			case 0:exit(0);

			case 1:printf("\nEnter the data\n");

			       scanf("%d",&data);

			       create(&root,data);

			       break;

			case 2:inorder(root);

			       break;

			case 3:preorder(root);

			       break;
			case 4:postorder(root);

			       break;
			case 5:delete(root);

			       break;
			case 6:max_depth = depth(root);
				printf("\n Depth is ***%d***\n",max_depth);
			       break;

			default:printf("\n Invalid Options \n\n Valid options are :");

		}
	}
	return 0;
}
