#include <stdio.h>
using namespace std;

int main(){
    int a[100001]={};
    int i,n;
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d ", &a[i]);
    }
    for(i=n-1;i>=0;i--){
        printf("%d ", a[i]);
    }
    return 0;
}