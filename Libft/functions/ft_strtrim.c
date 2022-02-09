/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 14:45:20 by fech-cha          #+#    #+#             */
/*   Updated: 2021/11/22 21:13:50 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	in_set(char c, char *s)
{
	while (*s)
	{
		if (*s == c)
			return (1);
		s++;
	}
	return (0);
}

static int	ft_get_len(char *str, char *set)
{
	int	end;
	int	start;

	start = 0;
	end = ft_strlen(str) - 1;
	while (end > 0 && in_set(str[end], set))
		end--;
	if (end == 0)
		return (0);
	while (in_set(str[start], set))
		start++;
	return (end - start + 1);
}

static char	*ltrim(char *s, char *set)
{
	char	*res;
	int		size;

	size = ft_get_len(s, set);
	res = (char *)ft_calloc(size + 1, 1);
	if (res == NULL)
		return (NULL);
	while (in_set(*s, set))
		s++;
	ft_strlcpy(res, s, size + 1);
	return (res);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*tpc_s1;
	char	*tpc_set;
	char	*new;

	if (s1 == NULL || set == NULL)
		return (NULL);
	tpc_s1 = (char *)s1;
	tpc_set = (char *)set;
	new = ltrim(tpc_s1, tpc_set);
	return (new);
}
