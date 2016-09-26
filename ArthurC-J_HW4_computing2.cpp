#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  for(int i=1;i<=100;i++)
    {
      cout<<i<<" :\t";
      for(int j=1;j<=i;j++)
	{
	  if(i%j==0)
	    {
	      cout<<j<<"\t";
	    }
	}
      cout<<"\n";
    }
  return 0;
}
