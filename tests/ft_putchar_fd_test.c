/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 01:08:08 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/28 22:04:08 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void	ft_putchar_fd_test(void)
{
	int	fd = open("/dev/null", O_WRONLY);

	if (fd == -1)
		return ;
	printf(RESET "\nft_putchar_fd\t");
	ft_putchar_fd('a', fd);
	printf(BOLDGREEN "1. OK\t");
	ft_putchar_fd('1', fd);
	printf(BOLDGREEN "2. OK\t");
	ft_putchar_fd(' ', fd);
	printf(BOLDGREEN "3. OK\t");
	ft_putchar_fd('\t', fd);
	printf(BOLDGREEN "4. OK\t");
	ft_putchar_fd('\0', fd);
	printf(BOLDGREEN "5. OK\t");
	close(fd);
}
