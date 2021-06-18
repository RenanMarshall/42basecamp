int	ft_strlen(char *str);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	index_src;
	unsigned int	len_dest;
	unsigned int	len_src;

	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	index_src = 0;
	if (size <= len_dest)
		return (size + len_src);
	while (src[index_src] && size > (len_dest + 1))
	{
		dest[len_dest] = src[index_src];
		len_dest++;
		index_src++;
	}
	dest[len_dest] = '\0';
	return (len_dest + ft_strlen(&src[index_src]));
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}
