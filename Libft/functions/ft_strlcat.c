/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 14:20:31 by fech-cha          #+#    #+#             */
/*   Updated: 2021/11/22 17:52:36 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_d;
	size_t	len_s;
	size_t	i;
	char	*new_src;

	new_src = (char *)src;
	len_d = ft_strlen(dst);
	len_s = ft_strlen(new_src);
	i = 0;
	if (size <= len_d)
		return (len_s + size);
	len_s += len_d;
	while (new_src[i] && len_d < size - 1)
	{
		dst[len_d] = new_src[i];
		i++;
		len_d++;
	}
	dst[len_d] = '\0';
	return (len_s);
}
