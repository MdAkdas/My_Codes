#include<iostream>
using namespace std;

template<typename T>

 class queue
 {
 	T *arr;
 	int f;
 	int r;
 	int cs,ms;

 public:
 	queue(int ds=4)
 	{
 		arr=new T[ds];
 		f=0;
 		r=ds-1;
 		cs=0;
 		ms=ds;
 	}
 	bool isFull()
 	{
 		return cs==ms;
 	}
 	bool isEmpty()
 	{
 		return cs==0;
 	}

 	void push(T data)
 	{
 		if(!isFull())
 		{   r=(r+1)%ms;
 			arr[r]=data;
 			cs++;

 		}
 		}
	void pop()
	{
		if(!isEmpty())
		{
			f=(f+1)%ms;
			cs--;
		}
	}
	T front()
	{
		if(!isEmpty())
		{
			return arr[f];
		}

	}	 

 };

 int main(int argc, char const *argv[])
 {
 	queue<int> q(15);
 	for(int i=5;i<15;i++)
 		q.push(i);

 	q.pop();
 	q.push(100);
 	while(!q.isEmpty())
 	{
 		cout<<q.front()<<endl;
 		q.pop();
 	}
 	return 0;
 }