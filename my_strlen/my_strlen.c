/*
** ETNA PROJECT, $YEAR
** $NAME_OF_THE_PROJECT
** File description:
** 		No file there, just an etna header example
*/



int my_strlen(const char *str)
{
    int len;

	len = 0;
	while(str[len] != '\0')
	{
		len = len + 1;
	}
	return (len);
}