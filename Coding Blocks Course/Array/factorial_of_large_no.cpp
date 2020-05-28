#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void multiply(int x, vector<int>&multiplicand) 
{    
   int carry=0;

   for(int i=0;i<multiplicand.size();i++)
   {
      int prod = multiplicand[i]*x+carry;
      //cout<<"prod "<<prod<<endl;
      multiplicand[i]=prod%10;
      carry = prod/10;
      //cout<<"carry "<<carry<<endl;
   }
   while(carry)
   {
      int rem = carry%10;
      multiplicand.push_back(rem);
      carry/=10;
   }
}

void factorial(int n) 
{
   vector<int>result;
   result.push_back(1);

   for(int x=2;x<=n;x++)
   {
      multiply(x,result);
   }
   reverse(result.begin(),result.end());


   for(auto el : result)
   {
      cout<<el;
   }
   cout<<endl;
   
}

int main() 
{
   int n;
   cin>>n;

   factorial(n);
   return 0;
}

