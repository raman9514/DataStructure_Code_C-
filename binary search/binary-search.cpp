#include<stdio.h>
#include<conio.h>

int main()
{
		int a[10]={11,21,33,46,55,56,67,68,79,80};
	    int mid,first=0,last=9,num;
	    
	    printf("Enter The search Value : ");
	    scanf("%d",&num);
	    
	    	    
	     while(first<=last)
	     { mid=(first+last+1)/2;
	        
	        if(a[mid]==num){
			   printf("Data %d founded at location %d \n",num,mid+1);
	          return 0;}
	        
			if(num<a[mid])
	           {  last=mid-1;
			   }
			 else
			 { first=mid+1;
			   }  	     
		 }
	  printf("Data not founded");
}
