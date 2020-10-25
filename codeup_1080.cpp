#include <stdio.h>
using namespace std;

int main(){
    int a, n=1, sum=0;
    scanf("%d", &a);
    do{
        sum += n;
        if(sum>=a){
            printf("%d", n);
            break;
        }
    }while(n++>0);
    return 0;
}