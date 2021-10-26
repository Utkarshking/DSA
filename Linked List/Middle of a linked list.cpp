#include<bits/stdc++.h>
#define fastio()  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll        long long int
#define lld       long long double
#define p 		  printf
#define si(x)     scanf("%I64d",&x)
#define sl(x)     scanf("%lld",&x)
#define ss(x)     scanf("%s",&s)
#define pi(x)     printf("%I64d\n",x)
#define pl(x)     printf("%lld\n",x)
#define ps(s)     printf("%s\n",s)
#define deb1(x)   cout<<#x<<"="<<x
#define deb2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<"\n"
#define pb        emplace_back
#define F         first
#define S         second
#define pii       pair<int,int>
#define pll       pair<ll,ll>
#define vec       vector<int,int>
#define nline     "\n"
#define PI        3.1415926535897932384626
using namespace std;
struct ListNode {
	int val;
	ListNode *next;
}
//  1 st method to find the middle of the linked list
ListNode* solve(ListNode *head) {
	int len = 0;
	ListNode *temp = head;
	while (temp != NULL) {
		len++;
		temp = temp->next;
	}
	temp = head;
	int half = len >> 1;
	while (half--) {
		temp = temp->next;
	}
	return temp
}
//2nd Method to find the middle of the linked list
ListNode* solve(ListNode *head) {
	ListNode *slow = head;
	ListNode *fast = head;
	while (fast != NULL and fast->next != NULL) {
		//going at a speed x
		slow = slow->next;
		//going at a speed 2x
		fast = fast->next->next;
	}
	return slow;

}
int main() {
	fastio();
	solve();
}
