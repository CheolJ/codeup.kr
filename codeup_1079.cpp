#include <stdio.h>
using namespace std;

int main(){
    char x;
    do{
        scanf("%c ", &x);
        printf("%c\n", x);
    }while(x!='q');
    return 0;
}