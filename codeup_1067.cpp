#include <stdio.h>
using namespace std;

int main(){
    int a;
    scanf("%d", &a);

    if(a<0){
        printf("minus\n");
        if(a%2==0) printf("even\n");
        else printf("odd\n");
    }
    else{
        printf("plus\n");
        if(a%2==0) printf("even\n");
        else printf("odd\n");
    }
    return 0;
}