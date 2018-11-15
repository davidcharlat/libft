char	*ft_strcat (char *dest, const char *src)	
{
	int	cursor;
	int	dest_lenght;

	cursor = 0;
	dest_lenght = 0;
	if (!src)
		return (dest);	
	while (dest[dest_lenght])
		dest_lenght++;
	while (src[cursor])
	{	
		dest[dest_lenght+cursor] = src[cursor];
		cursor++;
	}
	dest[dest_lenght+cursor] = 0;
	return (dest);
}
