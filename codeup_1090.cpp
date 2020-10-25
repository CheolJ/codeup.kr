#include <stdio.h>
using namespace std;

int main(void){
    long long int a;
    int r,n,i;
    scanf("%lld %d %d", &a, &r, &n);
    for(i=0;i<n-1;i++) a *= r;
    printf("%lld", a);

    return 0;
}