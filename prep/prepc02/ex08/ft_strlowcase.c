#include <unistd.h>
#include <stdio.h>
#include <string.h>

//mandar com include??
// porque com * de array no main da bus error??
// tirar writr

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
			write(1, &str[i], 1);
		}
		i++;
	}
	return (str);
}

int main(void)
{
	char str[] = "AAAAAA";
	ft_strlowcase(str);

}
