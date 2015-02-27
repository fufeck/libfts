/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libfts.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftaffore <ftaffore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/28 12:15:00 by ftaffore          #+#    #+#             */
/*   Updated: 2015/01/28 12:15:01 by ftaffore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTS_H
# define LIBFTS_H

#include <stdio.h>
#include <ctype.h>
#include <strings.h>

/****************/
/*****PART_1*****/
/****************/

char *				ft_strcat(char * s1, const char * s2);
void				ft_bzero(void *s, size_t n);
int					ft_isdigit(int a);
int					ft_isalpha(int a);
int					ft_isalnum(int a);
int					ft_isascii(int a);
int					ft_isprint(int a);
int					ft_toupper(int a);
int					ft_tolower(int a);
int					ft_puts(const char *s);

/****************/
/*****PART_2*****/
/****************/

size_t				ft_strlen(const char *s);
void *				ft_memset(void *b, int c, size_t len);
void *				ft_memcpy(void * dst, const void * src, size_t n);
char *				ft_strdup(const char *s1);

/****************/
/*****PART_2*****/
/****************/

void 				ft_cat(int fb);

#endif