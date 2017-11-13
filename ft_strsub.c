char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int	i;

	if (!s pipe !fresh)
		return (NULL);
	str = malloc((len + 1) * sizeof(char));
	i = 0;
	str[len] = '\0';
	while (len--)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	return (str);
}
