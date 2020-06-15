#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

void bubble(int * array , int n)
 {
 


    for(int i=0;i<n;i++)
     {for(int j=0;j<n-1;j++)
           {
               if(array[j]>array[j+1])
                {
                    int temp=array[j];
                    array[j]=array[j+1];
                    array[j+1]=temp;
                }
            
           }
     }


    


 }
int main()
{  system("cls");
    int array[]={1,3,5,23,6,34,6,23,5,76};
    int n=10;

    bubble(array,n);
    
     for(int j=0;j<n-1;j++)
       cout<<array[j]<<" ";


return 0;}