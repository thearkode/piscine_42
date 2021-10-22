#include "header.h"

int	main(int	argc, char	*argv[])
{
	int		i;
	int		count;
	int		error;

	if (argc > 3 || argc == 1 || ft_chk_int(argv[1]))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	error = ft_init_dict("numbers.dict");
	count = 0;
	while (argv[1][count] != '\0' )
	{
		count++;
	}
	i = 0;
	while (i < count)
	{
		ft_dis_pos(argv[1], i, count);
		i++;
	}
	return (0);
}
