#include <stdio.h>
using namespace std;

int main(void){
    long long int h,b,c,s;
    scanf("%lld %lld %lld %lld", &h, &b, &c, &s);
    printf("%.1lf MB", h*b*c*s/(8.0*1024.0*1024.0));
    return 0;
}