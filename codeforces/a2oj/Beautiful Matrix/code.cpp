#include<bits/stdc++.h>
#define ll          long long int
#define vec         vector<long long int>
#define mp          map<int,int>
#define debug(a)	cout<<#a<<" "<<a;
using namespace std;
int main() {
	vector<vector<int>>v(5, vector<int>(5));
	int moves = 0;
	int row = 0;
	int column = 0;
	int n1, n2 = 0;
	//taking input in vector
	for (int i = 0; i < v.size(); i++)
		for (int j = 0; j < v.size(); j++) {
			cin >> v[i][j];
		}
	for (int i = 0; i < v.size(); i++)
		for (int j = 0; j < v.size(); j++) {
			if (v[i][j] == 1) {
				row = i;
				column = j;
			}
		}
	// debug(row);
	// cout << "\n";
	// debug(column);
	if (row > 2) {
		n1 = row - 2;
	}
	else if (row < 2) {
		n1 = 2 - row;
	}
	else if (row == 2) {
		n1 = 0;
	}

	if (column > 2) {
		n2 = column - 2;
	}
	else if (column < 2) {
		n2 = 2 - column;
	}
	else if (column == 2) {
		n2 = 0;
	}

//caculating the number of moves
	moves = n1 + n2;

	cout << moves;
}