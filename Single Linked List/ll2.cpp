#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<strings.h>
using namespace std;

struct node
{
	int data;
	struct node* link;
	
};
struct node *root;

	 
int length()
{
	struct node *temp;
	
	int a=1;
	temp=root;
	while(temp->link!=NULL)
	{
		a++;
		temp=temp->link;
	}
	return a;
	
 } 

void start()
{   int data;
	//struct node *temp;
	root=(struct node*)malloc(sizeof(struct node));
	
	cout<<"Enter Data : ";
	cin>>data;
	root->data=data;
	root->link=NULL;
	cout<<"Note Insertion Successfully \n";
	getch();
	
	}

void append()
{ struct node *temp;
   temp=root;
   int data;
   
   if(root==NULL)
    { cout<<"Unable to Allocate MM \n";
	}
	else
	{
		struct node *p=(struct node*)malloc(sizeof(struct node));
		cout<<"Enter Data ";
		cin>>data;
		p->data=data;
		p->link=NULL;
		while(temp->link!=NULL)
		 {  temp=temp->link;
		   }
		temp->link=p;
		   
	}
	
cout<<"Note Insertion Successfully \n";
	getch();	
	}	
	

void print()
	{ 
		struct node *p;
		p=root;
		int i=0;
		cout<<"+-------------------------+\n";
		while(p!=NULL)
		{ i++;
		  cout<<"\n Data "<<i<<" "<<p->data;
		  p=p->link;
		}
		cout<<"\n+-------------------------+\n";
		cout<<"Total Node : "<<length()<<"\n";
		cout<<"+-------------------------+\n";
	cout<<"\n\n Printed Successfully\n";
	getch();
		
	}
	
void  i_start()
{  struct node *temp;
    temp=root;
    int data;
    struct node  *p=(struct node*)malloc(sizeof(struct node));
	cout<<"\nEnter Data : ";
	cin>>data;
	p->data=data;
	p->link=NULL;
	root=p;
	p->link=temp;
cout<<"Note Insertion Successfully \n";
	getch();	 
 	}	
 	
 	void i_mid()
 	{    int data,pos,i=1;
 		struct node *temp,*temp2;
 		struct node *p=(struct node*)malloc(sizeof(struct node));
 		
		cout<<"\nEnter the Position : ";
		cin>>pos;
		cout<<"\nEnter data";
 		cin>>data;
 		p->data=data;
 		p->link=NULL;
 		temp=root;
 		
		 while(i!=pos)
 		{ temp=temp->link;
		 cout<<temp->data;
		 i++;
		 }
 		 
	   temp2=temp;               //remember alwaya connect right process then left;
	   temp2=temp2->link;
	   p->link=temp2;
	   temp->link=p;
		  	cout<<"Note Insertion Successfully \n";
	getch();
	 }

void d_last()
{  struct node *temp,*temp2;
  int i=2;            //use i=2 so that loot will run ont less then lenth of Linkd list ;
  temp=root;
  while(i!=length())
   { temp=temp->link;
     i++;
   }
   
   temp2=temp;
   temp2=temp2->link;
   temp->link=NULL;
   free(temp2);
  cout<<"Note Deleted Successfully \n";
	getch();
	 }	 

/* DELETE THE FIRST NODE */
void d_start()
{   struct node *temp;
  if(root==NULL)
     cout<<"\nLIST IS EMPTY\n";
   
  temp=root;
  root=root->link;
  temp->link=NULL;
  free(temp);
 cout<<"Note Deleted Successfully \n";
	getch();

	 }	 
	 
void d_mid()
{ struct node *temp,*temp2,*temp3;
  temp=root;
   int pos,i=2;
   cout<<"\nEnter The Position To Be Deleted : ";
   cin>>pos;
   while(i!=pos)
   { temp=temp->link;
     i++;  }
     
   temp2=temp;
   temp2=temp2->link;
   temp3=temp2;
   temp3=temp3->link;
  
   temp2->link=NULL;   
   temp->link=temp3;
   
   free(temp2);
   
 cout<<"Note Deleted Successfully \n";
	getch();

	 }	 
	 
	 
 	

int main()
{ int b;
  cout<<"You have to Create Linked List To Process :\n";
   start();
  
  menu:
  	system("cls");
  cout<<"\n1. Append\n2. Insert At First Position \n3. Insert At Middle";
  cout<<"\n4. Delete \n5. Delete First \n6. Deleter From Middle\n7. Print\n8. Exit ";
  cout<<"\nEnter Choice : ";
  cin>>b;
  system("cls");
  switch(b){
  
  case 1:
  	 {   append();
      goto menu;
	  break;   }
  case 2:
  	 {i_start();
      goto menu;
	  break;   }
  case 3:
  	 {i_mid();
      goto menu;
	  break;   }
  case 4:
  	 {d_start();
      goto menu;
	  break;   }
  case 5:
  	 {d_last();
      goto menu;
	  break;   }
  case 6:
  	 {d_mid();
      goto menu;
	  break;   }
case 7:
  	 { print();
	  goto menu;
	  break;   }
case 8:{
    return 0;	
	break;
}	  
  	   	   	   	 	   	 
  
  default:
   { cout<<"Invalid Option \nPress Any Key \n";
      goto menu;          
	} 
  
  
	}  
  
  return 0;
}
