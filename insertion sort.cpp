#include<bits/stdc++.h>
using namespace std;
void printarray(int arr[],int size)
{//displaying the message on the console
cout<<"the array is "<<endl;
//for loop is used to display the elements of the array
for(int i=0;i<=size-1;i++)
{
cout<<arr[i]<<" ";	
}
}
int main()
{//the array which is to sorted
int  a[10];
//initilising the value of i  as 0
int i=0;
//this temp variable is used for swapping the values 
int temp;
//variable to hold the size of the array entered by user
int size;
//displays message on the screen
std::cout<<"enter the size of the array"<<std::endl;
//user enters size of the array through the console
std::cin>>size;
//this clock_t class is used to calculate the time taken by the procedure to take place
clock_t t;
//time starts now
t=clock();
//this for loop is used to access the index of the array
for(int j=0;j<=size-1;++j)
{
//this operation is used to enter the values to the array	
std::cin>>a[j];
}
for(int j=1;j<=size-1;j++)
{
// the first index is considered to be already sorted	
if(a[i]<a[j])
{
//if the first element is sorted then increment the value of i	
i++;	
}
else
{
//else we have to swap the values of the i and j elements	
temp=a[i];
//swapping
a[i]=a[j];
//swapping
a[j]=temp;
//incrementing the value of i	
i++;
}
}
//time ends here
t=t-clock();
//type casting and calculating the value of time_taken
double time_taken =((double)t)/CLOCKS_PER_SEC;
//displaying the value of time_taken on the console
cout<<"time taken by the insertion sort is :"<<time_taken<<endl;
cout<<endl;
printarray(a,size);	
}
