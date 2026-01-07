#include <iostream>
using namespace std;
struct IndexItem {
    int key;
    int link;
};
void BlockSearch(int a[], IndexItem idx[], int b_num, int k) {
    int i = 0;
    cout << "1. 确定所在分块：\n";
    while (i < b_num && k > idx[i].key) {
        cout << "检查索引块" << i + 1 << " (最大值" << idx[i].key << ")，关键字更大，继续...\n";
        i++;
    }
    if (i < b_num) {
        cout << "关键字小于等于索引块" << i + 1 << "的最大值" << idx[i].key << "，进入该块查找\n";
        cout << "2. 块内顺序查找：";
        int start = idx[i].link;
        for (int j = start; j < start + 5; j++) {
            cout << a[j] << " ";
            if (a[j] == k) {
                cout << "\n找到关键字" << k << "，下标为" << j << "\n";
                return;
            }
        }
    }
    cout << "\n未找到\n";
}
int main() {
    int a[] = {8, 14, 6, 9, 10, 22, 34, 18, 19, 31, 40, 38, 54, 66, 46, 71, 78, 68, 80, 85, 100, 94, 88, 96, 87};
    IndexItem idx[] = {{14, 0}, {34, 5}, {66, 10}, {85, 15}, {100, 20}};
    cout << "分块查找关键字46：\n";
    BlockSearch(a, idx, 5, 46);
    return 0;
}