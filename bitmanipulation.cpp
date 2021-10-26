#include<bits/stdc++.h>
using namespace std;
int getbit(int n, int pos)
{
	int mask;
	mask = 1 << pos;
//took a boolean variable to store the n and mask value
	bool ch;
	ch = n & mask;
	if (ch != 0)
		return 1;
	else
		return 0;
}
int setbit(int number, int pos) {
	int mask = 1 << pos;
	number = number | mask;
	return number;
}
int clearbit(int number, int pos)
{
	int mask = ~(1 << pos);
	return (number & mask);
}
int updatebit(int number, int pos, int value) {
//for update bit you first have to perform clear bit and then set bit
	int mask = ~(1 << pos);
	number = (number) & (mask);
	int mask_1 = (value << pos);
	return (number | mask_1);
}
unsigned int countsetbits(unsigned int n) {
	unsigned int cnt = 0;
	while (n) {
		count += n & 1;
		n >>= 1;
	}
	return count;
}
int main()
{	int number;
	cout << "enter the number" << endl;
	cin >> number;
	int pos;
	cout << "enter the position" << endl;
	cin >> pos;
// cout<<getbit(number,pos);
// cout<<setbit(number,pos);
//cout<<clearbit(number,pos);
	cout << "enter the value you wanted to update in the bit";
	int value;
	cin >> value;
	cout << updatebit(number, pos, value);
	return 0;
}