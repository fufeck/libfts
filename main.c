#include <stdio.h>
#include "libfts.h"

int main() {
	printf("%d\n", ft_isdigit('a'));
	printf("%d\n", ft_isdigit('b'));
	printf("%d\n", ft_isdigit('z'));
	printf("%d\n", ft_isdigit('A'));
	printf("%d\n", ft_isdigit('B'));
	printf("%d\n", ft_isdigit(50));
	printf("%d\n", ft_isdigit(48));
	printf("%d\n", ft_isdigit('0'));

	return (0);
}
