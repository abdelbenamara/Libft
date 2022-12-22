/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 15:04:09 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/22 19:35:41 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_char_in_set(char c, char const *set)
{
	if (!set)
		return (0);
	while (*set)
	{
		if (c == *set)
			return (1);
		++set;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	char	*trim;

	if (!s1)
		return (NULL);
	len = 0;
	while (*s1)
	{
		if (!is_char_in_set(*s1, set))
			break ;
		++s1;
	}
	len = ft_strlen(s1);
	while (len)
	{
		if (!is_char_in_set(*(s1 + len - 1), set))
			break ;
		--len;
	}
	trim = ft_calloc(len + 1, sizeof(char));
	if (!trim)
		return (NULL);
	ft_strlcpy(trim, s1, len + 1);
	return (trim);
}
