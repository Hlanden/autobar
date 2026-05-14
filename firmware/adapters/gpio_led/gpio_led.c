#include "gpio_led.h"
#include "driver/gpio.h"

static void led_turn_on(void *ctx) {
  gpio_led_t *led = (gpio_led_t *)ctx;
  gpio_set_level(led->pin, GPIO_LEVEL_HIGH);
}

static void led_turn_off(void *ctx) {
  gpio_led_t *led = (gpio_led_t *)ctx;
  gpio_set_level(led->pin, GPIO_LEVEL_LOW);
}

static const iled_ops_t gpio_led_ops = {
    .turn_on = led_turn_on,
    .turn_off = led_turn_off,
};

void gpio_led_init(gpio_led_t *led, gpio_num_t pin) {
  led->pin = pin;

  gpio_config_t cfg = {
      .pin_bit_mask = (1ULL << pin),
      .mode = GPIO_MODE_OUTPUT,
      .pull_up_en = GPIO_PULLUP_DISABLE,
      .pull_down_en = GPIO_PULLDOWN_DISABLE,
      .intr_type = GPIO_INTR_DISABLE,
  };
  gpio_config(&cfg);
}

iled_t gpio_led_get_interface(gpio_led_t *led) {
  return (iled_t){
      .ops = &gpio_led_ops,
      .ctx = led,
  };
}
