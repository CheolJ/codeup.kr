#include <stdio.h>
using namespace std;

int main(){
    int i, n;
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        if(i%3==0) printf("X ");
        else printf("%d ", i);
    }
    return 0;
}