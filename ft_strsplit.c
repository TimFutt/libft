char	**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		start;
	char	**str;

	i = 0;
	j = 0;
	while (s[i++])
		if (s[i - 1] != c && (s[i] == c || !s[i]))
			j++;
	str = (char**)malloc(sizeof(*str) * j);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] != c && s[i])
			i++;
		if (i > start)
			str[j] = ft_strsub(s, start, i - start);
		j++;
	}
	return (str);
}

