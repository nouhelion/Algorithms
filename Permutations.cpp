//A permutation of integers 1,2,…,n is called beautiful 
//if there are no adjacent elements whose difference is 1.
//Given n, construct a beautiful permutation if such a permutation exists.
//Input
//The only input line contains an integer n.
//Output
//Print a beautiful permutation of integers 1,2,…,n. If there are several solutions, you may print any of them. 
//If there are no solutions, print "NO SOLUTION".

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