//Simply divide a number (<=20) into two parts. Any parts will not be bigger than 10.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    for(int cs=1; cs<=t; cs++)
    {
        int n;
        scanf("%d", &n);
        if(n<=10)   printf("0 %d\n", n);
        else        printf("10 %d\n", n-10);
    }
    return 0;
}
