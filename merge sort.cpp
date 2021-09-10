#include<bits/stdc++.h>
#include<time.h>
using namespace std;
//this function is used to merge the divided elements and sorts in the ascending order
void merge(int arr[],int _lower,int mid,int _high)
{
int size_1;
int size_2;
//size of the left subarray
size_1=mid-_lower+1;
//size of the right subarray
size_2=_high-mid;
//creating the  left half of the array and will seprate the array further
int lefthalf[size_1];
// creating the right half of the array and will seperate the array further
int righthalf[size_2];
// this for loop is used to access the left subarray elements
for(int i=0;i<size_1;i++)
{//this is done to copy the left subarray elements to leftsubarray created above
lefthalf[i]=arr[_lower+i];	
}
//this for loop is used to accrss the right subarray elements
for(int j=0;j<=size_2;j++)
{//this is done to copy the right subarray elements to rightsubarray created above
 righthalf[j]=arr[mid+1+j];	
}
//starting index of leftsubarray for while loop initialising first 
int i=0;
//starting index of rightsubarray for while loop initialising second
int j=0;
//starting index for the merged array
int k=_lower;
//this loop is used to access the elements of the left and right subarrat
while(i<size_1&&j<size_2)
{//this conditon is used to compare if the leftsubarray element is lesser than right one then copy that
if(lefthalf[i]<righthalf[j])
{
arr[k]=lefthalf[i];
i++;
}
//this else condition is just vice versa of the first condition ie. if the rightsubarray element is lesser than the left subarray element
else
{
arr[k]=righthalf[j];
j++;
}
//increamenting the index of the original array
k++;	
}
//this extra conditon is given if there is any element left to be copied in left subarray will be copied in the original array 
while(i<size_1)
{
arr[k]=lefthalf[i];
//incrementing the index of the left subarray element
i++;
//incrementing the index of the original array
k++;	
}
//this conditon is given if there is any element left to be copied in the right subarray will be copied in the original array
while(j<size_2)
{
arr[k]=righthalf[j];
//incrementing the index of right subarray element
j++;
//incrementing the index of original array 
k++;	
}
}
void mergesort(int arr[],int low,int high)
{
//this condition will work untill the all the elements are being divided	
if(low<high)
{//gets the index of mid to divide and seperate two arrays
int mid=low+(high-low)/2;  
//function calls itself recursively for the first half of elements
mergesort(arr,0,mid);
//function calls itself recursively for the second half of elements
mergesort(arr,mid+1,high);
///this function will now merge and sorts the elements that are being divided
merge(arr,low,mid,high);	
}	
}
//this function will print the array before and after sorting according to the main function
void printarray(int arr[],int size)
{//accessing all the elements with the help of for loop
for(int i=0;i<=size-1;i++)
{//displaying the elements of the according to the index
cout<<arr[i]<<" ";	
}	
}
/*this function just initialises the array and its size and calls the function 
merge sort*/
int main()
{
//this variable willl store the size of the array	
int size;
// just to display the message on the screen
cout<<"enter the size"<<endl;
//user enters the value in the variable
cin>>size;	
//declaring the array which is to sort
int arr[size];
//now initialising the values in the array according to the user
//this is follow using the for loop for entering the values
//now we will calculate the time taken so calling the clock_t function
clock_t t;
t=clock();
for(int i=0;i<=size-1;i++)
{
//now entering the values	
cin>>arr[i];  	
}
cout<<endl;
cout<<"given array is "<<endl;
//this function will print the array before the sorting it is called
printarray(arr,size);
cout<<endl;
//this function will spllit and further merge is called to sort and to merge
mergesort(arr,0,size-1);
//now substracting the time taken to call and perform the operation
t=t-clock();
//now calculating and type casting into double
double  time_taken=((double)t)/CLOCKS_PER_SEC;
//now printing the time onto the screen after been calculated
cout<<"the time taken by the merge sort :"<<time_taken<<endl;
cout<<"the sorted array is"<<endl;
//this function will print the array after the sorting is being called
printarray(arr,size);
//returns 0
return 0;
}
