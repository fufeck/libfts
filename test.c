/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftaffore <ftaffore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/13 12:43:41 by ftaffore          #+#    #+#             */
/*   Updated: 2015/02/13 12:43:43 by ftaffore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libfts.h"
# include <stdio.h>
# include <ctype.h>
# include <strings.h>

void	test_bzero(void) {
	char	test1[10] = "0123456789";
	char	test2[10] = "0123456789";

	bzero(test1, 10);
	ft_bzero(test2, 10);
	if (memcmp(test1, test2, 10) == 0)
	{
		printf("%c[1;32mSUCCESS bzero\n", 27);
	} else {
		printf("%c[1;31mFAIL bzero\n", 27);
	}
	printf("%c[1;34m------------------\n", 27);
}


void	test_strcat(void) {
	char	test1[11] = "01234\0";
	char	test11[6] = "abcde\0";
	char	test2[11] = "01234\0";
	char	test22[6] = "abcde\0";

	ft_strcat(test1, test11);
	strcat(test2, test22);
	if (memcmp(test1, test2, 11) == 0)
	{
		printf("%c[1;32mSUCCESS strcat\n", 27);
	} else {
		printf("%c[1;31mFAIL strcat\n", 27);
	}
	printf("%c[1;34m------------------\n", 27);
}


void	test_puts(void) {
	ft_puts("SUCCESS puts\n");
	printf("%c[1;34m------------------\n", 27);
}


void	test_isdigit(void) {
	if (isdigit('a') == ft_isdigit('a') && \
		isdigit('0') == ft_isdigit('0') && \
		isdigit('9') == ft_isdigit('9') && \
		isdigit('3') == ft_isdigit('3') && \
		isdigit(5) == ft_isdigit(5))
	{
		printf("%c[1;32mSUCCESS isdigit\n", 27);
	} else {
		printf("%c[1;31mFAIL isdigit\n", 27);
	}
	printf("%c[1;34m------------------\n", 27);
}


void	test_isalpha(void) {
	if (isalpha('a') == ft_isalpha('a') && \
		isalpha('A') == ft_isalpha('A') && \
		isalpha('Z') == ft_isalpha('Z') && \
		isalpha('c') == ft_isalpha('c') && \
		isalpha('0') == ft_isalpha('0') && \
		isalpha(8) == ft_isalpha(8) && \
		isalpha('z') == ft_isalpha('z') && \
		isalpha('B') == ft_isalpha('B'))
	{
		printf("%c[1;32mSUCCESS isalpha\n", 27);
	} else {
		printf("%c[1;31mFAIL isalpha\n", 27);
	}
	printf("%c[1;34m------------------\n", 27);
}


void	test_isalnum(void) {
	if (isalnum('9') == ft_isalnum('9') && 	\
		isalnum('0') == ft_isalnum('0') &&	\
		isalnum('a') == ft_isalnum('a') && 	\
		isalnum('e') == ft_isalnum('e') && 	\
		isalnum('z') == ft_isalnum('z') && 	\
		isalnum(8) == ft_isalnum(8) && 		\
		isalnum('Z') == ft_isalnum('Z') && 	\
		isalnum('A') == ft_isalnum('A') && 	\
		isalnum('B') == ft_isalnum('B'))
	{
		printf("%c[1;32mSUCCESS isalnum\n", 27);
	} else {
		printf("%c[1;31mFAIL isalnum\n", 27);
	}
	printf("%c[1;34m------------------\n", 27);
}


void	test_isprint(void) {
	if (isprint(0) == ft_isprint(0) && 	\
		isprint('0') == ft_isprint('0') &&	\
		isprint('a') == ft_isprint('a') && 	\
		isprint(' ') == ft_isprint(' ') && 	\
		isprint(127) == ft_isprint(127) && 	\
		isprint(8) == ft_isprint(8))
	{
		printf("%c[1;32mSUCCESS isprint\n", 27);
	} else {
		printf("%c[1;31mFAIL isprint\n", 27);
	}
	printf("%c[1;34m------------------\n", 27);
}


void	test_isascii(void) {
	if (isascii(0) == ft_isascii(0) && 	\
		isascii(-1) == ft_isascii(-1) &&	\
		isascii('a') == ft_isascii('a') && 	\
		isascii(' ') == ft_isascii(' ') && 	\
		isascii(128) == ft_isascii(128) && 	\
		isascii(354) == ft_isascii(354))
	{
		printf("%c[1;32mSUCCESS isascii\n", 27);
	} else {
		printf("%c[1;31mFAIL isascii\n", 27);
	}
	printf("%c[1;34m------------------\n", 27);
}


void	test_toupper(void) {
	if (toupper(0) == ft_toupper(0) && 	\
		toupper(-1) == ft_toupper(-1) &&	\
		toupper('a') == ft_toupper('a') && 	\
		toupper(' ') == ft_toupper(' ') && 	\
		toupper('Z') == ft_toupper('Z') && 	\
		toupper('z') == ft_toupper('z'))
	{
		printf("%c[1;32mSUCCESS toupper\n", 27);
	} else {
		printf("%c[1;31mFAIL toupper\n", 27);
	}
	printf("%c[1;34m------------------\n", 27);
}


void	test_tolower(void) {
	if (tolower('B') == ft_tolower('B') && 	\
		tolower('8') == ft_tolower('8') &&	\
		tolower('a') == ft_tolower('a') && 	\
		tolower(' ') == ft_tolower(' ') && 	\
		tolower('Z') == ft_tolower('Z') && 	\
		tolower('A') == ft_tolower('A'))
	{
		printf("%c[1;32mSUCCESS tolower\n", 27);
	} else {
		printf("%c[1;31mFAIL tolower\n", 27);
	}
	printf("%c[1;34m------------------", 27);
	printf("%c[1;32m\n", 27);
}

void	test_strlen(void) {
	if (strlen("12345") == ft_strlen("12345") && 	\
		strlen("1") == ft_strlen("1") &&	\
		strlen("") == ft_strlen("") && 	\
		strlen(" ") == ft_strlen(" ") && 	\
		strlen("123456789") == ft_strlen("123456789") && 	\
		strlen("A") == ft_strlen("A"))
	{
		printf("%c[1;32mSUCCESS strlen\n", 27);
	} else {
		printf("%c[1;31mFAIL strlen\n", 27);
	}
	printf("%c[1;34m------------------\n", 27);
}

void	test_memset(void) {
	char	test1[11] = "0123456789\0";
	char	test2[11] = "0123456789\0";

	if (memcmp(memset(test1, 'a', 5), ft_memset(test2, 'a', 5), 5) == 0 && \
		memcmp(memset(test1, 'b', 10), ft_memset(test2, 'b', 10), 10) == 0)
	{
		printf("%c[1;32mSUCCESS memset\n", 27);
	} else {
		printf("%c[1;31mFAIL memset\n", 27);
	}
	printf("%c[1;34m------------------\n", 27);
}

void	test_memcpy(void) {
	char	test1[11] = "0123456789\0";
	char	test11[11] = "abcde\0";
	char	test2[11] = "0123456789\0";
	char	test22[11] = "abcde\0";

	if (memcmp(memcpy(test1, test11, 5), ft_memcpy(test2, test22, 5), 5) == 0)
	{
		printf("%c[1;32mSUCCESS memcpy\n", 27);
	} else {
		printf("%c[1;31mFAIL memcpy\n", 27);
	}
	printf("%c[1;34m------------------\n", 27);
}

void	test_strdup(void) {
	char	test1[11] = "0123456789\0";
	char	*str;

	str = ft_strdup(test1);
	if ((void *)str != (void *)test1 && strcmp(str, test1) == 0)
	{
		printf("%c[1;32mSUCCESS strdup\n", 27);
	} else {
		printf("%c[1;31mFAIL strdup\n", 27);
	}
	printf("%c[1;34m------------------\n", 27);
}


int main() {

	test_bzero();
	test_strcat();
	test_isdigit();
	test_isalpha();
	test_isalnum();
	test_isprint();
	test_isascii();
	test_toupper();
	test_tolower();
	test_puts();
	test_strlen();
	test_memset();
	test_memcpy();
	test_strdup();
	return (0);
}


