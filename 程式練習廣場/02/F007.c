#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf(" %d", &n);
    printf("%c:%d\n", n, n);
    n++;
    printf("%c:%d", n, n);
    return 0;
}
