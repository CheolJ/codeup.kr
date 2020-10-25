#include <stdio.h>
using namespace std;

int main(){
    int r,g,b, i,j,k;
    scanf("%d %d %d", &r, &g, &b);
    for(i=0;i<r;i++){
        for(j=0;j<g;j++){
            for(k=0;k<b;k++) printf("%d %d %d\n", i, j, k);
        }
    }
    printf("%d", r*g*b);
    return 0;
}