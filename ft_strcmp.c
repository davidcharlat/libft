int	ft_strcmp(const char *s1, const char *s2)
{
	int cursor;

	cursor = 0;
	while (*(s1 + cursor) && *(s1 + cursor) == *(s2 + cursor))
		cursor++;
	return ((int)*(s1 + cursor) - (int)*(s2 + cursor));
}
