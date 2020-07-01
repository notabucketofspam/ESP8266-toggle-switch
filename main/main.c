#include "../html_gpio_core.h"

#ifdef __cplusplus
extern "C" {
#endif

void app_main(void) {
  ESP_LOGI(TAG, "app_main init");
  core_config_t core_config = CORE_DEFAULT_CONFIG();
  ESP_ERROR_CHECK(setup_core(&core_config));
  ESP_LOGI(TAG, "app_main OK");
}

#ifdef __cplusplus
}
#endif
