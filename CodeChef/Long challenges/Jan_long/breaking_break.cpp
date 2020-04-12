#include<bits/stdc++.h>
 using namespace std;


int main()
{ int t,w1,w2,w3,s;
   cin>>t;

   while(t--)
   { cin>>s>>w1>>w2>>w3;
      
       if(w1+w2+w3<=s)
         cout<<"1"<<endl;

       else if(w3+w2<=s||w1+w2<=s)
         cout<<"2"<<endl;  

       else
           cout<<"3"<<endl;
        
   }

   return 0;

}