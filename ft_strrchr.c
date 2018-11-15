char	*ft_strrchr(const char *s, int c)
{
	int	lenght;

	lenght = 0;
	if (!s)
		return ((char*)0);
	while (s[lenght])
		lenght++;
	while (lenght >= 0)
	{
		if (s[lenght] == (char)c)
			return ((char*)&s[lenght]);
		lenght--;
	}
	return ((char*)0);
}
