#include <iostream>
#include<vector>
using namespace std;

bool isArraySorted(int a[], int n)
{
    if(n == 1)
        return true;

    if(a[0] < a[1] && isArraySorted(a+1, n-1))
    {
            return true;
    }
    else
    return false;
}

int main()
{
    int n, z;
    cout<<"Enter the size of element: ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements"<<endl;
    
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if(isArraySorted(a, n))
        cout<<"Sorted."<<endl;
    else
        cout<<"Not Sorted."<<endl;

    return 0;

}