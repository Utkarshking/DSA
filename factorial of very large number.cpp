#include<bits/stdc++.h>
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll 			long long int
#define lld      	long long double
#define si(x)	  	scanf("%I64d",&x)
#define sl(x)		scanf("%lld",&x)
#define ss(x)		scanf("%s",s)
#define pi(x)		printf("%I64d\n",x)
#define pl(x)		printf("%lld\n",x)
#define ps(s)		printf("%s\n",s)
#define deb1(x)    	cout<<#x<<"="<<x
#define deb2(x,y)	cout<<#x<<"="<<x<<","<<#y<<"="<<y<<"\n"
#define pb			emplace_back
#define F 			first
#define S			second
#define pii			pair<int,int>
#define pll			pair<ll,ll>
#define vec			vector<int,int>
#define PI          3.1415926535897932384626
#define MAX         1000
using namespace std;
int multiply(int x, int result[], int result_size){
	// initialising carry variable as 0
	int carry=0;
	//one by one multiply n with the indivisual digits of result[]
	for(int i=0;i<result_size;i++)
	{
		int product=result[i]*x+carry;
		// store the last digit of product in res[]
		result[i]=product%10;
		carry=product/10;
	}
	while(carry){
		result[result_size]=carry%10;
		carry=carry/10;
		result_size++;
	}
	return result_size;
}


void solve(int N)
{ 	
int result[MAX];
 
 // initialising result
 result[0]=1;
 int result_size=1;

// applying the factorial formula for the same using for loop
for(int i=2;i<=N;i++)
	result_size=multiply(i,result,result_size);

//displaying the result array
for(int i=result_size-1;i>=0;i--){
	cout<<result[i];
}
}


int main(){
  fastio();
  int n;
  cin>>n;
  solve(n);

}