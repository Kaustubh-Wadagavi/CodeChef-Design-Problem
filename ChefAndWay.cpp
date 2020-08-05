#include <iostream>
#include <cmath>
#include <queue>
#define mod 1000000007
#define maxn 100000
using namespace std;

int n, k, a[maxn], i, answer[maxn];
double cache[maxn];
priority_queue<pair<double, int>> pq;

int main()
{
    cin >> n >> k;
    for (i = 0; i < n; i++)
        cin >> a[i];
    cache[0] = log(a[0]);
    answer[0] = a[0];
    pq.push(make_pair(-cache[0], 0));
    
    for (i = 1; i < n; i++)
    {
        while (i - pq.top().second > k)
            pq.pop();
        cache[i] = cache[pq.top().second] + log(a[i]);
        answer[i] = (answer[pq.top().second] * 1LL * a[i]) % mod;
        pq.push(make_pair(-cache[i], i));
    }
    cout << answer[n - 1] << endl;
    return 0;
}
