#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

//void array_input(int p[r][c],int r,int c);

main()
{
	int a[6][6];
	int r,c;

	printf("Enter Number of Row and Column \n");
	 scanf("%d%d",&r,&c);
	
	system("cls");
	
	printf("Enter %d Element of Matrix %d X %d \n",r*c,r,c);
	 
	 for(int i=0;i<r;i++)
	  for(int j=0;j<c;j++)
	    scanf("%d",&a[i][j]);
	    
	
	
 for(int i=0;i<r;i++)
	{
	 for(int j=0;j<c;j++)
	   {printf("%d  ",a[i][j]);}
	printf("\n");
	}
	getch();
	system("cls");
	printf("Row   column    vlaue \n");
	
	
 	for(int i=0;i<r;i++)
   	  {for(int j=0;j<c;j++)
			{
				if(a[i][j]!=0)
				{ printf("%d      %d        %d\n",i,j,a[i][j]);
				}
			}
		}
	
	
}

/*void array_input(int p[r][c],int r,int c)
{ 
	for(int i=0; i<r;i++)
	  for(int j=0;j<c;j++)
	    scanf("%d",p[i][j]);
}*/
