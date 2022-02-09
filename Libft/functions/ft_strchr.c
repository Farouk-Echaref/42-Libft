/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:20:42 by fech-cha          #+#    #+#             */
/*   Updated: 2021/11/22 17:24:02 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	ch;

	ch = (char) c;
	if (ch == 0)
		return ((char *)s + ft_strlen(s));
	while (1)
	{
		if (*s == ch)
		{
			return ((char *)s);
		}
		if (*s == '\0')
			break ;
		++s;
	}
	return (NULL);
}
