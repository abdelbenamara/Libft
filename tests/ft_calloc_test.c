/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 23:16:56 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/28 21:42:28 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void	ft_calloc_test(void)
{
	size_t	*ptr1;
	size_t	*ptr2;

	printf(RESET "\nft_calloc\t");
	ptr1 = ft_calloc(0, 0);
	ptr2 = calloc(0, 0);
	ft_assert(1, !memcmp(ptr1, ptr2, 0));
	free(ptr1);
	free(ptr2);
	ptr1 = ft_calloc(1, 0);
	ptr2 = calloc(1, 0);
	ft_assert(2, !memcmp(ptr1, ptr2, 0));
	free(ptr1);
	free(ptr2);
	ptr1 = ft_calloc(0, 1 * sizeof(size_t));
	ptr2 = calloc(0, 1 * sizeof(size_t));
	ft_assert(3, !memcmp(ptr1, ptr2, 0));
	free(ptr1);
	free(ptr2);
	ptr1 = ft_calloc(1, sizeof(size_t));
	ptr2 = calloc(1, sizeof(size_t));
	ft_assert(4, !memcmp(ptr1, ptr2, 1 * sizeof(size_t)));
	free(ptr1);
	free(ptr2);
	ptr1 = ft_calloc(4096, sizeof(size_t));
	ptr2 = calloc(4096, sizeof(size_t));
	ft_assert(5, !memcmp(ptr1, ptr2, 4096));
	free(ptr1);
	free(ptr2);
}
