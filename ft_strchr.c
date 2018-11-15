char	*ft_strchr(const char *s, int c)
{
	if (!s)
		return ((char*)0);
	while (*s)
	{
		if (*s == (char)c)
			return ((char*)s);
		s++;
	}
	if (!c)
		return ((char*)s);
	return ((char*)0);
}
