#include <stdio.h>
#include "sdkconfig.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h"
#include "esp_spi_flash.h"


void app_main(void)
{
    printf("Beta Watch!\n");

    while(1)
    {
        vTaskDelay(pdMS_TO_TICKS( 100 ));
    }
}
