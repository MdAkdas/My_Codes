#include <bits/stdc++.h>
 using namespace std;

 int main()
 { string s,t;
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    getline(cin,s);
    int l=s.length();
    //cout<<"length "<<l<<endl;

    for(int i=0;i<l;i++)
    { 
        t.push_back(s[i]);

        if(i==l-1)
            cout<<t<<endl;

        else if('A'<=s[i+1] && s[i+1]<='Z')
        { cout<<t<<endl;
            t.clear();

        }

    }
    return 0;



 }