#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std;
#define endl "\n"
#define ll long long 
#define reus ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int main()
{
    reus;
    int n;
    cin >> n;
    int a[102], i, s = 0, c = 0, ts = 0;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        ts += a[i];
    }
    sort(a, a + n, greater<int>());
    ts = ts / 2;
    for (i = 0; i < n; i++)
    {
        s += a[i];
        c++;
        if (s > ts)
        {
            break;
        }
    }
    cout << c << endl;
    return 0;
}