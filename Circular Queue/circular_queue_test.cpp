#include<stdio.h>
#include<conio.h>
int MAX=10;
int f=-1;
int r=-1;


void insert(int *a)
{  int data;
   if(f==-1)
    { f=0;
      r=0;
      printf("Enter Data : ");
		 scanf("%d",&data);
		  a[r]=data;
	    }
	if(f==0 && r==MAX-1)
	  { printf("Queue if Full \n");
	   return;
	  }
	  if(r==MAX-1)
    {
       r=0;
       printf("Enter Data : ");
		 scanf("%d",&data);
		  a[r]=data;
    }
	if(f==r+1)
	  {printf("Queue if Full \n");
	   return;	}
	 else
	  { r++;
	    printf("Enter Data : ");
		 scanf("%d",&data);
		  a[r]=data; }

}

void pop(int *a)
{
	if(f==-1){
	  printf("Queue is Empty ");
 		return;	  }

	 if(f==r){
	  printf("Queue is Empty ");
 		 f=-1;r=-1;
		 return;	  }


      printf("%d is deleted",a[f]);
	  a[f]=0;
	    if(f==MAX-1)
	      f=0;
	    else
		  f++;

}

void print(int *a)
{  int i=f;
   int j=r;
     while(i<j)
      {
      	  printf(" data %d :\n",a[i+1]);

      	  if(i==MAX-1)
      	     i=0;
      	  else
			   i++;

	      }


}

int main()
{
	int a[MAX];

	 insert(a);
	 insert(a);
	 insert(a);
     pop(a);
	 print(a);

getch();}
