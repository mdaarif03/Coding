#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int counter = 1;
    while (n < counter)
    {
        for (int i = 0; i < n - counter; i++)
        {
            if (a[i] > a[i + 1])
            {
                int tem = a[i];
                a[i] = a[i + 1];
                a[i + 1] = tem;
            }
        }
        counter++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}