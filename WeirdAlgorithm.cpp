//Consider an algorithm that takes as input a positive integer n. If n is even, 
//the algorithm divides it by two, and if n is odd, the algorithm multiplies it 
//by three and adds one. The algorithm repeats this, until n is one. For example, 
//the sequence for n=3 is as follows:
                                   //3→10→5→16→8→4→2→1

//Your task is to simulate the execution of the algorithm for a given value of n.

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    long long  number;
    cin>>number;
    cout<<number<<" ";
   while(number!=1)
  {
    if(number%2==0){
        //checking if even
        number=number/2;
        
    }
    else
    {
        //checking if odd
        number=(number*3)+1;
        
    } 
    cout<<number<<" ";
  }
}
