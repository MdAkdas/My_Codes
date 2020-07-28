#include<iostream>
using namespace std;

void Lsort(int *a,int n)
{
    int low=0,mid;
    int high=n-1;
    while (mid<=high)
    {
        //cout<<"mid "<<mid<<endl;

       if (a[mid]==0){
        swap(a[mid],a[low]);
        low++;
        mid++;
    }
    else if (a[mid]==1){
       mid++;
   }
   else if (a[mid]==2){
       swap(a[mid],a[high]);
       high--;
   }

}
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    Lsort(arr,n);
    for(int j=0;j<n;j++)
    {
        cout<<arr[j]<<endl;
    }
    return 0;
}