#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdint.h>

int FelixPrintTime(time_t* seconds, uint8_t* arg2, uint8_t arg3, int arg4);

int main() {

    time_t seconds;
    while(1) {
        uint8_t arg1[] = {1, 2}; 
        FelixPrintTime(&seconds, arg1, 2, 3);
        sleep(2);
    }
        

    return 0;
}

 int FelixPrintTime(time_t* seconds, uint8_t* arg2, uint8_t arg3, int arg4) {
    *seconds = time(NULL);
    printf("Seconds since January 1, 1970 = %ld\n", *seconds);
    return 1;
}
