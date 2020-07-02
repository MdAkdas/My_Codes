#include <iostream>
#include<vector>
using namespace std;

template<typename T,typename U>
 class stack
 {
 private:
 		vector <T > v;
 		vector <U > v2;
 public:
 	void push(T ascii,U let )
 	{
 		v.push_back(ascii);
 		v2.push_back(let);
 	}

 	bool empty()
 	{
 		return v.size()==0;
 	}

 	void pop()
 	{
 		if(!empty())
 			{   v2.pop_back();
 			v.pop_back();
 		}
 	}
   	

 	T top()
 	{
 		if(!empty())
 			{  
 				return v[v.size()-1];

 		    }
 	}
 	U top2()
 	{
 		if(!empty())
 			return v2[v2.size()-1];
 	}
 };

 int main()
 { stack <int,char>s;
 	for(int i=65;i<=90;i++)
 		s.push(i,i);
 	
 	while(!s.empty())
 	{   
 		cout<<s.top()<<" "<<s.top2()<<endl;
 		s.pop();
 		//cout<<s.empty()<<"\t"<<endl;

 	}

 	return 0;
 }