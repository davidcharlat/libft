int	ft_strcmp(const char *s1, const char *s2)
{
	int cursor;

	cursor = 0;
	if (!s1 && !s2)
		return (0);
	if (!s1)
		return (-1024);
	if (!s2)
		return (1023);
	while (*(s1 + cursor) && *(s1 + cursor) == *(s2 + cursor))
		cursor++;
	return ((int)*(s1 + cursor) - (int)*(s2 + cursor));
}
