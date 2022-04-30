#include <iostream>
 
using namespace std;

int main()
{
    int n, s, b, a, s1, b1,a1, i;
    double sum_s = 0.00, sum_b = 0.00, sum_a = 0.00;
    double sum_s1 = 0.00, sum_b1 = 0.00, sum_a1 = 0.00;
    double ans_s, ans_b, ans_a;
    char name[10000];
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        scanf("%s", name);
        scanf("%d%d%d", &s, &b, &a);
        scanf("%d%d%d", &s1, &b1, &a1);
        sum_s += s; sum_b += b; sum_a += a;
        sum_s1 += s1; sum_b1 += b1; sum_a1 += a1;
    }
    ans_s = (sum_s1/sum_s)*100.00;
    ans_b = (sum_b1/sum_b)*100.00;
    ans_a = (sum_a1/sum_a)*100.00;
    printf("Pontos de Saque: %.2lf %%.\n", ans_s);
    printf("Pontos de Bloqueio: %.2lf %%.\n", ans_b);
    printf("Pontos de Ataque: %.2lf %%.\n", ans_a);
    return 0;
}