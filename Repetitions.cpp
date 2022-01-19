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
#include <vector>
#include<algorithm>
using namespace std;
int Repetitions(string DNA){
  int n,max=0;
  char rep;
       for(int i=0;i<DNA.length();i++){
           rep=DNA[i];
          for(int j=i+1;j<DNA.length();j++){
              if(DNA[i]==DNA[j])
              {   
                  n++;
              }
             
          }
          
       }  
  return n;
}

int main()
{
    string DNA;
    getline(cin,DNA);
    cout <<Repetitions(DNA)<<endl;
}
