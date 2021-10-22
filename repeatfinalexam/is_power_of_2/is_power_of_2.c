
int	is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (1);
	else if (n % 2 == 0)
		n = n / 2;
	return ()

}
int main(void)
{
	int nb = 4;
	printf("%i", is_power_of_2(nb));
}