//You are given an array of n integers. You want to modify the array so that it is increasing, i.e.,
//every element is at least as large as the previous element.
//On each move, you may increase the value of any element by one.
//What is the minimum number of moves required?
//Input
//The first input line contains an integer n: the size of the array.
//Then, the second line contains n integers x1,x2,…,xn: the contents of the array.
//Output
//Print the minimum number of moves.
//Input:
//5
//3 2 5 1 7
//Output:
//5

#include<iostream>
#include<vector>
using namespace std;
int main()
{
     int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    long long ans = 0;
    for (int i = 1; i < n; i++)
    {
        if (v[i] < v[i - 1])
            ans += v[i - 1] - v[i], v[i] = v[i - 1];
    }
    cout << ans;
    return 0;
}