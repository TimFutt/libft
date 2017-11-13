int	ft_strequ(char const *s1, char const *s2)
{
	int i;

 	i = 0;
	if (!s1 || !s2)
		return (0);
	while (s1[i] && *s2[i])
	{
		if (*s1 != *s2)
			return (0);
		i++;
	}
	return (1);
}
