/**
 * @file	util.h
 * @brief	deklaracije
 * @author	Filip Gojkovic
 * @date	16-5-2021
 */


#ifndef UTIL_H_
#define UTIL_H_


#include <stdint.h>
#include <string.h>
/// Od najveceg do najmanjeg
#define UP 0
/// Od najmanjeg do najveceg
#define DOWN 1

/**
 * Funkcija koja radi sort
 * @param array niz koji se sortira
 * @param array_length duzina niza koji se sortira
 * @param mode ascending/descending
 */
void Sort (int16_t *array, int16_t array_length, int8_t mode);

/**
 * Funkcija Check vrši proveru da li je uneti niz aritmetički
 * @param array niz koji se sortira
 * @return vrednosti TRUE ili FALSE, definisane kao makro konstante za vrednosti 1 i 0.
 */
int8_t Check (int16_t *array);

#endif /* UTIL_H_ */
