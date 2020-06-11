#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

main()
{
	int arr[20]={0},tos=0,data,option,pop_value;
	
	// --------MENU--------- //
	menu:
	
	system("cls");
	printf("1 PUSH\n2 POP\n3 Print Stack\n4 EXIT\n");
	printf("Enter Your Choice : ");
	scanf("%d",&option); 
    system("cls");

	// --------PUSH--------- //	
	if(option==1)
	 { if(tos>9)
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
	 { if(tos==0)
	    { printf("Stack Underflow \n");
	      printf("Press Any Key For Menu...\n");
	      getch();
    	  goto menu;}
	  else
	    {
		  printf("*-----Pop successfully-----* \n");
		 pop_value=arr[tos];
		 tos=tos-1;
		 goto menu;}
	  } 
	    
	// --------PRINT--------- //
	    
	else if(option==3)
	{
		system("cls");
		for(int i=0;i<9;i++)
		 printf("%d | ",arr[i]);
	     printf("\nPress Any Key For Menu...\n");
	   	 getch();
	   	 goto menu;
	}
	
	
	else if(option==4)
	{ return 0;
	}
	
	else 
	 {printf("Enter Valid Option... ");
	 goto menu;
	 }


}
