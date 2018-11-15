char	*ft_strcpy(char *dest, const char *src)
{
	unsigned int	cursor;

	if (src)
	{
		cursor = 0;
		while (src[cursor])
		{
			dest[cursor] = src[cursor];
			cursor++;
		}
		dest[cursor] = '\0';
	}
	return (dest);
}
