#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int n=3;
float object[]={1,2,3};
float profit[]={25,24,15};
float weight[]={18,15,10};
float *pp=new float[n];
int bag=20;




void sort(float a1[],float a2[],float a3[])
{
   
  for(int i=0;i<n;i++)
     {for(int j=0;j<n-1;j++)
           {
               if(a1[j]>a1[j+1])
                {
                    float temp=a1[j];
                    a1[j]=a1[j+1];
                    a1[j+1]=temp;

                     temp=a2[j];
                    a2[j]=a2[j+1];
                    a2[j+1]=temp;

                    temp=a3[j];
                    a3[j]=a3[j+1];
                    a3[j+1]=temp;
                }
            
           }
     }


}


void GreedyForProfit()
{ 

 int mybag=0;
 
sort(profit,object ,weight);

float myprofit=0;
for(int i=n-1;i>=0;i--)
 {if(weight[i]<=bag-mybag)
  {
    mybag+=weight[i];
    myprofit=profit[i];
    
  }
  else
  { 
    float av = bag - mybag;
    if(av==0){break;}
    float myval = (av/weight[i])*profit[i];
    myprofit+=myval;
    mybag+=av;

    break;

  }
 }

 cout<<"Greedy For Profit "<<endl; 
cout<<"profit = "<<myprofit;
cout<<endl;
}


void GreedyForWeight()
{
    sort(weight,profit,object);	
	float mybag=0,myprofit=0;
	
	for(int i=0;i<n;i++)
	{
		if(weight[i]<=bag-mybag)
		{
			mybag+=weight[i];
			myprofit+=profit[i];
			
		}
		else{
			float av=bag-mybag;
			if(av<=0){break;
			}
			
			float x= av / weight[i];
			myprofit+=(x*profit[i]);
			mybag+=av;
			break;
		}
		
	}
	cout<<"Greedy For Weight "<<endl;
	
	cout<<"Profit = "<<myprofit;
	

cout<<endl;

}


GreedyForBoth()
{ 
 for(int i=0;i<n;i++)
  {
  	pp[i]=profit[i]/weight[i];
  }
 
 sort(pp,weight,profit);
 
  int mybag=0;
 
float myprofit=0;
for(int i=n-1;i>=0;i--)
 {if(weight[i]<=bag-mybag)
  {
    mybag+=weight[i];
    myprofit=profit[i];
    
  }
  else
  { 
    float av = bag - mybag;
    if(av==0){break;}
    float myval = (av/weight[i])*profit[i];
    myprofit+=myval;
    mybag+=av;

    break;

  }
 }

 cout<<"Greedy For Both "<<endl; 
cout<<"profit = "<<myprofit;
cout<<endl;
   		
	
}



int main()
{
  system("cls");  


GreedyForProfit();
GreedyForWeight();
GreedyForBoth();

return 0;}