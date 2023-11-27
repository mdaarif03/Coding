#include <iostream>
using namespace std;
void rev(int a[], int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j < n / 2; j++)
        {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
}

void display(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
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
    rev(a, n);
    display(a, n);

    return 0;
}