//2742. N개를 거꾸로 찍기

#include <stdio.h>

int main(){

    int a;

    scanf("%d", &a);

    for(int i = a; i > 0; --i){
        printf("%d\n", i);
    }

    return 0;

}