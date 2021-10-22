#include "header.h"

void	ft_chk_dict(char *strA, int i, int l)
{
	int		j;
	char	str[40];

	j = 0;
	while (i < l)
	{
		str[j] = strA[i];
		i++;
		j++;
	}
	str[j] = 0;
	ft_srch_nbr (str);
}

void	ft_add_0(char	c, int	n, int	sep)
{
	int		i;
	char	str0[40];

	str0[0] = c;
	if (sep == 1)
	{
		write(1, " ", 1);
		ft_chk_dict(str0, 0, 1);
		str0[0] = '1';
	}
	i = 1;
	if (n > 0)
	{
		while (i <= n)
		{
			str0[i] = '0';
			i++;
		}
		str0[i] = 0;
		write(1, " ", 1);
		ft_chk_dict(str0, 0, i);
	}
}

void	ft_dis_pos(char *nb, int i, int size)
{
	int	pst;
	int	mod;

	pst = size - i;
	mod = pst % 3;
	if (nb[i] != '0')
	{
		if (mod == 0)
			ft_add_0(nb[i], 2, 1);
		else if (mod == 2 && nb[i] > '1')
			ft_add_0(nb[i], 1, 0);
		else if (mod == 2 && nb[i] == '1')
			ft_chk_dict(nb, i, i + 2);
		else if (mod == 1 && nb[i - 1] != '1')
			ft_add_0(nb[i], pst - 1, 1);
		else if (mod == 1 && nb[i - 1] == '1')
			ft_add_0('1', pst - 1, 0);
	}
	else if (mod == 1 && (nb[i - 1] > '0' || nb[i - 2] > '0'))
		ft_add_0('1', pst - 1, 0);
}

int	ft_update_dict(int *t, char c, int v)
{
	if (c == ':')
	{
		dict[t[0]][t[1]][t[2]] = '\0';
		t[0] = 1;
		t[2] = 0;
	}
	else if (c == '\n')
	{
		dict[t[0]][t[1]][t[2]] = '\0';
		t[1]++;
		t[0] = 0;
		t[2] = 0;
	}
	else if (c != ' ' || v == 1)
	{
		dict[t[0]][t[1]][t[2]] = c;
		t[2]++;
		return (1);
	}
	return (0);
}

int	ft_init_dict(char *name)
{
	int		fdes;
	char	buffer[1];
	int		r;
	int		tab[3];
	int		verif;

	tab[0] = 0;
	tab[1] = 0;
	tab[2] = 0;
	fdes = open(name, O_RDONLY);
	if (fdes == -1)
		return (2);
	r = 1;
	verif = 0;
	while (r != 0 && r != -1 )
	{
		r = read(fdes, buffer, 1);
		verif = ft_update_dict(tab, buffer[0], verif);
	}
	close(fdes);
	return (r);
}

void	ft_srch_nbr(char	*str)
{
	int	i;
	int	j;
	int	f;

	i = 0;
	while (i < 42)
	{
		j = 0;
		f = 0;
		while (dict[0][i][j] != 0 && str[j] != 0 && f == 0)
		{
			if (dict[0][i][j] != str[j])
			{
				f = 1;
			}
			else if (dict[0][i][j + 1] == 0 && str[j + 1] == 0)
			{
				ft_prt_str(dict[1][i]);
			}
			j++;
		}
		i++;
	}
}

void	ft_prt_str(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_chk_int(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] == '-' || str[i] == '.')
			return (1);
		i++;
	}
	return (0);
}
