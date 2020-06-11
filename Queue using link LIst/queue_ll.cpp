#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;

struct node
{ int data;
 struct node *link;

}*root=NULL;

void queue()
{ 
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    
    cout<<"\nEnter Data : ";
    cin>>temp->data;
    temp->link=NULL;
    
    if(root==NULL)
     { root=temp;
	 }
	 else{
	 	struct node *p;
		 p=root;
		 root=temp;
		 root->link=p; 
	 		 }
 cout<<"\nInsertion Complete ";	getch(); 
}

int length()
{
	 struct node *temp;
	 temp=root;
	 int a=1;
	 while(temp->link!=NULL)
	  { a++;
	    temp=temp->link;
	  }
	 return a; 
	 
}

void dqueue()
{ 
  struct node *temp,*temp2;
  int a=length();
  int i=2;
  temp=root;
  
  while(i!=a)
  { temp=temp->link;
     i++;
  }
  
  temp2=temp;
  temp2=temp2->link;
  temp->link=NULL;
  free(temp2);
  
  cout<<"\nDeletetion Completed"; getch();
}

void print()
{ struct node *temp;
   temp=root;
   
   cout<<"\n"<<temp->data;
   while(temp->link!=NULL){
   	   temp=temp->link;
   	   cout<<" "<<temp->data;
   	    
   	    
   }
   getch();
}

int main()
{
	int c;
	menu:
		system("cls");
	cout<<"     Queue Operation \n";
	cout<<"----------------------------\n";
	cout<<"1. Inset \n2. Delete \n3. Print Data \n4. Quit ";
	cout<<"\nWating ...  for your input ";
	cin>>c;
	    system("cls");
	switch(c){
	case 1:
		 queue();
		  cout<<"\nNew Data\n";
		   system("cls");
		   print();
		  goto menu;
				
    case 2:
		{ dqueue();
		  cout<<"\n New Data \n";
		  system("cls");
		  print();
		  goto menu;
		}    	  
	case 3:
		{ print();
		  goto menu;
		} 
	case 4:
		{ return 0;
		  		}
	default :
	 { cout<<"\nInvalid Option ...\n";
	     goto menu;
				   }	  		
		  		
	}
	
return 0;}
