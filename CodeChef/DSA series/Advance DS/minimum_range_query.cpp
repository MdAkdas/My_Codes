#include <iostream>
#include <climits>
using namespace std;
#define N 10000000
#define ll long long
ll  tree[N];

void build_Segment_Tree(ll  a[],ll  v,ll  Seg_start,ll  Seg_end)
{
	//cout<<"v "<<v<<" Seg_start "<<Seg_start<<" Seg_end "<<Seg_end<<endl;
	if(Seg_start==Seg_end)
		tree[v]=a[Seg_start];

	else
	{
		ll  mid= (Seg_start+Seg_end)/2;

		build_Segment_Tree(a,2*v,Seg_start,mid);
		build_Segment_Tree(a,2*v+1,mid+1,Seg_end);
		tree[v]=min(tree[2*v],tree[2*v+1]);
	}

}

ll  minimum_range_query(ll  v,ll  Seg_start,ll  Seg_end,ll  left,ll  right)
{
	//cout<<Seg_start<<" "<<Seg_end<<" "<<v<<endl;
	if(left<=Seg_start && right >=Seg_end)
	{
		//cout<<"v "<<v<<endl;
		return tree[v];
	}
	if(left > Seg_end || right < Seg_start)
	{
		return INT_MAX;
	}
	ll  mid = (Seg_start + Seg_end)/2;

	ll  Min_left = minimum_range_query(2*v,Seg_start,mid,left,right);
	ll  Min_right = minimum_range_query(2*v+1,mid+1,Seg_end,left,right);
	//cout<<Min_left<<"\t"<<Min_right<<endl;

	return min(Min_left,Min_right); 

}

void update_query(ll  v, ll  Seg_start,ll  Seg_end,ll  pos,ll  val)
{
	if(Seg_start==Seg_end)
	{
		tree[v]=val;
	}
	else
	{
		ll  mid= (Seg_start+Seg_end)/2;
		if(pos<=mid)
			update_query(2*v,Seg_start,mid,pos,val);

		else
			update_query(2*v+1,mid+1,Seg_end,pos,val);

		tree[v]= min(tree[2*v],tree[2*v+1]);
	}
}
int  main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long n,q;
	cin>>n>>q;
	//cout<<n<<" "<<q;
	long long a[n];

	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
	}
	ll  v=1;
	build_Segment_Tree(a,v,0,n-1);

	/*for(ll  i=1;i<4*n;i++)
	{
		cout<<i<<" "<<tree[i]<<endl;
	}
	cout<<endl;*/

	while(q--)
	{
		char c;
		ll  l,r;
		cin>>c>>l>>r;
		if(c=='q')
			cout<<minimum_range_query(1,1,n,l,r)<<endl;
		else
			update_query(1,1,n,l,r);
	}
	return 0;

}