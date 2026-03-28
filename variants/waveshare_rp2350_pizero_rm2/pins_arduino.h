#pragma once

/* Waveshare RP2350 PiZero - documentation
 * https://www.waveshare.com/wiki/RP2350-PiZero
 * https://files.waveshare.com/wiki/RP2350-PiZero/RP2350-PiZero.pdf
 *
 * combined with crappy uHat I made
 * https://github.com/Lannakin/rpi-pico-pizero-wireless-uhat-rpi-radio-module-2
 * say it 5 times fast, i dare you. you won't. nerd.
 */

/* PINOUT
Raspberry Pi pinout: https://pinout.xyz/
RP2350B datasheet: https://pip-assets.raspberrypi.com/categories/1214-rp2350/documents/RP-008373-DS-2-rp2350-datasheet.pdf?disposition=inline#page=19

|RPI DEFAULT |PIN NAME  |PIN NUMBER  |PIN NAME |RPI DEFAULT
-------------------------------------------------------------------------------
                        +----+----+
                   3v3  | 1  |  2 |  VBUS
    I2C_SDA      GPIO2  | 3  |  4 |  VBUS
    I2C_SCL      GPIO3  | 5  |  6 |  GND
    GPCLK0      GPIO14  | 7  |  8 |  GPIO4      UART_RX
                   GND  | 9  | 10 |  GPIO5      UART_TX
                GPIO17  | 11 | 12 |  GPIO18     PCM_CLK
                GPIO27  | 13 | 14 |  GND
                GPIO22  | 15 | 16 |  GPIO23
                   3v3  | 17 | 18 |  GPIO24
    SPI_MOSI    GPIO11  | 19 | 20 |  GND
    SPI_MISO    GPIO12  | 21 | 22 |  GPIO25
    SPI_SCLK    GPIO10  | 23 | 24 |  GPIO8      SPI_CS0
                   GND  | 25 | 26 |  GPIO7      SPI_CS1
    EEPROM_SDA   GPIO0  | 27 | 28 |  GPIO1      EEPROM_SCL
                GPIO15  | 29 | 30 |  GND
                 GPIO6  | 31 | 32 |  GPIO9      PWM0
    PWM1        GPIO13  | 33 | 34 |  GND
    PCM_FS      GPIO19  | 35 | 36 |  GPIO16
                GPIO26  | 37 | 38 |  GPIO20     PCM_DIN
                   GND  | 39 | 40 |  GPIO21     PCM_DOUT
                        +----+----+
GPIO17 - I2C0_SCL
GPIO24 - I2C0_SDA

SPI0_MOSI 19
SPI0_MISO 16
SPI0_SCK 22
SPI0_CS 21
 */

#define PICO_RP2350A 0  // RP2350B

/* NOTE:
 * CYW43 pin assignments are 64 + WL_GPIO number, and then cyw43_wrappers.h
 * subtracts the 64.  I think.
 * WL_GPIO0 = 64u
 * WL_GPIO1 = 65u
 * WL_GPIO2 = 66u
 */
#define WL_LED1     (64u) // WL_GPIO0
#define WL_LED2     (66u) // WL_GPIO2
// LED_BUILTIN
#define PIN_LED     WL_LED1
#define LED_BUILTIN PIN_LED

// Serial
#define PIN_SERIAL1_TX (4u)
#define PIN_SERIAL1_RX (5u)

#define PIN_SERIAL2_TX (8u)
#define PIN_SERIAL2_RX (9u)

// SPI
#define PIN_SPI0_MISO (16u)
#define PIN_SPI0_MOSI (19u)
#define PIN_SPI0_SCK  (22u)
#define PIN_SPI0_SS   (21u)

#define PIN_SPI1_MISO (12u)
#define PIN_SPI1_MOSI (11u)
#define PIN_SPI1_SCK  (10u)
#define PIN_SPI1_SS   (8u)

// Wire
#define PIN_WIRE0_SDA (17u)
#define PIN_WIRE0_SCL (24u)

#define PIN_WIRE1_SDA (2u)
#define PIN_WIRE1_SCL (3u)

#define SERIAL_HOWMANY (3u)
#define SPI_HOWMANY    (2u)
#define WIRE_HOWMANY   (2u)

#include "../generic/common.h"
