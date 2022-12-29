/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 22:22:13 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/28 22:30:25 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void	ft_lstclear_test(void)
{
	t_list	*lst;

	printf(RESET "\nft_lstclear\t");
	lst = ft_lstnew(strdup("0"));
	ft_lstclear(&lst, NULL);
	ft_assert(1, !strcmp(lst->content, "0"));
	ft_lstclear(&lst, &free);
	ft_assert(2, lst == NULL);
	lst = ft_lstnew(strdup("0"));
	ft_lstadd_front(&lst, ft_lstnew(strdup("1")));
	ft_lstclear(&(lst->next), &free);
	ft_assert(3, !strcmp(lst->content, "1"));
	ft_lstadd_front(&lst, ft_lstnew(strdup("2")));
	ft_lstclear(&lst, &free);
	ft_assert(4, lst == NULL);
	ft_lstclear(&lst, &free);
	ft_assert(5, lst == NULL);
}
