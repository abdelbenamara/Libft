/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_test.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 00:01:01 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/28 22:18:19 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void	ft_lstadd_front_test(void)
{
	t_list	*lst;
	t_list	*item;

	printf(RESET "\nft_lstadd_front\t");
	int	a = 0;
	lst = ft_lstnew(&a);
	int	b = 1;
	ft_lstadd_front(&lst, ft_lstnew(&b));
	ft_assert(1, (*(int *)(lst->content) == 1 && *(int *)(lst->next->content) == 0));
	int	c = 2;
	ft_lstadd_front(&lst, ft_lstnew(&c));
	ft_assert(2, (*(int *)(lst->content) == 2 && *(int *)(lst->next->content) == 1 && *(int *)(lst->next->next->content) == 0));
	int	d = 3;
	ft_lstadd_front(&lst, ft_lstnew(&d));
	ft_assert(3, (*(int *)(lst->content) == 3 && *(int *)(lst->next->content) == 2 
				&& *(int *)(lst->next->next->content) == 1 && *(int *)(lst->next->next->next->content) == 0));
	int e = 4;
	ft_lstadd_front(&lst, ft_lstnew(&e));
	ft_assert(4, (*(int *)(lst->content) == 4 && *(int *)(lst->next->content) == 3 && *(int *)(lst->next->next->content) == 2 
				&& *(int *)(lst->next->next->next->content) == 1 && *(int *)(lst->next->next->next->next->content) == 0));
	int f = 5;
	ft_lstadd_front(&lst, ft_lstnew(&f));
	ft_assert(5, (*(int *)(lst->content) == 5 && *(int *)(lst->next->content) == 4 
				&& *(int *)(lst->next->next->content) == 3 && *(int *)(lst->next->next->next->content) == 2 
				&& *(int *)(lst->next->next->next->next->content) == 1 && *(int *)(lst->next->next->next->next->next->content) == 0));
	while (lst)
	{
		item = lst->next;
		free(lst);
		lst = item;
	}
}
