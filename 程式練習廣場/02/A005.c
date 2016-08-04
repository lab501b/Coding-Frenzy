#include <stdio.h>
#include <stdlib.h>

int main(){
    unsigned short value = 0;
    while(1){
        value++;
        if(value == 0){
            value--;
            break;
        }

    }
    printf("%u\n", value);
    value++;
    printf("%u", value);
    return 0;
}
