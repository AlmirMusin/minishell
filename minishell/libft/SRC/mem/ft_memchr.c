/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarilli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 22:36:06 by bmarilli          #+#    #+#             */
/*   Updated: 2020/10/30 16:11:20 by bmarilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ENG
*/

/*
** RUS
**
** Функция memchr() находит первое вхождение 'c'
** (преобразованное в символ без знака) в строке s.
**
** RETURN
**
** Функция memchr() возвращает указатель на расположенный байт или NULL,
** если такой байт не существует в пределах n байтов.
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *p;

	p = (unsigned char*)s;
	while (n--)
		if (*p != (unsigned char)c)
			p++;
		else
			return (p);
	return (0);
}