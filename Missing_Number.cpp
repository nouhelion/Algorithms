//You are given all numbers between 1,2,…,n except one. Your task is to find the missing number.
//Input
//The first input line contains an integer n.
//The second line contains n−1 numbers. Each number is distinct and between 1 and n (inclusive).
//Output
//Print the missing number.
//Input:
//5
//2 3 1 5
//Output:
//4

#include<iostream>
using namespace std;
int main() {
	long long sum = 0, n, x;
	cin >> n;
	long long tot = ((n * (n+1))/2);
	while (n > 1){
		cin >> x;
		sum += x;
		n--;
	}
	cout << tot - sum;
	return 0;
}

