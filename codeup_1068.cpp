#include <stdio.h>
using namespace std;

int main(){
    int a, b, c;
    scanf("%d", &a);
    if(a<90){
        if(a<70){
            if(a<40) printf("D\n");
            else printf("C\n");
        }
        else printf("B\n");
    }
    else printf("A\n");

    return 0;
}