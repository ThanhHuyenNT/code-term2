#include <iostream>

using namespace std;

void search(int a[10000], int k, int n)
{
    int mid, low, high;
    bool check;
    mid = n/2;
    low = 0;
    high = n-1;
    while (low<=high)
    {
        if (a[mid]==k)
        {
            cout<<mid+1;
            check = true;
            break;
        }
              
        else
        {   if (k>a[mid])
                low = mid+1;
            else
                high = mid-1;
            mid = (low+high)/2;
        }
    }
    if (check!=true)
        cout<<"NO";
}
int main()
{
    int a[10000];
    int n, k;
    cin >> n;
    cin >> k;
    for (int i=0; i<n; ++i)
        cin >> a[i];
    search(a, k, n);
}