/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 21:07:24 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/21 19:04:51 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const unsigned char	b = c;
	size_t				i;

	i = ft_strlen(s);
	while (i > 0)
	{
		if (s[i] == b)
			break ;
		--i;
	}
	if (s[i] == b)
		return ((char *)(s + i));
	return (NULL);
}
