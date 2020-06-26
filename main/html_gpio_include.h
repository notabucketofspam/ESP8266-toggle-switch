#ifndef HTML_GPIO_INCLUDE_H
#define HTML_GPIO_INCLUDE_H

#include <stddef.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <sys/unistd.h>
#include <sys/stat.h>

#include "esp_event.h"
#include "esp_event_loop.h"
#include "esp_err.h"
#include "esp_log.h"
#include "esp_system.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/event_groups.h"

#include "../build/include/sdkconfig.h"

// Fix for __ESP_FILE__ not defined
#ifndef __ESP_FILE__
  #define __ESP_FILE__ __FILE__
#endif

#endif // HTML_GPIO_INCLUDE_H
