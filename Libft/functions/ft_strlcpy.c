/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:21:39 by fech-cha          #+#    #+#             */
/*   Updated: 2021/11/22 21:10:29 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	char	*new_src;

	i = 0;
	new_src = (char *)src;
	if (size > 0)
	{
		while (i < size - 1 && new_src[i])
		{
			dst[i] = new_src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
