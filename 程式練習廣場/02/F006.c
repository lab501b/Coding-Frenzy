#include <stdio.h>
#include <stdlib.h>

int main(){
    char c;
    scanf(" %c", &c);
    printf("%c:%d\n", c, c);
    c++;
    printf("%c:%d", c, c);
    return 0;
}
