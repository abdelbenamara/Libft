/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 23:15:24 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/19 20:41:30 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*r;

	if (!s || !f)
		return (NULL);
	i = 0;
	r = ft_strdup(s);
	if (!r)
		return (NULL);
	while (r[i])
	{
		r[i] = f(i, r[i]);
		++i;
	}
	return (r);
}
