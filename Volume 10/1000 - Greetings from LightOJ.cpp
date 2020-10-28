//Only return the sum of given two numbers, there is no other issues. Simply return the sum.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    for(int cs=1; cs<=t; cs++)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        printf("Case %d: %d\n", cs, a+b);
    }
    return 0;
}
