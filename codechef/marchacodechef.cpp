#include<bits/stdc++.h>
using namespace std;
void filtersint(int *arr,int num,int muggle){
    int i=0;
    int sum=0;
    while(num>0){
        // (num&1)?cout<<arr[i]:cout<<"";
        if(num&1){
            if(sum<muggle){
                sum+=arr[i];
                if(sum==muggle){
                    cout<<"yes"<<endl;
                }
                // else
                // cout<<"no"<<endl;
            }
        }
        i++;
        num=num>>1;   //a>>b a/2^b ie. num/2
    }
    cout<<endl;
}
void generatesubset(int *arr,int muggle,int length){
int range=(1<<length)-1;
for(int i=0;i<=range;i++){
    filtersint(arr,i,muggle);
}
}
int main(){
    int capacity=20;
    int m;
    int array[capacity];
    int notes;
    cout<<"enter the possible notes"<<endl;
    cin>>notes;
    int length=notes-1;
    for(int i=0;i<=length;i++)
    cin>>array[i];
    cout<<"enter the muggle value"<<endl;
    cin>>m;
    generatesubset(array,m,length);
}