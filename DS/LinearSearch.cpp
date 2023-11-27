#include<iostream>
using namespace std;
int LinearSearch(int a[],int n,int k){
    for (int i = 0; i < n; i++)
    {
        if (a[i]==k)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int k;
    cin>>k;
    cout<<LinearSearch(a,n,k);
    
    return 0;
}