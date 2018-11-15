char	*ft_strstr(const char *haystack, const char *needle)
{
	int	cursor;
	int	counter_char;
	int	needle_lenght;

	cursor = 0;
	needle_lenght = 0;
	if (!needle)
		return ((char*)0);
	if (!(*needle))
		return ((char*)haystack);
	while (*(needle + needle_lenght))
		needle_lenght++;
	while (*(haystack + cursor))
	{
		counter_char = 0;
		while (haystack[cursor + counter_char] == needle[counter_char])
		{
			counter_char++;
			if (counter_char == needle_lenght)
				return ((char*)(haystack + cursor));
		}
		cursor++;
	}
	return ((char*)0);
}
