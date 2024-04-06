/**
 * isNumeric- determine if a string has anything besides numbers, -, and +
 *
 * @str:      the string to check
 *
 * Return:    1 true; 0 false
 *
 */

int isNumeric(char *str)
{
	while (*str != '\0')
	{
		if ((*str < '0' || *str > '9') && (*str != '-') && (*str != '+'))
			return (0);
		str++;
	}
	return (1);
}
