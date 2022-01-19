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

#include <iostream>
#include <vector>
using namespace std;
int MissingNumber(int number,vector <int> list){
  int n;
  for(int i = 1; n!=0; i++){
       
  }  
  return n;
}

int main()
{
    int size,number;
    vector <int> list;
    cout << "enter a integer : " <<endl;
    cin  >> size;
    for(int i = 0; i < size-1; i++){
        cin  >>number;
         list.push_back(number);
    }    
    cout <<MissingNumber(size,list)<<endl;
}
