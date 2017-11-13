char	*ft_strmap(char const *s, char (*f)(char))
{
	char			*map;
	unsigned int	i;

	i = 0;
	map = ft_strdup(s);
	if (!map || !s || !f)
		return (NULL);
	while (map[i])
	{
		map[i] = f(map[i]);
		i++;
	}
	return (map);
}
