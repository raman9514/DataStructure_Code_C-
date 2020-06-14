#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

void bubble()
 {
  int array[]={1,3,5,23,6,34,6,23,5,76};
  int n=10;
  

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


     for(int j=0;j<n-1;j++)
       cout<<array[j]<<endl;


 }
int main()
{
    int array[]={1,3,5,23,6,34,6,23,5,76};
    int n=10;

    bubble();



return 0;}