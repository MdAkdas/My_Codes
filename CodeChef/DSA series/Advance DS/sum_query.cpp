#include <iostream>
#include <climits>
using namespace std;
#define N 10000
int tree[N];

void build_Segment_Tree(int a[],int v,int Seg_start,int Seg_end)
{
	//cout<<"v "<<v<<" left "<<left<<" right "<<right<<endl;
	if(Seg_start==Seg_end)
		tree[v]=a[Seg_start];

	else
	{
		int mid= (Seg_start+Seg_end)/2;

		build_Segment_Tree(a,2*v,Seg_start,mid);
		build_Segment_Tree(a,2*v+1,mid+1,Seg_end);
		tree[v]=(tree[2*v]+tree[2*v+1]);
	}

}

int sum_range_query(int v,int Seg_start,int Seg_end,int left,int right)
{
	//cout<<Seg_start<<" "<<Seg_end<<" "<<v<<endl;
	if(right<Seg_start || left>Seg_end)
		return 0;

	if(left<=Seg_start && right >= Seg_end)
	{
		//cout<<"v "<<v<<endl;
		return tree[v];
	}
	int mid = (Seg_start+Seg_end)/2;

	int l =sum_range_query(2*v,Seg_start,mid,left, min(right,mid)) ;
	int r =sum_range_query(2*v+1,mid+1,Seg_end,max(left,mid+1),right);
	//cout<<l<<"\t"<<r<<endl;
	return l + r;
}


int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif	
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n,q;
	cin>>n>>q;
	int a[n];

	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int v=1;
	build_Segment_Tree(a,v,0,n-1);

	/*for(int i=1;i<4*n;i++)
	{
		cout<<i<<" "<<tree[i]<<endl;
	}
	cout<<endl;*/

	while(q--)
	{
		int l,r;
		cin>>l>>r;

		cout<<sum_range_query(1,1,n,l,r);
	}
	return 0;

}