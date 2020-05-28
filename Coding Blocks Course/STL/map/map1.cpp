m.insert(make_pair(key,value));
m.find(key);
m.count(key); //0 or 1;
m.erase(key); 
m.clear(); //dont forget this ever.

//all in logn

for(auto p:m)
{
   cout<<p.first<<":"<<p.second<<endl;
}

for(auto it=m.begin();it!=m.end();it++)
   {
      cout<<(*it).first<<(*it).second<<endl;
      cout<<it->first<<it->second<<endl;
   }

int main() 
{  
   // freopen("input.txt", "r", stdin);
   // freopen("output.txt", "w", stdout);
   ll t,n,m;

   string s;
   cin>>t;
   while(t--)
   {
   	cin>>n>>m;
  	int po[m];
    cin>>s;
   	rep(i,m)
   	cin>>po[i];

   	map<char,int>mp;
   	for(int i=0;i<26;i++)
   	{
   		mp['a'+i]=0;
   	}

   	// for(int i=0;i<26;i++)
   	// {
   	// 	cout<<mp['a'+i]<<" ";
   	// }
   	// cout<<endl;
    
    char c;
   	for(int i=0;i<s.length();i++)
   	{  
   		mp[s[i]]++;

   	}
    
   // for(auto it=mp.begin();it!=mp.end();it++)
   // 	{  
   // 		cout<<(*it).first<<" "<<(*it).second<<endl;

   // 	}
   	//cout<<endl;

   	for(int i=0;i<m;i++)
   	{
   		for(int j=0;j<po[i];j++)
   		{ mp[s[j]]++;

   		}
   	}

   	for(auto it=mp.begin();it!=mp.end();it++)
   	{
   		cout<<(*it).second<<" ";
   	}
   	cout<<endl;



   }   
 return 0;
}