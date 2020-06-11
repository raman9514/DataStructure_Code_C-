#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

main()
{
	
	
	int n,a[30],i,data,p;
	// n = for store number of elment in array
	// p= position at which new data will be stored
	// i= for loop 
	
	// Code Segment for Elemet for insertion array
	printf("Enter number of element you want to store : ");	
	scanf("%d",&n);
	printf("Enter value \n");
	for(i=0;i<n;i++)
	 scanf("%d",&a[i]);
	//End 
	
	
	// print current Element of array
	printf("Array Element\n");	
	for(i=0;i<n;i++)
	 printf("%d ",a[i]);
	getch();
	system("cls");
    // End
	
	// code for insertion
	printf("Enter position at which you want to insert element : ");
	scanf("%d",&p);
	p=p-1;
	printf("Enter New Data : ");
	scanf("%d",&data);
	
	for(i=n;p<=i;i--)
	 {  a[i+1]=a[i];
	  	 } 
	a[p]=data;
	n=n+1;
    //End
	
	//print new array	
	printf("new array \n");
	for(i=0;i<n;i++) 
 	printf("%d  ",a[i]);
   //End
  		  
// code for deletion
 printf("Enter positon to delete element : ");
 scanf("%d",&p);
 p=p-1;
  for(i=p;i!=n;i++)
   { a[i]=a[i+1]; 
		 }
n=n-1;
//End

//print new array	
	printf("new array \n");
	for(i=0;i<n;i++) 
 	printf("%d  ",a[i]);
  //End		 
		 	  
	 
	
	
}
