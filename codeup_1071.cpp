#include <stdio.h>
using namespace std;

int main(){
    int n;
    reload:
    scanf("%d", &n);
    if(n!=0){
        printf("%d\n", n);
        goto reload;
    }
    return 0;
}