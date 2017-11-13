char	*ft_strtrim(char const *s)
{
	char			*str;
	unsigned int	i;

	str = ft_stralloc(s);
	if (str)
	{
		i = 0;
		while (*s)
		{
			if (*s != ' ' && *s != '\n' && *s != '\t')
				str[i++] = *s;
			s++;
		}
		str[i] = '\0';
	}
	return (str);
}
