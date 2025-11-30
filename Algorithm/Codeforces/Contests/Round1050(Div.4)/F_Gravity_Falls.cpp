#include <bits/stdc++.h>
using namespace std;

void Nuyoah() {
    int n;
    cin >> n;
    vector<vector<int>> arrays(n);
    int max_cols = 0;

    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        arrays[i].resize(k);
        for (int j = 0; j < k; j++) {
            cin >> arrays[i][j];
        }
        max_cols = max(max_cols, k);
    }

    vector<int> bottom_row;

    for (int col = 0; col < max_cols; col++) {
        int col_max = 0; 
        bool has_element = false;

        for (int i = 0; i < n; i++) {
            if (col < arrays[i].size()) {
                if (!has_element) {
                    col_max = arrays[i][col];
                    has_element = true;
                } else {
                    col_max = max(col_max, arrays[i][col]);
                }
            }
        }

        if (has_element) {
            bottom_row.push_back(col_max);
        }
    }

    for (int i = 0; i < bottom_row.size(); i++) {
        if (i > 0) cout << " ";
        cout << bottom_row[i];
    }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        Nuyoah();
    }
    return 0;
}