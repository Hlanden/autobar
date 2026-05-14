#pragma once


typedef struct {
  void (*turn_on)(void *ctx);
  void (*turn_off)(void *ctx);
} iled_ops_t;

typedef struct {
  const iled_ops_t *ops;
  void *ctx;
} iled_t;

static inline void iled_turn_on(const iled_t *led) {
  led->ops->turn_on(led->ctx);
}
static inline void iled_turn_off(const iled_t *led) {
  led->ops->turn_off(led->ctx);
}
