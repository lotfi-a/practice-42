#include <stdio.h>
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
void	ft_last_word(char *str)
{
	int	i;
	char	*c;
	i = ft_strlen(str);

	while(i-- > 0 && str[i] != ' ')
	{
		printf("%c", str[i]);
	}
}
int	main()
{
	char	str[] = "Lotfi aanikid le fou";
	ft_last_word(str);
}
