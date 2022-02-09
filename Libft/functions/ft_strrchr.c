/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:20:49 by fech-cha          #+#    #+#             */
/*   Updated: 2021/11/23 15:21:03 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	ch;
	char	*new;
	size_t	len;

	ch = (char )c;
	new = (char *)s;
	len = ft_strlen(s);
	while (*new)
		++new;
	if (*new == ch)
		return (new);
	new--;
	while (len)
	{
		if (*new == ch)
			return (new);
		if (*new == '\0')
			break ;
		new--;
		len--;
	}
	return (NULL);
}
