/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 03:07:22 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/28 22:19:11 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void	ft_lstsize_test(void)
{
	int		size;
	t_list	*lst;
	t_list	*item;

	printf(RESET "\nft_lstsize\t");
	size = ft_lstsize(NULL);
	ft_assert(1, size == 0);
	lst = ft_lstnew("0");
	size = ft_lstsize(lst);
	ft_assert(2, size == 1);
	ft_lstadd_front(&lst, ft_lstnew("1"));
	size = ft_lstsize(lst);
	ft_assert(3, size == 2);
	ft_lstadd_front(&lst, ft_lstnew("2"));
	size = ft_lstsize(lst);
	ft_assert(4, size == 3);
	while (lst)
	{
		item = lst->next;
		free(lst);
		lst = item;
	}
	size = ft_lstsize(lst);
	ft_assert(5, size == 0);
}
