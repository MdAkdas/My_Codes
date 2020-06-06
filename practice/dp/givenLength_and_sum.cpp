#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);

	int m,s;
	cin >> m >> s;

    // boundation check
	if(s > m*9 || (m>1 && s<1))
		cout << "-1 -1";

	else
	{
        int a=s,b=s, // temp sum of max and min  numbers
        index=m-1;

        //print min
        string s="";
        while(index>=0)
        {
            int pos;
           
            pos = max(0,a-9*index);
            //cout<<"pos "<<pos<<endl;

            if(index==m-1 && a && pos==0)pos = 1;  // setting initial position m-1 pos
            cout << pos;
            s+=pos+'0';
            index--;
            a-=pos;
        }
       // cout<<s<<endl;

        cout << ' ';

        //print max
        index = m;
        while(index!=0)
        {
            int pos;
            pos = min(9,b);
            cout << pos;
            index--;
            b-=pos;
        }

	}



return 0;
}