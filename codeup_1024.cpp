#include <stdio.h>
using namespace std;

int main(){
    int i;
    char d[30]; //최대 30문자를 저장할 수 있는 저장 공간 준비. 마지막에 널문자 고려해야함
    scanf("%s", d); //그 공간에 키보드로 입력된 내용을 저장. 단 공백이 있으면 거기까지만 입력됨.
    for(i=0; d[i]!='\0'; i++) //저장된 내용을 하나하나씩 검사해서 널문자가 아닐 동안 아래 실행
    {   
        printf("\'%c\'\n", d[i]);
    }

    return 0;
}