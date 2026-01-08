#include <iostream>
using namespace std;
void BinInsertSort(int a[], int n) {
    int i, j, low, high, mid, temp;
    for (i = 1; i < n; i++) {
        temp = a[i];
        low = 0; high = i - 1;
        while (low <= high) {
            mid = (low + high) / 2;
            if (a[mid] > temp) high = mid - 1;
            else low = mid + 1;
        }
        for (j = i - 1; j >= high + 1; j--) a[j + 1] = a[j];
        a[high + 1] = temp;
        cout << "第" << i << "趟: ";
        for (int k = 0; k < n; k++) cout << a[k] << " ";
        cout << "\n";
    }
}
int main() {
    int a[] = {25, 84, 21, 47, 15, 27, 68, 35, 20};
    int n = 9;
    cout << "折半插入排序过程：\n";
    BinInsertSort(a, n);
    return 0;
}