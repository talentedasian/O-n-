#include <stdio.h>
#include "pico/stdlib.h"

void avg(int limit) { 
    float sum;
    for (int i = 0; i < limit; i++) {
        sum += (float)i + 0.723;
    }
    const float avg = sum / (float)10;
    printf("The average is %f ", avg);

}

int main(void) {
    stdio_init_all();


    sleep_ms(6000);
    int denoms[] = {1000000, 2000000, 7000000, 11000000, 20000000};
    
    for (int i = 0; i < 5; i++) {
        uint64_t start_time = get_absolute_time();
        avg(denoms[i]);
        uint64_t end_time = get_absolute_time();
    
        printf("Total take time in seconds for %d is: %ld\n", denoms[i], 
                (end_time - start_time) / (1000000));
    }
    
}
