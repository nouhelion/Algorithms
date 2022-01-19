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
int Repetitions(string DNA){
  int n,max,best;
  n=max=1;
  best=max;
       for(int i=1;i<DNA.length();i++){
              if(DNA[i]==DNA[i-1])  
                  n++;
              else 
                 { 
                     n=1;
                     if(n>max)
                       best=n;
        
                 }
            
       } 
  return best;
}

int main()
{
    string DNA;
    getline(cin,DNA);
    cout <<Repetitions(DNA)<<endl;
}
