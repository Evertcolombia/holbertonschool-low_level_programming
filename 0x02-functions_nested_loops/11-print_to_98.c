#include "holberton.h"

void print_to_98(int n)
{
	int counta, countb;

	for (counta = 0; counta  <= 9; counta++)
	{
		for (countb = 0; countb <= 9; countb++)
		{
			if(countb != 9)
			{
				_putchar(countb + '0');
				_putchar(44);
				_putchar(32);
			}
			else
			{
				_putchar(counta + '0');a
				_putchar(4
