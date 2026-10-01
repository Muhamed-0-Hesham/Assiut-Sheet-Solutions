#include<iostream>
#include<string.h>
#include<fstream>
#include<iomanip>
#include <cmath>
#include <algorithm>
#include <cctype>
#include <string>
using namespace std;
int main() 
{ 
   long long x,y,q,sum=0,even=0,odd=0,f,l;
   bool t=true;
   cin>>x>>y>>q;
      if( q%3 ==1 )
      {
        cout<<x;
      }
      else if( q%3 ==2 )
      {
        cout<<y;
      }
      else
       cout<<(x^y);
}