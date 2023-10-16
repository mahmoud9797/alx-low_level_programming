#include "unix.h"
/**
 *_getline - function to read input from stream
 *@fd: an integar reprsent file descriptor
 *@line: pointer of string which hold text
 *@n: is the number of bytes of test input
 *Return: the number of bytes read
 */
ssize_t _getline(int fd, char **line, size_t *n)
{
	char buffer[reading_buf_size];
	size_t r_bytes;
	size_t bytes_counter;
	char *temp;

	if (line == NULL || n == NULL)
	{
		return (-1);
	}
	if (*line == NULL)
	{
		*line = (char *)malloc(*n);
		if (*line == NULL)
		{
			return (-1);
		}
	}
	while ((r_bytes = read(fd, buffer, sizeof(buffer) - 1)) > 0)
	{
		if (bytes_counter + r_bytes + 1 > *n)
		{
			*n *= 2;
			temp = _realloc(*line, *n);
			if (temp == NULL)
			{
				return (-1);
			}
			*line = temp;
		}
		bytes_counter += r_bytes;
		_strcat(*line, buffer);

		if (_strchr(buffer, '\0') == NULL)
		{
			break;
		}
	}
	return (bytes_counter);
}
