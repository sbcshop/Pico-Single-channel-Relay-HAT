
/**
 * Project   :- PICO ONE CHANNEL RELAY HAT
 * Developed :- SB_COMPONENTS
 * Date      :- 21/06/2021
 * Firmware  :- Demo code for PICO Relay HAT
 */
#include <stdio.h>
#include "pico/stdlib.h"
const uint relay_PIN = 6;

int main()
{
    gpio_init(relay_PIN);
    gpio_set_dir(relay_PIN, GPIO_OUT);
    stdio_init_all();
    while(1)
    {
        gpio_put(relay_PIN, 1);
        puts("Relay On\n");
        sleep_ms(1000);
        gpio_put(relay_PIN, 0);
        puts("Relay Off\n");
        sleep_ms(1000);
    }
    return 0;
}
