/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 03:27:34 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/28 22:04:34 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void	ft_putstr_fd_test(void)
{
	int	fd = open("/dev/null", O_WRONLY);

	if (fd == -1)
		return ;
	printf(RESET "\nft_putstr_fd\t");
	ft_putstr_fd("", fd);
	printf(BOLDGREEN "1. OK\t");
	ft_putstr_fd("abcde", fd);
	printf(BOLDGREEN "2. OK\t");
	ft_putstr_fd("12345", fd);
	printf(BOLDGREEN "3. OK\t");
	ft_putstr_fd("\t \b", fd);
	printf(BOLDGREEN "4. OK\t");
	ft_putstr_fd("\0\0\0", fd);
	printf(BOLDGREEN "5. OK\t");
	close(fd);
}
