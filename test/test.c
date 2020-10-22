#include <string.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
char	is_space_tab(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	int i;
	int av1_size;

	i = 0;
	if (argc != 2)
		return (0);
	av1_size = ft_strlen(argv[1]) - 1;
	while (av1_size != 0)
	{
		if (is_space_tab(argv[1][av1_size]) == 1)
			av1_size--;
		else if (is_space_tab(argv[1][av1_size]) == 0 && is_space_tab(argv[1][av1_size - 1]) == 1)
		{
			while (is_space_tab(argv[1][av1_size]) == 0)
			{
				write(1, &(argv[1][av1_size]), 1);
				av1_size++;
			}
			return (0);
		}
		else
			av1_size--;		
	}	
			
}

