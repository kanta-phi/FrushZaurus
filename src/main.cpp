#include <Arduino.h>
#include "MPU6050.h"
#include <Adafruit_NeoPixel.h>
#include "gameManager.h"

Adafruit_NeoPixel pixels(NUM_PIXELS, LED_PIN, NEO_GRB + NEO_KHZ800);

void setup() {
#if defined(__AVR_ATtiny85__) && (F_CPU == 16000000)
    clock_prescale_set(clock_div_1);
#endif
    pixels.begin();
    pixels.setBrightness(LED_BRIGHTNESS);
}

void loop() {

}