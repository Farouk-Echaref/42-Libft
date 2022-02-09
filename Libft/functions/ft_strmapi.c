/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 19:26:42 by fech-cha          #+#    #+#             */
/*   Updated: 2021/11/20 16:21:15 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*return a freeable memory in case of error (Input NULL Pointers - Bad User)*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*hold;
	char			*res;
	unsigned int	i;

	i = 0;
	if (s == NULL || f == NULL || (s == NULL && f == NULL))
		return (ft_strdup(""));
	res = ft_strdup(s);
	if (res == NULL)
		return (NULL);
	hold = res;
	while (*res)
	{
		*res = (*f)(i,*res);
		res++;
		i++;
	}
	return (hold);
}
