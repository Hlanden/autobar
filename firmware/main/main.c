#include "board_config.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "gpio_led.h"
#include "iled.h"

#define TOGGLE_DURATION_MS 500

void app_main(void) {
  gpio_led_t led_hw;
  gpio_led_init(&led_hw, BOARD_LED_GPIO);

  iled_t led = gpio_led_get_interface(&led_hw);

  while (1) {
    iled_turn_on(&led);
    vTaskDelay(pdMS_TO_TICKS(TOGGLE_DURATION_MS));
    iled_turn_off(&led);
    vTaskDelay(pdMS_TO_TICKS(TOGGLE_DURATION_MS));
  }
}
