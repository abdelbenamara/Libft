/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 20:42:54 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/22 17:40:42 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	int_to_strlen(int n)
{
	size_t			len;
	unsigned int	i;

	len = 0;
	i = n;
	if (!n)
		++len;
	else if (n < 0)
	{
		++len;
		i = -n;
	}
	while (i > 0)
	{
		++len;
		i = i / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	unsigned int	i;
	size_t			len;
	char			*a;

	i = n;
	if (n < 0)
		i = -n;
	len = int_to_strlen(n);
	a = ft_calloc(len + 1, sizeof(char));
	if (!a)
		return (NULL);
	if (!n)
		a[0] = '0';
	else if (n < 0)
		a[0] = '-';
	while (i > 0)
	{
		--len;
		a[len] = i % 10 + '0';
		i = i / 10;
	}
	return (a);
}
