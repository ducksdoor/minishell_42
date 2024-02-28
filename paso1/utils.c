int	ft_strncmp(char *s1, char *s2, int n)
{
	int	x;
	int	dif;

	x = 0;
	dif = 0;
	while ((x < n) && !dif && (s1[x] != '\0') && (s2[x] != '\0'))
	{
		dif = (unsigned char)s1[x] - (unsigned char)s2[x];
		x++;
	}
	if (x < n && !dif && (s1[x] == '\0' || s2 [x] == '\0'))
		dif = (unsigned char)s1[x] - (unsigned char)s2[x];
	return (dif);
}