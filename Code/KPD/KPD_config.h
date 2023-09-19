#ifndef KPD_CONFIG_H
#define KPD_CONFIG_H

#include <avr/io.h>
#include "STD_TYPES.h"

#define KEY_PRT PORTC
#define KEY_DDR DDRC
#define KEY_PIN PINC

u8 keypad[4][4] = {{'7', '4', '1', ' '}, {'8', '5', '2', '0'}, {'9', '6', '3', '='}, {'/', '*', '-', '+'}};

u8 colloc, rowloc;

#endif
