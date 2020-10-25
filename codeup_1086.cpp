#include <stdio.h>
using namespace std;

int main(void){
    long long int w,h,b;
    scanf("%lld %lld %lld", &w, &h, &b);
    printf("%.2lf MB", w*h*b/(8.0*1024*1024));
    return 0;
}