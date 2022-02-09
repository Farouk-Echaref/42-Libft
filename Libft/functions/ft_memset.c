/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:19:49 by fech-cha          #+#    #+#             */
/*   Updated: 2021/11/23 15:19:12 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *addr, int c, size_t n)
{
	unsigned char	*hold;

	hold = addr;
	while (n)
	{
		*hold = c;
		hold++;
		n--;
	}
	return (addr);
}
