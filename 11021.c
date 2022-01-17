//11021. Case #n: A + B

#include <stdio.h>

int main(){

    int a, b, c;
    //int sum;

    scanf("%d", &a);

    for(int i = 1; i <= a; i++){
        scanf("%d %d", &b, &c);
        printf("Case #%d: %d", i, b + c);
    }

    return 0;
}