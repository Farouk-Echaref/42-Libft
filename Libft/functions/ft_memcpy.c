/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:20:24 by fech-cha          #+#    #+#             */
/*   Updated: 2021/11/14 15:39:49 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*new_dest;
	unsigned char	*new_src;

	if ((dest == NULL) && (src == NULL))
		return (NULL);
	new_dest = dest;
	new_src = (unsigned char *)src;
	while (n)
	{
		*new_dest = *new_src;
		new_dest++;
		new_src++;
		n--;
	}
	return (dest);
}
