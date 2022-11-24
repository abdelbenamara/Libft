/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 21:44:40 by abenamar          #+#    #+#             */
/*   Updated: 2022/11/24 23:30:04 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	big_len;
	size_t	little_len;

	if (!big || !little || !len)
		return (NULL);
	else if (*little == '\0')
		return ((char *) big);
	big_len = ft_strlen(big);
	little_len = ft_strlen(little);
	while (little_len <= big_len && little_len <= len)
	{
		if (!ft_strncmp(big, little, little_len))
			return ((char *) big);
		++big;
		--big_len;
		--len;
	}
	return (NULL);
}
