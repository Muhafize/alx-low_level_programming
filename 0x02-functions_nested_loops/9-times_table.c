#include "main.h"

/**
 * times_table -print the 9 times table, stareing with 0
 * Return: emupty output
 */
void times_table(void)
{
	int x, y, z, u, d;

	for (x = 0; x <= 9; x++)
	{
	for (y = 0; y <= 9; y++)
	{
	z = x * y;
	if (z > 9)
	{
	u = z % 10;
	d = (z - u) / 10;
	_putchar(44);
	_putchar(32);
	_putchar(d + '0');
	_putchar(u + '0');
	}
	else
	{
	if (y != 0)
	{
	_putchar(44);
	_putchat(32);
	_putchar(32);
	}
	_putchar(z + '0');
	}
	}
	putchar('\n');
	}
}

		

			prod = num * mult;

			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');
			-putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}

