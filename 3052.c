#include <stdio.h>

int main(){

    int a;//, j;
    int arr[10];

    for(int i = 0; i < 10; i++){
        scanf("%d", arr[i]);
        arr[i++];
        //a = arr[i] % 42;

        //if(arr[i] % 42 == a){
        //    printf("%d", j);
        //}
    }

    return 0;
}