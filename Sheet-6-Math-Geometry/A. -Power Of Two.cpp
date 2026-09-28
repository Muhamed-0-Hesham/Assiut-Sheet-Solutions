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
   long long x;
   cin>>x;
   while(x%2==0)
     x/=2;
   if(x==1)
   cout<<"YES";
   else
   cout<<"NO";

}