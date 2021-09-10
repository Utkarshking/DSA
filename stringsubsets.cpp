#include<bits/stdc++.h>
using namespace std;
//num ->index of the for loop and *a is the charecter array
void filterchars(char *a,int num){
    int i=0;
    while(num>0){
        (num&1)?cout<<a[i]:cout<<"";
        i++;
        num=num>>1;
    }
    cout<<endl;
}
//char *a is the charecter array
void generatesubsets(char *a){
    int length=strlen(a);
    int range=(1<<length)-1;
    for(int i=0;i<=range;++i){
        filterchars(a,i);
    }
}
int main(){
    char arr[100];
    cout<<"enter"<<" "<<endl; 
    cin>>arr;
    generatesubsets(arr);
}