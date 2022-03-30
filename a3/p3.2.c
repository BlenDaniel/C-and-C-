#include <stdio.h>

int main(){

    char c = getchar();
    int n;
    
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf(" %c ", c - i);
    }
    return 0;
}