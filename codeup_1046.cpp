#include <stdio.h>
using namespace std;

int main(){

    long long int a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);
    printf("%lld\n%.1lf\n", a+b+c, (a+b+c)/3.0);

    return 0;
}