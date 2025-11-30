#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct Member {
    string name, pos;
    ll bg, lv;
    int input_order;
};

int getPosPriority(string position) {
    if (position == "BangZhu") return 0;
    if (position == "FuBangZhu") return 1;
    if (position == "HuFa") return 2;
    if (position == "ZhangLao") return 3;
    if (position == "TangZhu") return 4;
    if (position == "JingYing") return 5;
    if (position == "BangZhong") return 6;
    return 7;
}

bool cmp_by_bg(const Member& a, const Member& b) {
    if (a.bg != b.bg) {
        return a.bg > b.bg;
    }
    return a.input_order < b.input_order;
}

bool cmp_final(const Member& a, const Member& b) {
    int pri_a = getPosPriority(a.pos);
    int pri_b = getPosPriority(b.pos);
    
    if (pri_a != pri_b) {
        return pri_a < pri_b;
    }
    if (a.lv != b.lv) {
        return a.lv > b.lv;
    }
    return a.input_order < b.input_order;
}

void solve() {
    int n;
    cin >> n;
    vector<Member> all_members;
    for (int i = 1; i <= 3; i++) {
        Member m;
        cin >> m.name >> m.pos >> m.bg >> m.lv;
        m.input_order = i;
        all_members.push_back(m); 
    }

    vector<Member> to_reassign;
    for (int i = 4; i <= n; i++) {
        Member m;
        cin >> m.name >> m.pos >> m.bg >> m.lv;
        m.input_order = i;
        to_reassign.push_back(m);
    }

    sort(to_reassign.begin(), to_reassign.end(), cmp_by_bg);

    for (int i = 0; i < to_reassign.size(); i++) {
        if (i < 2) {
            to_reassign[i].pos = "HuFa";
        } else if (i < 6) {
            to_reassign[i].pos = "ZhangLao";
        } else if (i < 13) {
            to_reassign[i].pos = "TangZhu";
        } else if (i < 38) {
            to_reassign[i].pos = "JingYing";
        } else {
            to_reassign[i].pos = "BangZhong";
        }
    }
    for (auto& member : to_reassign) {
        all_members.push_back(member);
    }

    sort(all_members.begin(), all_members.end(), cmp_final);

    for (auto& member : all_members) {
        cout << member.name << " " << member.pos << " " << member.lv << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}