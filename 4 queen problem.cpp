#include<bits/stdc++.h>
#define N 4
using namespace std;
//this below function is used to print the chessboard
void display(int arr[N][N])
{
for(int i=0;i<N;i++)
{
for(int j=0;j<N;j++)
cout<<arr[i][j]<<" ";
cout<<endl;	
	}	
}
//this below function is used to check whether the queen put is valid or not
bool valid(int chessboard[N][N],int row,int column)
{//this below for loop is used to access all the columns of the chessboard
for(int i=0;i<column;i++)
//below condition is used to check whether there is a queen in the left side or not
if(chessboard[row][i])
return false;	
//this below condition is used to check the upper diagonal elements the queen should not to be put there
for(int i=row,j=column;i>=0&&j>=0;i--,j--)
if(chessboard[i][j])
//as obvious should be returning false
return false;
//this below condition is used to check the lower diagonal elements the queen should not to be put there
for(int i=row,j=column;j>=0&&i<N;i++,j--)
if(chessboard[i][j])
return false;
return true;
}
//this function is defined the mask the values in the matrix
bool solve4queen(int chessboard[N][N],int column)
{
//first condition is to check if all the queens are places according to the value of N
if(column>=N)
return true;
//below for loop is used to access all the rows of the 2-d matrix
for(int i=0;i<N;i++)
{
//below condition is used if the queen can be placed in the right row according to the column or not	
if(valid(chessboard,i,column))
{
chessboard[i][column]=1;
 if(solve4queen(chessboard,column+1))
 return true;
//when no place is left to place the queen then
chessboard[i][column]=0;	
}
}
return false;	
}
//below function is defined to return the bool value
bool solution()
{
//this below matrix is used as a chess board for dispalying the possible solution	
int chessboard[N][N];
//this for loop is used to access the row elements of the 2-d matrix
for(int i=0;i<N;i++)
{
//this below for loop is used to access the column elements of the 2-d matrix
for(int j=0;j<N;j++)
{
//set all the default values as 0	
chessboard[i][j]=0;	
}	
}
if(solve4queen(chessboard,0)==false)
{
cout<<"solution not found"<<endl;
return false;
}
display(chessboard);
return true;
}
int main()
{
//this returns the bool solution to the problem for the possible solution	
solution();	
}
