/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschuste <jschuste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 16:55:18 by jschuste          #+#    #+#             */
/*   Updated: 2025/03/31 19:24:40 by jschuste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		ft_putnbr_fd(-n, fd);
		return ;
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	c = '0' + (n % 10);
	write(fd, &c, 1);
}

// int main(void)
// {
//     // Test 1: Positive Zahl
//     ft_putnbr_fd(12345, 1);
//     write(1, "\n", 1); // Zeilenumbruch nach der Zahl

//     // Test 2: Negative Zahl
//     ft_putnbr_fd(-6789, 1);
//     write(1, "\n", 1); // Zeilenumbruch nach der Zahl

//     // Test 3: Null
//     ft_putnbr_fd(0, 1);
//     write(1, "\n", 1); // Zeilenumbruch nach der Zahl

//     // Test 4: Kleinste negative Zahl (Spezialfall)
//     ft_putnbr_fd(-2147483648, 1);
//     write(1, "\n", 1); // Zeilenumbruch nach der Zahl

//     return (0);
// }