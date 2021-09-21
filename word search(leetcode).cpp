#include<bits/stdc++.h>
#define fastio()  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll        long long int
#define lld       long long double
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
bool search(vector<vector<char>>&board, int i, int j, string& word, int pos, vector<vector<bool>>&visited) {
	if (pos == word.size() - 1)
		return true;
	visited[i][j] = true;
	if (i > 0 && !visited[i - 1][j] && board[i - 1][j] == word[pos + 1] && search(board, i - 1, j, word, pos + 1, visited)) {
		return true;
	}
	if (j > 0 && !visited[i][j - 1] && board[i][j - 1] == word[pos + 1] && search(board, i, j - 1, word, pos + 1, visited)) {
		return true;
	}
	if (i < board.size() - 1 && !visited[i + 1][j] && board[i + 1][j] == word[pos + 1] && search(board, i + 1, j, word, pos + 1, visited)) {
		return true;
	}
	if (j < board[0].size() - 1 && !visited[i][j + 1] && board[i][j + 1] == word[pos + 1] && search(board, i, j + 1, word, pos + 1, visited)) {
		return true;
	}
	visited[i][j] = false;
	return false;
}
bool solve(vector<vector<char>>board, string word) {
	int row = board.size();
	int col = board[0].size();
	vector<vector<bool>>visited(row, vector<bool>(col));
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			if (board[i][j] == word[0] && search(board, i, j, word, 0, visited)) {
				return true;
			}
		}
		return false;
	}
	return 0;
}
int main() {
	fastio();
	int row, col;
	cin >> row >> col;
	vector<vector<char>>matrix(row, vector<char>(col));
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cin >> matrix[i][j];
		}
	}
	string s;
	cin >> s;
	cout << solve(matrix, s);
}