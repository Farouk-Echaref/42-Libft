/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 12:41:36 by fech-cha          #+#    #+#             */
/*   Updated: 2021/11/14 17:27:22 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*handling the overlap */
void	*ft_memmove(void *dest, void const *src, size_t len)
{
	unsigned char	*new_src;
	unsigned char	*new_dest;

	new_src = (unsigned char *)src;
	new_dest = (unsigned char *)dest;
	if ((new_src == NULL) && (new_dest == NULL))
		return (NULL);
	if ((new_dest > new_src) && (new_dest < new_src + len))
	{
		new_src += len - 1;
		new_dest += len - 1;
		while (len)
		{
			*new_dest = *new_src;
			new_dest--;
			new_src--;
			len--;
		}
	}
	else
		ft_memcpy(new_dest, new_src, len);
	return (dest);
}
