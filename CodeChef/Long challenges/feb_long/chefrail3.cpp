#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
 
 int t;
 cin>>t;
 while(t--)
 {
  int sum=0;
  int count=0,count2=0;
  int x1=1;
  int n,m;
  cin>>n>>m;
  int x[n];
  int y[m];
    int arr1[500001];
    int arr2[500001];
    int arr3[500001];
    int arr4[500001];

       memset(arr1,0,sizeof(arr1));
       memset(arr2,0,sizeof(arr2));
       memset(arr3,0,sizeof(arr3));
       memset(arr4,0,sizeof(arr4));

  for(int i=0;i<n;i++)
  {
     cin>>x[i];
     if(x[i]>0){
      arr1[x[i]]=1;
     }
     else if(x[i]<0){
      arr2[abs(x[i])]=1;
     }
     x[i]=abs(x[i]);

   if(x[i]==0)
    {count=1;}
   
  }

  for(int j=0;j<m;j++)
  { 
   cin>>y[j];
   if(y[j]>0){
      arr3[y[j]]=1;
     }
     else if(y[j]<0)
     {
      arr4[abs(y[j])]=1;
     }
   y[j]=abs(y[j]);

    if(y[j]==0)
    {count2=1;
    }
  }

   
  for(int i=0;i<n;i++)
  {
      map <int,int> m1;
   int te=x[i];
   while(te%2==0){
    m1[2]++;
    m1[2]++;
    te/=2;
   }
      for (int i1 = 3; i1 <= sqrt(x[i]); i1+=2)  
    {  
      
        while (te % i1 == 0)  
        {  
         
            m1[i1]++;
            m1[i1]++;
            te = te/i1;  
        }
    }
        
        if(te>=2){
         m1[te]++;
         m1[te]++;
        }
    
   
   vector<vector<int> > v(m1.size());

    int tempo=0;
    for(auto it:m1){
     
     for(int iy=0;iy<=it.second;iy++){
      v[tempo].push_back(pow(it.first,iy));
     }
     tempo++;
    }
   
   
    
    
   vector<vector<int>> answerr(v.size()+1);
  answerr[0].push_back(1);
  for(int i1=0;i1<v.size();i1++){
   for(int i2=0;i2<answerr[i1].size();i2++){
    for(int i3=0;i3<v[i1].size();i3++){
     answerr[i1+1].push_back(answerr[i1][i2]*v[i1][i3]);
    }
   }
   
   
   
   
  }
   
   
   
   for(int j=0;j<answerr[v.size()].size();j++){
     int temp1=answerr[v.size()][j];
     int temp2=(x[i]*x[i])/temp1;
     if(temp2<=100000&&temp1<=100000)
     if(temp2<=100000&&arr3[temp1]!=0&&arr4[temp2]!=0){
      sum++;
     }
     if(temp2<=100000&&temp1<=100000)
      if(temp2<=100000&&arr3[temp2]!=0&&arr4[temp1]!=0){
      sum++;
     }
     
   }
   
  
   m1.clear();
   int tempp=v.size();
            for(int i=0;i<tempp;i++){
             v[i].clear();
            }
            v.clear();
            answerr.clear();
  }
  
   for(int i=0;i<m;i++){
  
  
       map <int,int> m1;
   int te=y[i];
      for (int i1 = 2; i1 <= sqrt(y[i]); i1++)  
    {  
      
        while (te % i1 == 0)  
        {  
         
            m1[i1]++;
            m1[i1]++;
            te = te/i1;  
        }}
        if(te>=2){
         m1[te]++;
         m1[te]++;
        }
    
    
   vector<vector<int> > v(m1.size());

    int tempo=0;
    for(auto it:m1){
     
     for(int iy=0;iy<=it.second;iy++){
      v[tempo].push_back(pow(it.first,iy));
     }
     tempo++;
    }
    
    
   vector<vector<int>> answerr(v.size()+1);
  answerr[0].push_back(1);
  for(int i1=0;i1<v.size();i1++){
   for(int i2=0;i2<answerr[i1].size();i2++){
    for(int i3=0;i3<v[i1].size();i3++){
     answerr[i1+1].push_back(answerr[i1][i2]*v[i1][i3]);
    }
   }
   
   
   
   
  }
  
  
  
  
   for(int j=0;j<answerr[v.size()].size();j++){
     int temp1=answerr[v.size()][j];
     int temp2=(y[i]*y[i])/temp1;
     if(temp2<=100000&&temp1<=100000)
     if(arr1[temp1]!=0&&arr2[temp2]!=0){
      sum++;
     }
     if(temp2<=100000&&temp1<=100000)
      if(arr1[temp2]!=0&&arr2[temp1]!=0){
      sum++;
     }
     
    }
                m1.clear();
   int tempp=v.size();
            for(int i=0;i<tempp;i++){
             v[i].clear();
            }
            v.clear();
            answerr.clear();}
   
  sum/=2;
  if(count==1&&count2==1){
  sum+=(n-1)*(m-1);
  }
  
  else if(count==1){
   
   sum+=(n-1)*m;
  }
  else if(count2==1){
   sum+=n*(m-1);
  }
  cout<<sum<<endl;
  
  
  
 }
}