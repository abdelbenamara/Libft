/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus_test.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 03:07:22 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/16 03:17:35 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void	ft_lstsize_test(void)
{
	int		size;
	t_list	*lst;
	t_list	*item;

	printf("ft_lstsize\t");
	size = ft_lstsize(NULL);
	assert(size == 0);
	printf(BOLDGREEN "1. OK\t");
	lst = ft_lstnew("0");
	size = ft_lstsize(lst);
	assert(size == 1);
	printf(BOLDGREEN "2. OK\t");
	ft_lstadd_front(&lst, ft_lstnew("1"));
	size = ft_lstsize(lst);
	assert(size == 2);
	printf(BOLDGREEN "3. OK\t");
	ft_lstadd_front(&lst, ft_lstnew("2"));
	size = ft_lstsize(lst);
	assert(size == 3);
	printf(BOLDGREEN "4. OK\t");
	while (lst)
	{
		item = lst->next;
		free(lst);
		lst = item;
	}
	size = ft_lstsize(lst);
	assert(size == 0);
	printf(BOLDGREEN "5. OK" RESET "\n");
}
