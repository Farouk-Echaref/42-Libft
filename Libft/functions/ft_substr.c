/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 20:43:11 by fech-cha          #+#    #+#             */
/*   Updated: 2021/11/22 20:29:12 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_min_length(size_t len1, size_t len2)
{
	if (len1 < len2)
		return (len1);
	return (len2);
}	

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	total;

	if (s == 0)
		return (0);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	total = get_min_length(ft_strlen(s) - start, len);
	new_str = (char *)malloc(total + 1);
	if (new_str == NULL)
		return (NULL);
	ft_strlcpy(new_str, s + start, total + 1);
	return (new_str);
}
