/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 21:36:07 by abenamar          #+#    #+#             */
/*   Updated: 2022/11/22 21:58:15 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (!s1 && s2)
		return (*s2);
	else if (s1 && !s2)
		return (*s1);
	else if (!s1 || !s2 || !n)
		return (0);
	while (--n && *s1 && *s2)
	{
		if (*s1 != *s2)
			break ;
		++s1;
		++s2;
	}
	return (*s1 - *s2);
}
