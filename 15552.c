//15552. 빠른 A + B

#include <stdio.h>

int main(){

    int a, b, c;

    scanf("%d", &a);

    for(int i = 0; i < a; i++){
        scanf("%d %d", &b, &c);
        printf("%d", b + c);
    }

    

    return 0;
}