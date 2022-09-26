#include <stdio.h>

// int main(int ac, char **av) {
// 	int	i;

// 	i = 1;
// 	while (i < ac)
// 	{
// 		printf("test av[%d] : %s\n", i, av[i]);
// 		i++;
// 	}
// 	return (0);
// }
#include "unis"
int main(int ac, char **av) {
	int	i;

	i = 1;
	while (i < ac)
	{
		printf("test av[%d] : %s\n", i, av[i]);
		i++;
	}
	return (0);
}
