#pragma once

/* Waveshare RP2350 PiZero
 * https://www.waveshare.com/wiki/RP2350-PiZero
 * https://files.waveshare.com/wiki/RP2350-PiZero/RP2350-PiZero.pdf
 *
 * combined with crappy uHat I made
 * https://github.com/Lannakin/rpi-pico-pizero-wireless-uhat-rpi-radio-module-2
 * say it 5 times fast, i dare you
 * you won't
 * nerd.
 */

#define PICO_RP2350A 0  // RP2350B

/* NOTE:
 * UHAT LEDS
 * LED1: LED_WLGP0 WL_GPIO0
 * LED2: LED_WLGP2 WL_GPIO2
 * CYW43 pin assignments are 64 + WL_GPIO number, and then cyw43_wrappers.h
 * subtracts the 64.  I think.
 * WL_GPIO0 = 64u
 * WL_GPIO1 = 65u
 * WL_GPIO2 = 66u
 */
#define WL_LED1     (64u)
#define WL_LED2     (66u)
// LED_BUILTIN
#define PIN_LED     WL_LED1
#define LED_BUILTIN PIN_LED
// Serial
#define PIN_SERIAL1_TX (0u)
#define PIN_SERIAL1_RX (1u)

#define PIN_SERIAL2_TX (8u)
#define PIN_SERIAL2_RX (9u)

// SPI
#define PIN_SPI0_MISO (16u)
#define PIN_SPI0_MOSI (19u)
#define PIN_SPI0_SCK  (18u)
#define PIN_SPI0_SS   (17u)

#define PIN_SPI1_MISO (12u)
#define PIN_SPI1_MOSI (15u)
#define PIN_SPI1_SCK  (14u)
#define PIN_SPI1_SS   (13u)

// Wire
#define PIN_WIRE0_SDA (4u)
#define PIN_WIRE0_SCL (5u)

#define PIN_WIRE1_SDA (26u)
#define PIN_WIRE1_SCL (27u)

#define SERIAL_HOWMANY (3u)
#define SPI_HOWMANY    (2u)
#define WIRE_HOWMANY   (2u)

#include "../generic/common.h"
