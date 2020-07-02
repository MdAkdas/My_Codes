#include<iostream>
#include<vector>
#include<stdlib.h>
#include<time.h>
#include<map>
using namespace std;


class RandomizedSet {
public:
     vector<int> array;
     unordered_map <int,int> map;
    /**  Initialize your data structure here. */
    RandomizedSet() {
       array.clear();
        map.clear();
    }
    
    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
        if(map.find(val)!=map.end() && map[val]!=0){
            return false;
        }
        map[val] = 1;
        array.push_back(val);
        return true;
    }
    
    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) {
      if(map.find(val) == map.end() || map[val]==0){
          return false;
      }
        map[val] = 0; 
        return true;    
    }
    
    /** Get a random element from the set. */
    int getRandom() {
       int size = array.size();
        if(size == 0) return -1;
       int x = rand() % array.size();
        while(map[array[x]]==0){
            x=  rand() % array.size();
        }
       return array[x];
        
    }
};
int main()
{
    cout<<"hello"<<endl;
    int n;
    RandomizedSet r;
    cin>>n;
    while(n--)
    {
        cout<<r.insert(1)<<endl;
        cout<<r.remove(2)<<endl;
        cout<<r.getRandom()<<endl;
    }


}