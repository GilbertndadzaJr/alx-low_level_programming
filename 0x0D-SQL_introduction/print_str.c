#include "main.h"

/**
 * print_str - writes the string in stdout
 *
 * @arguments: input string
 *
 * @buf: buffer pointer
 *
 * @ibuf: index to buffer pointer
 *
 * Return: on success 1
 */
int print_str(va_list arguments, char *buf, unsigned int ibuf)
{
	char *str;
	unsigned int i;
	char nil[] = "(null)";

	str = va_arg(arguments, char *);
	if (str == NULL)
	{
		for (i = 0; nil[i]; i++)
		{
			ibuf = handl_buf(buf, nil[i], ibuf);
		}
		return (6);
	}
	for (i = 0; str[i]; i++)
	{
		ibuf = handl_buf(buf, str[i], ibuf);
	}
	return (i);
}
