int	ft_strlen (char *str)

{
	int counter;

	counter = 0;
	if (!str)
		return (0);
	while (*(str + counter) != '\0')
		counter++;
	return (counter);
}
