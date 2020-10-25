#include <stdio.h>
using namespace std;

int main(void){
    int n,i,j;
    int a[24]={};
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d ", &j);
        a[j-1] = a[j-1] + 1;
    }
    for(i=0; i<23; i++) printf("%d ", a[i]);
    return 0;
}