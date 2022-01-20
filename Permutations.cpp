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
    if(n==1) 
		cout<<1<<" ";
	if(n<=3) 
	{
		cout<<"NO SOLUTION";
	}
    else 
    {vector<long long> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
        for(long long j =2; j>=1;j--){
			for(long long i=j; i<=n; i+=2)
			{
				cout<<i<<" ";
			}
		}
        }
   
    return 0;
}