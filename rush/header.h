#ifndef HEADER_FILE
# define HEADER_FILE

#include <unistd.h>
#include <fcntl.h>

char dict[2][42][40];

void	ft_chk_dict(char *strA, int i, int l);
void	ft_add_0(char	c, int	n, int	sep);
void	ft_dis_pos(char *nb, int i, int size);
int		ft_update_dict(int*, char, int);
int		ft_init_dict(char *);
void	ft_srch_nbr(char *);
void	ft_prt_str(char *);
int		ft_chk_int(char *);

#endif
