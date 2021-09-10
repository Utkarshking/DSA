#include<bits/stdc++.h>
using namespace std;
//function purpose to display the elements after and before the sorting
void printarray(int a[], int size) 
{
//for loop is used to access all the elements of the array
for(int i=1;i<=size;i++)
//diplaying the elements of the array one by one
cout<<a[i]<< " ";
cout << endl;
}
//this function is used to find the maximum value in the user input array
int find_Max(int arr_1[], int size_s) 
{//assuming the first value to be maximum value of the array
int max = arr_1[0];
for(int i=1;i<size_s;i++) 
{//now comparing the value all the other elements of the array 
if(arr_1[i]>max)
//if element is greater then exchanges the value of max
max = arr_1[i];
}
//returning the maximum value of the array
return max; 
}
void counting_sort(int array[],int size,int power) 
{//declared for displaying the output of the array
int o[size];
//storing the maximum value of the array in the max variable
int max = find_Max(array, size);
//create count array (max+1 number of elements)
int c[10]; 
//for loop is used to access all the elements in the arrat
for(int i=0;i<=max;i++)
{//initialise all the values to be zero
c[i]=0; 
}
for(int i=0;i<=size;i++)
{ //increase number count in count array
c[(array[i]/power)%10]++; 
}
for(int i=1;i<=max;i++)
{//calculating the cf value
c[i] += c[i-1]; 
}
for(int i=size-1;i>=0;i--) 
{
o[c[(array[i]/power)%10]-1] = array[i];
c[(array[i]/power)%10] -= 1; 
}
for(int i=0;i<=size;i++) 
{
array[i] = o[i]; //store output array to main array
}
}
void RADIX_sort(int arr[],int size)
{//storing the value of find_max in max
int max=find_Max(arr,size);
for(int power=1;max/power>0;power *=10)
counting_sort(arr,size,power);
}
int main() 
{
int size;
cout<<"Enter the number of elements:";
cin>>size;
int arr[size]; 
cout<< "Enter elements:" << endl;
for(int i=0;i<=size;i++) 
{
cin>>arr[i];
}
cout<<"Array before Sorting: ";
printarray(arr,size);
RADIX_sort(arr,size);
cout<<"Array after Sorting: ";
printarray(arr,size);
}
