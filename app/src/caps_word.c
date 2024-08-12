#include <zmk/caps_word.h>

#include <stdbool.h>
#include <zephyr/kernel.h>

bool zmk_caps_word_state() {return last_state_of_caps_word;}