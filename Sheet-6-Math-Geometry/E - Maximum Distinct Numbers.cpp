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
   long long x=1,y=2,q,sum=0,even=0,odd=0,f,l;
   bool t=true;
   cin>>f;
   if(f==1)
   {
    cout<<1;
    return 0;
   }
 while(sum < f)
 {
  sum = (y+x) * (y-x+1) / 2;
    y+=1; 
 }
 if(sum > f)  
  cout<<y-2;
 if(sum==f)
   cout<<y-1;
}