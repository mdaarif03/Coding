#include<iostream>
using namespace std;
void printArray(int a[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
}
void sortOne(int a[],int n)
{
    int left = 0, right = n-1;
    while (left < right)
    {
        while (a[left]==0 && left<right)
        {
            left++;
        }
        while (a[right]==1 && left<right)
        {
            right--;
        }
        if (left<right)
        {
            swap(a[left], a[right]);
            left++;
            right--;
        }
        
    }
    
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
    sortOne(a,n);
    printArray(a,n);
    return 0;
}