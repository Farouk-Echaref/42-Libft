/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 13:40:26 by fech-cha          #+#    #+#             */
/*   Updated: 2021/11/14 18:37:30 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	char	*str;

	str = NULL;
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s2 == NULL)
	{
		str = ft_strdup(s1);
		return (str);
	}
	if (s1 == NULL)
	{
		str = ft_strdup(s2);
		return (str);
	}
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = (char *)malloc(len);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1, ft_strlen(s1) + 1);
	ft_strlcat(str, s2, len + ft_strlen(s2));
	return (str);
}
