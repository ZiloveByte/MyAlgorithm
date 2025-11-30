#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    unordered_set<string> learned;
    unordered_map<string, int> count;

    for (int i = 0; i < n; i++) {
        string word;
        cin >> word;

        if (learned.count(word)) continue;

        count[word]++;
        int needed = learned.size() + 1;

        if (count[word] >= needed) {
            learned.insert(word);
        }
    }

    cout << learned.size() << "\n";
    return 0;
}