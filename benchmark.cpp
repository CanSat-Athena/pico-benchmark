#include <stdio.h>
#include <inttypes.h>
#include "pico/stdlib.h"
#include "hardware/timer.h"

#define TEST_LENGTH 1000

int main()
{
    stdio_init_all();

    while (true)
    {   
        uint32_t testLength_us = TEST_LENGTH * 1000;
        
        uint64_t currentTime = time_us_64();
        uint64_t finishTime = currentTime + testLength_us;

        uint64_t counter = 0;
        
        while(time_us_64() <= finishTime) counter++;

        printf("counter is %" PRId64 "\n", counter);

        sleep_ms(1000);
    }

    return 0;
}