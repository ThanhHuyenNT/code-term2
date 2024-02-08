#include <iostream>

using namespace std;

void bubble_sort(int a[10000], int n)
{
    for (int i=1; i<n; ++i)
        for (int j=0; j<n-1; ++j)
            if(a[j]>a[j+1])
                swap(a[j], a[j+1]);
}
int main()
{
    int a[10000], n;
    cin >> n;
    for (int i=0; i<n; ++i)
        cin >> a[i];
    bubble_sort(a, n);
    for (int i=0; i<n; ++i) 
        cout<<a[i]<<" ";
}