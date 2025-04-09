/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschuste <jschuste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 16:37:42 by jschuste          #+#    #+#             */
/*   Updated: 2025/03/14 17:20:55 by jschuste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int a)
{
	if (a >= 32 && a <= 126)
		return (1);
	return (0);
}

// #include <stdio.h>

// int main() 
// {
//     char c = '\n'; // Testzeichen
//     if (ft_isprint(c)) {
//         printf("Character '%c' is printable.\n", c);
//     } else {
//         printf("Character '%c' is not printable.\n", c);
//     }
//     return 0;
// }