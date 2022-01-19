//You are given a DNA sequence: a string consisting of characters A, C, G, and T. 
//Your task is to find the longest repetition in the sequence. 
//This is a maximum-length substring containing only one type of character.
//Input
//The only input line contains a string of n characters.
//Output
//Print one integer: the length of the longest repetition.
//Input:
//ATTCGGGA
//Output:
//3

#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    string DNA;
    getline(cin,DNA);
    int n,best;
    n=best=1;
    for(int i=0;i<DNA.length();i++)
    {
        if(DNA[i]==DNA[i+1])  
            n++;
        else
        {
            if(n>best)
                best=n;
            n=1;
        }
    }
    cout <<best<<endl;
}