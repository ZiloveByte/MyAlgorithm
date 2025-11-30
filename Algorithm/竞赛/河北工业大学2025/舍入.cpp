#include <bits/stdc++.h>
using namespace std;

void zilove(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    long long currentIndex = 0;
    for(int k = 0; k < n; k++){
        long long count = a[k];

        long long fullGroups = count / 2;
        long long remainder = count % 2;

        long long sum = fullGroups * 25LL;
        if (remainder) {
            if (currentIndex % 2 == 0)
                sum += 12;
            else
                sum += 13;
        }

        cout << sum << " ";

        currentIndex += a[k];
    }
    cout << endl;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    zilove();
    return 0;
}