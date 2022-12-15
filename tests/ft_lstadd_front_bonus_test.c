/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus_test.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 00:01:01 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/15 00:28:10 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void	ft_lstadd_front_test(void)
{
	t_list	*lst;
	t_list	*item;

	printf("ft_lstadd_front\t");
	int	a = 0;
	lst = ft_lstnew(&a);
	int	b = 1;
	ft_lstadd_front(&lst, ft_lstnew(&b));
	assert(*(int *)(lst->content) == 1);
	assert(*(int *)(lst->next->content) == 0);
	printf(BOLDGREEN "1. OK\t");
	int	c = 2;
	ft_lstadd_front(&lst, ft_lstnew(&c));
	assert(*(int *)(lst->content) == 2);
	assert(*(int *)(lst->next->content) == 1);
	assert(*(int *)(lst->next->next->content) == 0);
	printf(BOLDGREEN "2. OK\t");
	int	d = 3;
	ft_lstadd_front(&lst, ft_lstnew(&d));
	assert(*(int *)(lst->content) == 3);
	assert(*(int *)(lst->next->content) == 2);
	assert(*(int *)(lst->next->next->content) == 1);
	assert(*(int *)(lst->next->next->next->content) == 0);
	printf(BOLDGREEN "3. OK\t");
	int e = 4;
	ft_lstadd_front(&lst, ft_lstnew(&e));
	assert(*(int *)(lst->content) == 4);
	assert(*(int *)(lst->next->content) == 3);
	assert(*(int *)(lst->next->next->content) == 2);
	assert(*(int *)(lst->next->next->next->content) == 1);
	assert(*(int *)(lst->next->next->next->next->content) == 0);
	printf(BOLDGREEN "4. OK\t");
	int f = 5;
	ft_lstadd_front(&lst, ft_lstnew(&f));
	assert(*(int *)(lst->content) == 5);
	assert(*(int *)(lst->next->content) == 4);
	assert(*(int *)(lst->next->next->content) == 3);
	assert(*(int *)(lst->next->next->next->content) == 2);
	assert(*(int *)(lst->next->next->next->next->content) == 1);
	assert(*(int *)(lst->next->next->next->next->next->content) == 0);
	while (lst)
	{
		item = lst->next;
		free(lst);
		lst = item;
	}
	printf(BOLDGREEN "5. OK" RESET "\n");
}
