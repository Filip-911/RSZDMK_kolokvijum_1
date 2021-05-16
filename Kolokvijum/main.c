/**
 * @file	main.c
 * @brief	Glavni
 * @author	Filip Gojkovic
 * @date	16-5-2021
 */

#include "../PIN/pin.h"
#include "../usart/usart.h"
#include <stdio.h>
#include <util/delay.h>
#include <string.h>
#include "util.h"

#define MAX_ELEMENATA 20

int main ()

{
	usartInit(9600);
	pinInit(PORT_B, DIODE_PIN, OUTPUT);
	timer0InteruptInit();

	char ispis [50];
	uint8_t i=0, duzina, niz[MAX_ELEMENATA], broj [3];


	while(1)
	{

		usartPutString_P(PSTR("\r \n"));
		usartPutString_P(PSTR("Unesite broj elemenata niza : "));

		while(!usartAvailable());
		_delay_ms(50);

		usartGetString(broj);
		usartPutString(broj);

		usartPutString_P(PSTR("\r \n"));

		pinSetValue(PORT_B, DIODE_PIN, HIGH);

		while (i < broj)
		{
		sprintf( ispis , " Unesite elemnt broj %d : "  , i+1 );
		usartPutString(ispis);

		while(!usartAvailable());
		_delay_ms(10);

		usartGetChar(niz[i]);
		usartPutChar(niz[i]);
		usartPutString_P(PSTR("\r \n"));

		i++;
		}
		pinSetValue(PORT_B, DIODE_PIN, LOW);

		Sort(niz, broj, DOWN);
		Check(niz);
	}

	return 0;
}
