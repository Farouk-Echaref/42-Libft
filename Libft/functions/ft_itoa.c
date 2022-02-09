/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 11:07:38 by fech-cha          #+#    #+#             */
/*   Updated: 2021/11/22 21:51:18 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(long int n)
{
	int	cpt;

	cpt = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		cpt++;
		n = -n;
	}
	while (n > 0)
	{
		n /= 10;
		cpt++;
	}
	return (cpt);
}

/*Fill from the last*/
static void	convert(long int n, char *str, long int length)
{
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	if (n >= 10)
		convert((n / 10), str, length - 1);
	str[length] = (n % 10) + '0';
}

/*Fill the last after allocating*/
char	*ft_itoa(int n)
{
	char	*store;
	int		nd;

	nd = count_digits(n);
	store = (char *)malloc((nd + 1));
	if (store == NULL)
		return (NULL);
	store[nd] = '\0';
	convert(n, store, nd - 1);
	return (store);
}

/* iterative broken version:
 *
char	*ft_itoa(int n)
{
	char	*store;
	int		nd;
	int		i;
	int		ng;

	i = 0;
	ng = 0;
	if (n < 0)
	{
		n = -n;
		ng = 1;
	}
	nd = count_digits(n) + ng;
	store = (char *)malloc(nd + 1);
	if (store == NULL)
		return (NULL);
	if (ng == 1)
	{
		store[i] = '-';
		i++;
	}
	while (n > 1 && i < nd)
	{
		store[i] = (n % 10) + '0';
		n /= 10;
		i++;
	}
	store[i] = '\0';
	//ft_strrev(store);
	return (store);
}*/
