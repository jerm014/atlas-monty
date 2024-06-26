#include "monty.h"

/**
* tokenize- make a string into tokens
*
* @str:     the string to tokenize
* @d:       deliminator
*
* Return:   an array of pointes to strings
*
*/

char **tokenize(char *str, char *d)
{
	char *part = NULL, *copy = NULL;
	char **result;
	int i = 0, k = 0;
	size_t j = 0;

	if (!str)
		return (NULL);
/* count the delimiters to count the tokens*/
	while (j < strlen(str))
	{
		if (str[j] == d[0])
			i++;
		 j++;
	}
	i++;

/* make room for pointers to tokens (and for the NULL at the end) */
	result = malloc(sizeof(char *) * (++i));
	if (result == NULL)
		return (NULL);

/* init strtok with a duplicate of str */
	copy = strdup(str);
	part = strtok(copy, d);
	while (part)
	{
		result[k++] = strdup(part);
		part = strtok(NULL, d);
	}
/* mark the end of the array with a NULL */
	result[k] = NULL;
	free(copy);
	/*free(part);*/

	return (result);
}
