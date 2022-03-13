#ifndef DEVICE_NAME
#define DEVICE_NAME "DIY900 PWMP"
#endif

#define USE_ANALOG_VBAT
#define CRSF_RCVR_NO_SERIAL

// GPIO pin definitions
// same as DIY_900_RX_ESP8285_SX127x except with no serial/button and PWM outputs
#define GPIO_PIN_NSS            15
#define GPIO_PIN_DIO0           4
#define GPIO_PIN_MOSI           13
#define GPIO_PIN_MISO           12
#define GPIO_PIN_SCK            14
#define GPIO_PIN_RST            2
//#define GPIO_PIN_RCSIGNAL_RX -1 // does not use UART
//#define GPIO_PIN_RCSIGNAL_TX -1
#define GPIO_PIN_LED_RED        16
#if defined(DEBUG_LOG)
#define GPIO_PIN_PWM_OUTPUTS    {0, 5, 9, 10}
#else
#define GPIO_PIN_PWM_OUTPUTS    {0, 1, 3, 5, 9, 10}
#endif

// Vbat = (adc - ANALOG_VBAT_OFFSET) / ANALOG_VBAT_SCALE
// OFFSET is needed becauae ESPs don't go down to 0 even if their ADC is grounded
#if !defined(ANALOG_VBAT_OFFSET)
#define ANALOG_VBAT_OFFSET      12
#endif
#if !defined(ANALOG_VBAT_SCALE)
#define ANALOG_VBAT_SCALE       410
#endif

#define POWER_OUTPUT_FIXED 15 //MAX power for 900 RXes