#include <stdio.h>
#include <ctype.h>
#include <strings.h>
#include "libfts.h"

void	test_bzero(void) {

}

void	test_isdigit(void) {
	if (isdigit('a') == ft_isdigit('a') && \
		isdigit('0') == ft_isdigit('0') && \
		isdigit('9') == ft_isdigit('9') && \
		isdigit(5) == ft_isdigit(5)) {
		printf("%c[1;32mSUCCES isdigit\n", 27);
	} else {
		printf("%c[1;31mFAIL isdigit\n", 27);
	}
	printf("%c[1;34m------------------\n", 27);
}

void	test_isalpha(void) {
	if (isalpha('a') == ft_isalpha('a') && \
		isalpha('c') == ft_isalpha('c') && \
		isalpha('0') == ft_isalpha('0') && \
		isalpha(8) == ft_isalpha(8) && \
		isalpha('z') == ft_isalpha('z') && \
		isalpha('B') == ft_isalpha('B')) {
		printf("%c[1;32mSUCCES isalpha\n", 27);
	} else {
		printf("%c[1;31mFAIL isalpha\n", 27);
	}
	printf("%c[1;34m------------------\n", 27);
}

void	test_isalnum(void) {
	if (isalnum('9') == ft_isalnum('9') && 	\
		isalnum('a') == ft_isalnum('a') && 	\
		isalnum('0') == ft_isalnum('0') &&	\
		isalnum(8) == ft_isalnum(8) && 		\
		isalnum('Z') == ft_isalnum('Z') && 	\
		isalnum('B') == ft_isalnum('B')) {
		printf("%c[1;32mSUCCES isalnum\n", 27);
	} else {
		printf("%c[1;31mFAIL isalnum\n", 27);
	}
	printf("%c[1;34m------------------\n", 27);
}

int main() {
	
	test_bzero();
	test_isdigit();
	test_isalpha();
	test_isalnum();
	return (0);
}
