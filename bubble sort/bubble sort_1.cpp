#include<iostream>
#include<stdio.h>
#include<time.h>
using namespace std;
void swap(int *a,int *b)
{
int temp=*a;
*a=*b;
*b=temp;	
}
//this function returns void and sorts the array and calculate the time 
void bubblesort(int arr[],int size)
{ 

int i,j;
//taking the two nested for loops while sorting the element
for( i=0;i<size-1;i++)
for(j=0;j<size-i-1;j++)
//sorting the array in ascending order by following approach
if(arr[j]>arr[j+1])
swap(&arr[j],&arr[j+1]);
}
// this function also sorts but with the differrent approach and calculate the time
void selectionsort(int arr[],int size)
{
 int i, j, min_idx;  
// One by one move boundary of unsorted subarray  
for (i = 0; i < size-1; i++)  
{  
 // Find the minimum element in unsorted array  
min_idx = i;  
for (j = i+1; j < size; j++)  
if (arr[j] < arr[min_idx])  
min_idx = j;  
// Swap the found minimum element with the first element  
swap(&arr[min_idx], &arr[i]);  
    }  	
}
//this function written below prints the array after sorting
void printarray(int arr[],int size)
{
for(int i=0;i<=size-1;i++)
{
cout<<arr[i];	
}	
}
int main()
{
//taking input of the size of the array
int size;
cout<<"enter the size"<<endl;
//entering the size of the array
cin>>size;
//declaring  the unsorted array
clock_t t;
int arr[size];
//taking input of the array by the user
t=clock();
clock_t m;
m=clock();
for(int i=0;i<=size-1;i++)
cin>>arr[i];	
//object to calculate the time for the bubble sort function

//object to calculate the time for the selection sort function
//time starts for the bubble sort

//now applying the sorting algorithms one by one
bubblesort(arr,size); //defining the function bubble sort above
// this is used to calculate the previous and now the cuurent time for the function
t=clock()-t;
//type casting and converting
double time_taken=((double)t)/CLOCKS_PER_SEC;
//printing the time for the bubble sort function:-
cout<<"the time taken by the bubble sort is :"<<float(time_taken)<<endl;

selectionsort(arr,size); //defining the function selection sort above
m=clock()-m;
double time_taken_1=((double)m)/CLOCKS_PER_SEC;
cout<<"the time taken by the selection sort is : "<<float(time_taken_1)<<endl;
cout<<"sorted array is "<<endl;
//function to display the sorted array
printarray(arr,size);
}

