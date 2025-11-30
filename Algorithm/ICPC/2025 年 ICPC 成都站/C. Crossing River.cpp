#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ull = unsigned long long;
struct Ps
{
    ull time, id;
};
pair<ull, vector<vector<ull>>> simulate(ull n, ull m, ull k,
                                              vector<Ps> &L, vector<Ps> &R,
                                              ull start_pos)
{
    vector<vector<ull>> sch;
    ull lp = 0, rp = 0;
    ull t = 0;
    ull pos = start_pos;

    auto process = [&](bool is_left)
    {
        auto &list = is_left ? L : R;
        ull &ptr = is_left ? lp : rp;
        ull max_ptr = is_left ? n : m;
        if (ptr < max_ptr)
        {
            ull bt = max(t, (ull)list[ptr].time);
            sch.push_back({(ull)bt, is_left ? 0 : 1, list[ptr].id});
            t = bt + k;
            ptr++;
            pos = is_left ? 1 : 0;
        }
        else
        {
            t += k;
            pos = is_left ? 1 : 0;
        }
    };

    while (lp < n || rp < m)
    {
        process(pos == 0);
    }

    return {sch.empty() ? 0 : (ull)sch.back()[0] + k, sch};
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ull n, m, k;
    cin >> n >> m >> k;
    vector<Ps> L(n), R(m);
    for (ull i = 0; i < n; i++)
    {
        cin >> L[i].time;
        L[i].id = i + 1;
    }
    for (ull i = 0; i < m; i++)
    {
        cin >> R[i].time;
        R[i].id = i + 1;
    }
    sort(L.begin(), L.end(), [](auto &a, auto &b)
         { return a.time < b.time; });
    sort(R.begin(), R.end(), [](auto &a, auto &b)
         { return a.time < b.time; });

    auto [t0, s0] = simulate(n, m, k, L, R, 0);
    auto [t1, s1] = simulate(n, m, k, L, R, 1);

    cout << (t0 <= t1 ? t0 : t1) << '\n';
    for (auto &e : (t0 <= t1 ? s0 : s1))
        cout << e[0] << " " << e[1] << " " << e[2] << '\n';
}
