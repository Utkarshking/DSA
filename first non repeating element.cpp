#include <iostream>
using namespace std;

int main() {
	int arr[10];
	int size;
	cin>>size;
	for(int i=0;i<=size-1;i++)
	{
	  cin>>arr[i];  
	}
	for(int i=0;i<=size-1;i++)
	{
	for(int j=0;j<=size-1;j++)
	if(arr[i]==arr[j]&&i!=j)
    break;    
	else
    cout<<arr[i]<<endl;
	}
	return -1;
    }
