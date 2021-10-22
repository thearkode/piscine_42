#include <stdio.h>

int	ft_atoi(const char *str)
{
	int i = 0;
	int ret = 0;
	int sign = 1;

	while((str[i] == 32) || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		ret = ret * 10 + str[i] - '0';
		i++;
	}
	return (ret * sign);
}

int main(void)
{
	char go[256] = "      2147abcde3535";
	printf("%i", ft_atoi(go));
}