#include "unix.h"
/*_strcmp - function to compare two charcter strings
 *@s1: string of charcters
 *@s2: string of charcters to be compared with s1
 *Return: an integar value according to equilty of charchters of two string on accii table
 */
int _strcmp(char *s1, char *s2)
{
        int i = 0;

        while (s1[i] && s2[i])
        {
        if (_tolower(s1[i]) ==  _tolower(s2[i]))
        {
                i++;
        }
        else 
        {
                break;
        }
        }
        if (_tolower(s1[i]) == _tolower(s2[i]))
        {
                return (0);
        }
        else if (_tolower(s1[i]) < _tolower(s2[i]))
        {
                return (-1);
        }
        else
		return (-1);
}
/*_strcat - to concatenate to strings
 *@d: destination string
 *@s: source string
 *Return: destination string 
 */
char _strcat(char *d, char *s)
{
	int i, j;

	for (i = 0, d[i], i++);
	for (j = 0, s[j], j++)
	{
		d[i + j] = s[j];
	}
	d[j + i] = '\0';
	return (d);
}
