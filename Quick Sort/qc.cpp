#include<stdio.h>
#include<conio.h>
void quicksort(int *a,int first,int last)
{   int piv,i,j,temp;

    if(first<last){ 
		piv=first;
        i=first;
        j=last;
	  
		while(i<j){
			while(a[i]<=a[piv] && i<last)
		   		i++;
			while(a[j]>a[piv] )
		   		j--;
	   
	   		if(i<j){
	 	 		temp=a[i];
	 	 		a[i]=a[j];
	 	 		a[j]=temp;}
	 }   
	 
		 temp=a[piv];
	 	 a[piv]=a[j];
	 	 a[j]=temp;
	quicksort(a,first,j-1);
	quicksort(a,j+1,last); 
   }
}
int main()
{   int i=0;
  	int a[10]={4,6,5,8,10,7,1,3,2,1};
		quicksort(a,0,9);


  for(i=0;i<10;i++)
   printf("%d  ",a[i]);	
	
getch();}
