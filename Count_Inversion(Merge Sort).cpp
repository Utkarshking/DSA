#include<bits/stdc++.h>
#define ll 			long long int
#define lld         long long double
#define si(x)	    scanf("%I64d",&x)
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
using namespace std;

int merge(int arr[], int temp[], int l, int mid, int r) {
	int i, j, k;
	int inv = 0;
// for the left subarray
	i = l;
// for the right subarray
	j = mid;
// initial value for copying the elements in the temprorary array
	k = l;
	while ((i <= mid - 1) && (j <= r)) {
		if (arr[i] <= arr[j]) {
			// copying the element of the left subarray as it is smaller
			//v[leftsub]<v[rightsub]
			temp[k++] = arr[i++];
		}
		else {
			// copying the element of the right subarray as it is smaller
			//v[leftsub]>v[rightsub]
			temp[k++] = arr[j++];
			// (mid -i) --> we are counting all the remaining elements of the left subarray
			// as inversion as it will consider all the elements as pairs of inversion
			inv += (mid - i);

		}
	}
// merging the left over elements from the left or right subarray
	while (i <= mid - 1)
		temp[k++] = arr[i++];

	while (j <= r)
		temp[k++] = arr[j++];

	/*Copy back the merged elements to original array*/
	for (i = l; i <= r; i++)
		arr[i] = temp[i];

	return inv;

}
// verfied
int mergesort(int arr[], int temp[], int l, int r) {
	int mid, inv = 0;
	if (l < r) {
		mid = (l + r) / 2;
		//sorting first and the second values
		// we will count the no of inversion in the left subarray
		inv += mergesort(arr, temp, l, mid);
		// we will count the no of inversion in the right subarray
		inv += mergesort(arr, temp, mid + 1, r);
		// we will coun the inversion in merging both
		inv += merge(arr, temp, l, mid + 1 , r);
	}
	return inv;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	int arr[n];
	int temp[n];
	for (int i = 0; i < n; i++)   cin >> arr[i];
	int ans = mergesort(arr, temp, 0, n - 1);
	cout << ans;
}
