#include<bits/stdc++.h>
using namespace std;
//below written is function is prototype
int max(int a,int b);
//this function defined below returns the largest subsequence
int lcs(char *arr,char *ch,int size,int size_1)
{ //matrix made for getting the common possible subsequnce from the two strings 
int arr_1[size+1][size_1+1];
//first for loop is used to access the rows of the matrix
for(int i=0;i<=size;i++)
{
//second for loop is used for the columns to access the values
for(int j=0;j<=size_1;j++)
{
// all  the diagonal elements will get zero values and also the first row and column values
if(i==0||j==0)
arr_1[i][j]=0;
//now the below statement is used for getting the subsequence ie. if the charecter is present in the first string or not
else if(arr[i-1]==ch[j-1])
//value is incremented by 1 for every sequence of charecters in the second string
arr_1[i][j]=arr_1[i-1][j-1]+1;
else
//to get the maximum value doing comparison
arr_1[i][j]=max(arr_1[i-1][j],arr_1[i][j-1]);	

}
}
return arr_1[size][size_1];
}
//this function is used to return the largest value among the two
int max(int a,int b)
{
if(a>b)
return a;
else if(b>a)
return b;	
}
int main()
{
//taken the first array for the checking	
char ch[]="abcdefgh";
//next string is taken for checking the charecters in the previous string
char ch_1[]="abcda";
//storing the size of the first string in the size variable
int size=strlen(ch);
//storing the size of the second string in the size_1 variable
int size_1=strlen(ch_1);
cout<<"the size of the longest common subsequence is "<<lcs(ch,ch_1,size,size_1);

}
