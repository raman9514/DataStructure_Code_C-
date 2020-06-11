#include<stdlib.h>
#include<iostream>
#include<conio.h>
using namespace std;

struct node
{
	int data;
	struct node *link;
}*root=NULL;

void push()
{   struct node *temp;
  temp=(struct node*)malloc(sizeof(struct node));
  cout<<"Enter data : ";
  int data;
  cin>>data;
  temp->data=data;
  temp->link=NULL;
  
  if(root==NULL)
  {  root=temp;
  }
  else{
  	 struct node *p;
  	 p=root;
  	 while(p->link!=NULL)
  	  { p=p->link;
		}
	  p->link=temp;
  }
	cout<<"\n+----PUSH SUCCESSFULLY----+";  	 
}
  int length()
  { struct node *temp;
    temp=root;
    int a=1;
	while(temp->link!=NULL)
	{   
	    temp=temp->link;
	    a++;
	 } 
	return a;
  }
  
 void pop()
 { 
   struct node *temp,*temp2;
   temp=root;
   
   if(root==NULL)
    { cout<<"Unable to pop...\n";
	  } 
       
	
else{
   int i=2;
   int a=length();
   while(i!=a)
    {temp=temp->link;
	 i++;}
	temp2=temp;
	temp2=temp2->link;
	temp->link=NULL;
	free(temp2);
 cout<<"\n+----POP SUCCESSFULLY----+";
 }}
  
void print()
{
	struct node *temp;
	temp=root;
	if(root==NULL)
	  { cout<<"\nNo Data Item In Stack..";
	  }
	else{
		   cout<<"  +------+ \n";
   cout<<"  |  "<<temp->data<<"  |\n";
   cout<<"  +------+ \n";
		 while(temp->link!=NULL)
		 { 
		 
		  temp=temp->link;
           
   cout<<"  |  "<<temp->data<<"  |\n";
   cout<<"  +------+ \n";
}
	}  
	  cout<<"\n.... Ii's Your Data ";
  
 }


int main()
{
	int c;
	menu:
	system("cls");
	cout<<"        STACK OPERATION    \n";
	cout<<"--------------------------------\n";
	cout<<"\n\t1. PUSH \n\t2. POP \n\t3. PRINT \n\t4. EXIT\n";
	cout<<"\n Wating... for Your Choice : ";
	cin>>c;
	system("cls");
	switch(c)
	{ 
	case 1 :
		{ push();
		  getch(); goto menu;
		   break;}
    case 2 :
		{ pop();
		  getch(); goto menu;
		   break;}
    case 3 :
		{ print();
		  getch(); goto menu;
		   break;}
	case 4 :
		{ return 0;
		  getch(); goto menu;
		   break;}
	default:
	{  cout<<"Invalid Option ...\n";
	    getch(); 
	    goto menu;
				  }	   	   
	}
	
return 0;}
