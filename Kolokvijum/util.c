/**
 * @file	util.c
 * @brief	definicije
 * @author	Filip Gojkovic
 * @date	16-5-2021
 */

#include "util.h"

void Sort ( int16_t *array, int16_t array_length, int8_t mode)
{
	uint8_t i, j, min, temp;

	for (i = 0; i < array_length -1; i++)
	{

		min = i;
		for (j=i+1; j < array_length; j++)
			{
			if(mode)
			{
				if (array[j] < array[min])
					min = j;
			}
			else
			{
			if (array[j] > array[min])
				min = j;
			}
			}
	}
			temp = array[min];
			array[min] = array[i];
			array[i] = temp;

}

int8_t Check (int16_t *array)
{


}
