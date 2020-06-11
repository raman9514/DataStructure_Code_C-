#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

main()
{
	int arr[20]={0},tos=0,data,option,pop_value;
	int tosa=0,tosb=19;
	int choice;
	// --------MENU--------- //
	menu:
	
	system("cls");
	printf("1 PUSH\n2 POP\n3 Print Stack\n4 EXIT\n");
	printf("Enter Your Choice : ");
	scanf("%d",&option); 
	if(option==4){return 0; }
	printf("1 Stack_1\n2 Stack_2 \n ");
	printf("Enter Your Choice : ");
	scanf("%d",&choice);
    system("cls");

	// --------PUSH--------- //	
  if(choice==1){
  
	if(option==1)
	 { if(tosa==tosb-1)
	    { printf("Stack Overflow \n");
	      printf("Press Any Key For Menu...\n");
	      getch();
		 goto menu;}
	  else
	    {
		  printf("Enter The Value : ");
	     scanf("%d",&data);
		 arr[tos]=data;
		 tos=tos+1;
		 goto menu;}
	  }

	// --------POP--------- //	  
	else if(option==2)
	 { if(tosa==0)
	    { printf("Stack Underflow \n");
	      printf("Press Any Key For Menu...\n");
	      getch();
    	  goto menu;}
	  else
	    {
		  printf("*-----Pop successfully-----* \n");
		 pop_value=arr[tosa];
		 tosa=tosa-1;
		 goto menu;}
	  } 
	    
	// --------PRINT--------- //
	    
	else if(option==3)
	{
		system("cls");
		for(int i=0;i<=tosa;i++)
		 printf("%d | ",arr[i]);
	     printf("\nPress Any Key For Menu...\n");
	   	 getch();
	   	 goto menu;
	}
	
		
	else 
	 {printf("Enter Valid Option... ");
	 goto menu;
	 }
}
//--------------STACK 2 ------------//
//---------------------------------//

	// --------PUSH--------- //	
 else{
 
	if(option==1)
	 { if(tosb==tosa+1)
	    { printf("Stack Overflow \n");
	      printf("Press Any Key For Menu...\n");
	      getch();
		 goto menu;}
	  else
	    {
		  printf("Enter The Value : ");
	     scanf("%d",&data);
		 arr[tosb]=data;
		 tosb=tosb-1;
		 printf("Success ....");
		 goto menu;}
	  }

	// --------POP--------- //	  
	else if(option==2)
	 { if(tosb==19)
	    { printf("Stack Underflow \n");
	      printf("Press Any Key For Menu...\n");
	      getch();
    	  goto menu;}
	  else
	    {
		  printf("*-----Pop successfully-----* \n");
		 pop_value=arr[tosb];
		 tos=tos+1;
		 goto menu;}
	  } 
	    
	// --------PRINT--------- //
	    
	else if(option==3)
	{
		system("cls");
		for(int i=19;i>=tosb;i--)
		 printf("%d | ",arr[i]);
	     printf("\nPress Any Key For Menu...\n");
	   	 getch();
	   	 goto menu;
	}
			
	else 
	 {printf("Enter Valid Option... ");
	 goto menu;
	 }
 }


}
