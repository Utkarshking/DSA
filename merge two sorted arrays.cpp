#include<bits/stdc++.h>
#include<cmath>
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
void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}
int nextgap(int gap) {
	if (gap <= 1)
		return 0;
	else
		// from  taking care of the ceil value we have taken this value
		return (gap / 2) + (gap % 2);
}
void solve(int *arr, int *arr2, int m, int n) {
	// time complexity-->O(N^2)
	// space complexity-->O(1)
	// if (m > n || m == n) {
	// 	int i = 0;
	// 	while (i < m) {
	// 		if (arr[i] < arr2[0])
	// 			i++;
	// 		else if (arr[i] > arr2[0]) {
	// 			swap(&arr[i], &arr2[0]);
	// 			sort(arr2, arr2 + n);
	// 			i++;
	// 		}
	// 	}
	// 	for (int i = 0; i < m; i++) {
	// 		cout << arr[i] << " ";
	// 	}
	// 	cout << "\n";
	// 	for (int j = 0; j < n; j++) {
	// 		cout << arr2[j] << " ";
	// 	}
	// }
	// else if (n > m) {
	// 	int j = 0;
	// 	while (j < n) {
	// 		if (arr2[j] < arr[0]) {
	// 			j++;
	// 		}
	// 		else if (arr2[j] > arr[0]) {
	// 			swap(&arr2[j], &arr[0]);
	// 			sort(arr, arr + m);
	// 			j++;
	// 		}
	// 	}
	// 	for (int j = 0; j < n; j++) {
	// 		cout << arr2[j] << " ";
	// 	}
	// 	cout << "\n";
	// 	for (int i = 0; i < m; i++) {
	// 		cout << arr[i] << " ";
	// 	}
	// }


	// Time complexity -->O(NLOGN)
	// space complexity --> O(1)
	// applying the gap theorem
	int i, j;
	int  gap = m + n;
	for (gap = nextgap(gap); gap > 0; gap = nextgap(gap)) {
		// comparing the elements in the first array
		for ( i = 0; i + gap < m; i++)
			if (arr[i] > arr[i + gap])
				swap(&arr[i], &arr[i + gap]);

		// comparing the elements in both the arrays
		for ( j = gap > m ? gap - m : 0; i < m && j < n; i++, j++)
			if (arr[i] > arr2[j])
				swap(&arr[i], &arr2[j]);

		if (j < n) {
			// comparing the elements to the second array
			for (j = 0; j + gap < n; j++)
				if (arr2[j] > arr2[j + gap])
					swap(&arr2[j], &arr2[j + gap]);

		}

	}


}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	// time complexity: O(NlogN)
	//SPACE complexity:O(N)
	int arr[] = {1, 4, 7, 8, 10};
	int arr2[] = {2, 3, 9};
	int size1 = sizeof(arr) / sizeof(arr[0]);
	int size2 = sizeof(arr2) / sizeof(arr2[0]);
	//trying out insertion sort technique
	solve(arr, arr2, size1, size2);
	// int size3 = size1 + size2;
	// int final[size3];
	// //copying the elments of the first array
	// int i = 0;
	// int k = 0;
	// // cout << size1;
	// //copying the elements of the first array in the final array
	// while (i < size1) {
	// 	final[i] = arr[k];
	// 	k++;
	// 	i++;
	// }
	// k = 0;
	// //copying the elements of the second array in the final array
	// while (k != size3) {
	// 	final[i] = arr2[k];
	// 	k++;
	// 	i++;
	// }
	// // for (int i = 0; i < size3; i++) {
	// // 	cout << final[i] << " ";
	// // }

	// sort(final, final + size3);

	// cout << "\n";

	// int j = 0;
	// int m = 0;
	// // copying after sorting the given subarray
	// while (j != size1) {
	// 	arr[j] = final[m];
	// 	j++;
	// 	m++;
	// }
	// m = 0;
	// while (m != size2) {
	// 	arr2[m] = final[j];
	// 	j++;
	// 	m++;
	// }
	// //merging all the subarrays
	// cout << "the two merged subarray are " << "\n";
	// for (int i = 0; i < size1; i++) {
	// 	cout << arr[i] << " ";
	// }
	// cout << " \n";

	// for (int i = 0; i < size2; i++) {
	// 	cout << arr2[i] << " ";
	// }
	for (int i = 0; i < size1; i++) {
		cout << arr[i] << " ";
	}
	cout << "\n";
	for (int j = 0; j < size2; j++) {
		cout << arr2[j] << " ";
	}


}