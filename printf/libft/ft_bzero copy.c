/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschuste <jschuste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 17:08:39 by jschuste          #+#    #+#             */
/*   Updated: 2025/03/15 01:44:29 by jschuste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = s;
	while (n > 0)
	{
		*ptr = 0;
		ptr++;
		n--;
	}
}

// #include <stdio.h>

// int main()
// {
//     char str[6] = "Pookie";

//     printf("Vor bzero: %s\n", str); // Gibt "Pookie" aus
//     ft_bzero(str + 2, 3); // Setzt 3 Bytes ab dem dritten Zeichen auf 0
//     printf("Nach bzero:\n");

//     for (int i = 0; i < sizeof(str); i++)
//     {
//         if (str[i] == '\0')
//             printf("\\0 ");         // Zeigt Null-Bytes als \0 an
//         else
//             printf("%c ", str[i]);  // Zeigt normale Zeichen an
//     }

//     printf("\n");
//     return 0;
// }
