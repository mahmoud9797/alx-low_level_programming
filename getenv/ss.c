#include "unix.h"
char _tolower(char x)
{
	if (x >= 65 && x <= 90)
	{
		return (x + 97 - 65);
	}
	else
		return (x);
}
