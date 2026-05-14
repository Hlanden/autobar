#pragma once

#include "driver/gpio.h"
#include "iled.h"

typedef enum {
  GPIO_LEVEL_LOW = 0,
  GPIO_LEVEL_HIGH = 1,
} gpio_level_t;

typedef struct {
  gpio_num_t pin;
} gpio_led_t;

void gpio_led_init(gpio_led_t *led, gpio_num_t pin);

iled_t gpio_led_get_interface(gpio_led_t *led);
