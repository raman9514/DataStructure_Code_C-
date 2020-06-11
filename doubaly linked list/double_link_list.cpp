#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *left,*right;
}*root=NULL;

void insert()
{ 
  struct node *temp;
  temp=(struct node*)malloc(sizeof(struct node));
  printf("Enter Data  : ");
  scanf("%d",&temp->data);
  temp->left=NULL;
  temp->right=NULL;
  
  if(root==NULL)
   {    root=temp;
   		return;}
  else{
      struct node *p;
	  p=root;
	  
	  while(p->right!=NULL){
	     p=p->right; } 
	    
	      p->right=temp;
		  temp->left=p;	
		
		}  
}

void print()
{
	struct node *temp;
	temp=root;
	printf("data :%d \n",temp->data);
	while(temp->right!=NULL)
	 { temp=temp->right;
	  printf("data :%d \n",temp->data);
	 }
getch();}

int main()
{   
   insert();
   insert();
   insert();
   print();
	
	
return 0;}
