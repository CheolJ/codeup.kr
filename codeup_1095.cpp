#include <stdio.h>
using namespace std;

int main(void){
    int n_min, n, i;
    int a[10001]={};
    scanf("%d", &n);
    for(i=0;i<n;i++) scanf("%d", &a[i]);
    n_min = a[0];
    for(i=1;i<n;i++){
        if(n_min>a[i]) n_min = a[i];
    }
    printf("%d", n_min);
    return 0;
}