#include <stdio.h>
#include<math.h>

int main()
{
    double n, ans1, ans2;
    scanf("%lf", &n);
    
    ans1 = n/log(n);
    ans2 = (1.25506)*(n/log(n));

    printf("%.1lf %.1lf\n", ans1, ans2);
    return 0;
}