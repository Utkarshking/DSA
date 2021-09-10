//quick sort algorithm lab3-DAA
#include<bits/stdc++.h>
using namespace std;
//this function is used for swapping the two values with the principle of call by reference
void swap(int* a, int* b)  
{//taken two reference variable so to accept the references from the calling
//taken a temp variable for swapping the values 
int t = *a;  
//b is gone in a
*a = *b; 
//t->a is gone in b 
*b = t;  
}
//this function sorts on the basis of dividing and setting up the last or the first element as piivot element 
int partition(int arr[],int _lower,int _higher)
{
//firstly pivot element is initialised with the element present in the last index	
int _piv=arr[_higher];
//the value of i is initialised with the negative value 
int i=_lower-1;
//this for loop is used to access the elements in the array
for(int j=_lower;j<=_higher-1;j++)
{
// if the first element is less than the pivot element (condition)
if(arr[j]<_piv)
{
//incrementing the value of i
//basically we have to take the value of i behind j 	
i++;
//and the swapping written arithematically but logically its not happening
swap(&arr[i],&arr[j]);
}
}
//so i is used basically for swapping purpose
//else part now begins
//so this condition is that to basically swap the value of the particular index with the pivot element
swap(&arr[i+1],&arr[_higher]);
return(i+1);
}
//this function is used for the recursive calling and for making the array into subarray logically
int _quicksort(int arr[],int _l,int _h)
{  
if(_l<_h)
{//calling the function partition 
int _piv=partition(arr,_l,_h); 
//this is used for the leftsubarray logically 
_quicksort(arr,_l,_piv-1);
//this is used for the rightsubarray logically
_quicksort(arr,_piv+1,_h);
}
}
//the function is used to print the array after it is sorted
void printarray(int arr[],int size)
{
cout<<"the input array is"<<endl;
//this for loop is used to access all the elements in the array
for(int i=0;i<=size-1;i++)
{//below operation is used for displaying the elements of the array
cout<<arr[i]<<" ";
}	
}
int main()
{//initialising the variable size for the array
int size;
cout<<"enter the size of the array"<<endl;
//entering the value for the size as user input
cin>>size;
//declaring the array according to the size given by the user 
int arr[size];
//int i;
//int low,high;
//for loop is used for the accessing the index for the values entry by the user
//clock object is used to calculate the time for the _quicksort function to perform its task
clock_t t;
//time is now started
t=clock();
for(int i=0;i<=size-1;i++)
{
//user is entering the values according to the index of the user	
cin>>arr[i];
}
//calling the function quicksort
_quicksort(arr,0,size-1);
//time stops
t=t-clock();
//type casting the time into double(data type)
double time_taken=((double)t)/CLOCKS_PER_SEC;
//diplaying the time taken on the screen
cout<<"the time taken by the quick sort is :"<<time_taken<<endl;
cout<<endl;
//now displaying the array after applying the sorting algorithm
//cout<<"the sorted array is "<<endl;
printarray(arr,size);
}


 
