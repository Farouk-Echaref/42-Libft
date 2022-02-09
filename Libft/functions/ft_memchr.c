/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:19:44 by fech-cha          #+#    #+#             */
/*   Updated: 2021/11/09 12:21:42 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*new_s;

	new_s = (unsigned char *)s;
	while (n)
	{
		if (*new_s == (unsigned char)c)
			return (new_s);
		n--;
		new_s++;
	}
	return (NULL);
}
