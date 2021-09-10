#include<bits/stdc++.h>
using namespace std;
vector<int> myVector;

int main()
{
	cout << "Type in a list of 5 numbers " << endl;

	int input = 0;

	for (int i = 0; i < 5; i++) 
	{
		cin >> input;
		myVector.push_back(input);
		
	}

	for (int i = 0; i < 5; i++) 
	{
		cout << myVector[i] << endl;
	}

		return 0;
}
