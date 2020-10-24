#include <stdio.h>
using namespace std;

int main(){
    long long int a,b;
    scanf("%lld %lld", &a, &b);
    printf("%lld %lld %lld %lld %lld %.2lf\n", 
    a+b, a-b, a*b, (int)a/b, a%b, (float)a/b);
    return 0;
}