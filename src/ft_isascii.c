int	ft_isascii (int c)
{
	if (c > 0 && c <= 127)
		return (c);
	if (!c)
		return (128);
	return (0);
}
