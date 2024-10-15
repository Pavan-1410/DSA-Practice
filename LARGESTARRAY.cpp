#include <bits/stdc++.h>
using namespace std;

int main()
{
    // where n is size of array arr
    int n, max = 0;
    cin >> n;
    int arr[100000];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    cout<<max<<endl;

    return 0;
}