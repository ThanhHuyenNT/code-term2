#include <iostream>
using namespace std;


void selection_sort(int a[10000], int n)
{
    int min, k=0;
    for (int i=0; i<n-1; ++i)
    {
        min = 1e9;
        for (int j=i; j<n; ++j)
            if (a[j]<min)
            {
                min = a[j];
                k = j;
            }
        swap(a[i], a[k]);
    }       
}
int main()
{
    int a[10000], n;
    cin >> n;
    for (int i=0; i<n; ++i)
        cin >> a[i];
    selection_sort(a, n);
    for (int i=0; i<n; ++i)
        cout<<a[i]<<" ";
}