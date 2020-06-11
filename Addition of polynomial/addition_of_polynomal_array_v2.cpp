#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
int main()
{  
	int i=0,j=0,k=0;
	int a_cofi[4]={13,7,32,54};
	int a_expo[4]={8,5,2,0};
	int b_cofi[4]={3,17,3,98};
	int b_expo[4]={12,5,3,0};
    int c_cofi[4];	
    int c_expo[4];
	
	//printf("%d^%d",b_cofi[0],b_expo[0]);
	getch();
	while(i<4 && j<4)
	{
		 if(a_expo[i]==b_expo[j])
		   {  c_cofi[k]=a_cofi[i]+b_cofi[j];
		      c_expo[k]=a_expo[i];
		      cout<<c_cofi[k]<<"^"<<c_expo[k]<<" + ";
			   i=i+1;
		       j=j+1;
		       k=k+1;
		       }
		  else if(a_expo[i]>b_expo[j]) 
		    {   c_cofi[k]=a_cofi[i];
		        c_expo[k]=a_expo[i];
		        cout<<c_cofi[k]<<"^"<<c_expo[k]<<" + ";
			     i=i+1;
				 k=k+1;  }
			 else //(a_expo[i]<b_expo[j]) 
		    {   c_cofi[k]=b_cofi[j];
		        c_expo[k]=b_expo[j];
		         cout<<c_cofi[k]<<"^"<<c_expo[k]<<" + ";
				 j=j+1;
				 k=k+1;  }	 
		       
		 } 	
	  cout<<"\n"; 
	 /*  for(i=0;i<k;i++)
	   {
	   	 printf("%d^%d +",c_cofi[i],c_expo[i]);
	   }
    */	   
}
