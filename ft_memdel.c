
void	ft_memdel(oid **ap)
{
	if(ap)
	(
		free(*ap);
		*ap = NULL;
	)
}
