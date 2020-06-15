#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int object[]={1,2,3};
int profit[]={25,24,15};
int weight[]={18,15,10};
int bag=20;
int n=3;

void sort(int * a1,int *a2,int * a3)
{
   
  for(int i=0;i<n;i++)
     {for(int j=0;j<n-1;j++)
           {
               if(a1[j]<a1[j+1])
                {
                    int temp=a1[j];
                    a1[j]=a1[j+1];
                    a1[j+1]=temp;

                     temp=a2[j];
                    a2[j]=a2[j+1];
                    a2[j+1]=temp;

                    temp=a2[j];
                    a2[j]=a2[j+1];
                    a2[j+1]=temp;
                }
            
           }
     }

}



void GreedyForProfit()
{ 

 int mybag=0;
 
sort(profit,object ,weight);
float myprofit=0;
for(int i=0;i<n;i++)
 {if(weight[i]<=bag-mybag)
  {
    mybag+=weight[i];
    myprofit=profit[i];
    cout<<myprofit <<" + ";
  }
  else
  { cout<<"Else block ";
    float av = bag - mybag;
    if(av==0){break;}
    float myval = (av/weight[i])*profit[i];
    myprofit+=myval;
    mybag+=av;

    break;

  }
 }

 cout<<"The profit is "<<endl; 
cout<<endl<<myprofit;
}

int main()
{
  system("cls");  

GreedyForProfit();




return 0;}