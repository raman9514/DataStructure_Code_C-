#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int a[7]={4,3,6,2,9};
	
	for(int i=1;i<5;i++)
	   {
	   	   int key=a[i];
	   	   int j=i-1;
	   	   
			  while(j>=0 && a[j]>=key) {
	   	        a[j+1]=a[j];
	   	           j--;
			 	}
			 	
			a[j+1]=key;	
	    
					}
				
	   
	   
	   cout<<"sorted list"<<endl;
	   for(int i=0;i<5;i++)
	cout<<a[i]<<" ";
	    
	   
	   
	
return 0;}
