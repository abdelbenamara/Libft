/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 21:36:07 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/08 18:36:13 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const unsigned char	*r1 = (unsigned char *) s1;
	const unsigned char	*r2 = (unsigned char *) s2;

	if (!s1 && s2)
		return (0 - *r2);
	else if (s1 && !s2)
		return (*r1);
	else if (!s1 || !s2 || !n)
		return (0);
	while (--n && *r1 && *r2)
	{
		if (*r1 != *r2)
			break ;
		++r1;
		++r2;
	}
	return (*r1 - *r2);
}
