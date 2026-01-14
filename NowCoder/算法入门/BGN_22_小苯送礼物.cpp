#include <bits/stdc++.h>
using namespace std;

struct node{
    int x, y;
    int zcld;
    int id;
};

bool cmp(node a, node b){
    if(a.zcld != b.zcld) return a.zcld > b.zcld;
    else if(a.y != b.y) return a.y > b.y;
    return a.id < b.id;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n, k;
    cin >> n >> k;
    vector<node> fans(n);
    
    for(int i = 0; i < n; i++){
        cin >> fans[i].x >> fans[i].y;
        fans[i].id = i;
        fans[i].zcld = fans[i].x + fans[i].y * 2;
    }
    
    nth_element(fans.begin(), fans.begin() + k - 1, fans.end(), cmp);
    
    vector<int> result;
    for(int i = 0; i < k; i++){
        result.push_back(fans[i].id + 1);
    }
    
    sort(result.begin(), result.end());
    
    for(int val : result) cout << val << " ";
    
    return 0;
}