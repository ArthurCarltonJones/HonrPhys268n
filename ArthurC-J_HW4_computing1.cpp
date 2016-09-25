#include <iostream>

using namespace std;

int factorial(int n);    //function prototype

int main()
{
  for(int i=1;i<=10;i++)        //loops from 1 to 10 inclusive and outputs the factorial of each integer from 1 to 10 inclusive
    {
      cout<<i<<"! = "<<factorial(i)<<endl;
    }
  return 0;
}
int factorial(int n)      //function takes an integer n as a parameter    returns n!
{
  if(n==0)     //special definition of factorial
    {
      return 1;
    }
  return n*factorial(n-1);      //recursion until the loop is broken when the factorial of 0 is taken
}
