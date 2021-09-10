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
int max = arr_1[1];
for(int i=2;i<=size_s;i++) 
{//now comparing the value all the other elements of the array 
if(arr_1[i]>max)
//if element is greater then exchanges the value of max
max = arr_1[i];
}
//returning the maximum value of the array
return max; 
}
void counting_sort(int array[], int size) 
{//declared for displaying the output of the array
int o[size+1];
//storing the maximum value of the array in the max variable
int max = find_Max(array, size);
//create count array (max+1 number of elements)
int c[max+1]; 
//for loop is used to access all the elements in the arrat
for(int i=0;i<=max;i++)
{//initialise all the values to be zero
c[i]=0; 
}
for(int i=1;i<=size;i++)
{ //increase number count in count array
c[array[i]]++; 
}
for(int i=1;i<=max;i++)
{//calculating the cf value
c[i] += c[i-1]; 
}
for(int i=size;i>=1;i--) 
{
o[c[array[i]]] = array[i];
c[array[i]] -= 1; 
}
for(int i=1;i<=size;i++) 
{
array[i] = o[i]; //store output array to main array
}
}
int main() 
{
int size;
cout << "Enter the number of elements: ";
cin >> size;
int arr[size+1]; 
cout << "Enter elements:" << endl;
for(int i=0;i<=size;i++) 
{
cin >> arr[i];
}
cout << "Array before Sorting: ";
printarray(arr, size);
counting_sort(arr,size);
cout << "Array after Sorting: ";
printarray(arr,size);
}
