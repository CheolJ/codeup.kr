#include <stdio.h>
using namespace std;

int main(){
     int i, n, sum=0;
     scanf("%d", &n);
     for(i=0; i<=n; i++){
         if(i%2==0) sum += i;
     }
     printf("%d\n", sum);
    return 0;
}