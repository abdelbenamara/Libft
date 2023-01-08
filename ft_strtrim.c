/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 15:04:09 by abenamar          #+#    #+#             */
/*   Updated: 2023/01/08 03:13:58 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	char	*trim;

	if (!s1)
		return (NULL);
	while (*s1)
	{
		if (!ft_strchr(set, *s1))
			break ;
		++s1;
	}
	len = ft_strlen(s1);
	while (len)
	{
		if (!ft_strchr(set, *(s1 + len - 1)))
			break ;
		--len;
	}
	trim = ft_calloc(len + 1, sizeof(char));
	if (!trim)
		return (NULL);
	ft_strlcpy(trim, s1, len + 1);
	return (trim);
}
