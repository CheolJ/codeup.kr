#include <stdio.h>
using namespace std;

int main(void){
    long long int a;
    int r, d, n, i;
    scanf("%lld %d %d %d", &a, &r, &d, &n);
    for(i=0; i<n-1; i++) a = a*r +d;
    printf("%lld", a);
    return 0;
}