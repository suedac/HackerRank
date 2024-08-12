#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<vector<int>> as;

    for (int i = 0; i < n; i++)
    {
        int a;
        vector<int> sok;
        cin >> a;
        for (int j = 0; j < a; j++)
        {
            int p;
            cin >> p;
            sok.push_back(p);
        }
        as.push_back(sok);
    }
    int s, k;
    for (int i = 0; i < q; i++)
    {
        cin >> s >> k;
        cout << as[s][k] << endl;
    }

    return 0;
}
