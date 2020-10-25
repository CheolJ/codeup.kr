#include <stdio.h>
using namespace std;

int main(void){
    int a,i;
    scanf("%x", &a);
    for(i=1; i<16; i++){
        printf("%X*%X=%X\n", a, i, a*i);
    }
    return 0;
}