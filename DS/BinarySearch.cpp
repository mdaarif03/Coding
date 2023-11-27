#include <iostream>
using namespace std;
int BinarySerach(int a[], int n, int k)
{
    int s = 0;
    int e = n;
    while (s <= n)
    {
        int mid = (s + e) / 2;
        for (int i = 0; i < n; i++)
        {
            if (a[mid] >= k)
            {
                return mid;
            }
            else if (a[mid] == k)
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int k;
    cin >> k;
    cout << BinarySerach(a, n, k);

    return 0;
}