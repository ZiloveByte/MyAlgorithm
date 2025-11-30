#include <bits/stdc++.h>
using namespace std;

int n, k;
int flag1[1000010], flag2[1000010];
int lg[1000010];
int main()
{
    scanf("%d%d", &n, &k);
    for(int i = 2; i <= n; i++)
        lg[i] = lg[i >> 1] + 1;
    for(int i = 1; i <= n; i++)
        flag1[i] = 1;
    for(int i = 1; i < n; i++)
    {
        int cha = n - i;
        if(lg[cha] + 1 <= k)
        {
            flag1[i] = 0;
            flag2[i] = 1;
            k -= lg[cha] + 1;
        }
        if(k == 0)
            break;
    }
    if(k > 0)
    {
        printf("-1");
        return 0;
    }
    for(int i = 1; i <= n; i++)
        if(flag1[i])
            printf("%d ", i);
    for(int i = n; i >= 1; i--)
        if(flag2[i])
            printf("%d ", i);
    
    return 0;
}
