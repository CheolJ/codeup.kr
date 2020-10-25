#include <stdio.h>
using namespace std;

int main(void){
    int a, sum=0, n=1;
    scanf("%d", &a);
    do{
        sum += n++;
    }while(sum<a);
    printf("%d", sum);
    return 0;
}