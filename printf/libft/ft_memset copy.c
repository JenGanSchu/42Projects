/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschuste <jschuste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 17:21:08 by jschuste          #+#    #+#             */
/*   Updated: 2025/03/15 01:45:03 by jschuste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;

	ptr = b;
	while (len > 0)
	{
		*ptr = c;
		ptr++;
		len--;
	}
	return (b);
}

// #include <stdio.h>

// // Deklariere Funktion
// void *ft_memset(void *b, int c, size_t len);

// int main(void)
// {
//     char buffer[10] = "Pookie"; // Test Array

//     printf("Vorher: %s\n", buffer);

//     // ersten 3 Zeichen mit '*'
//     ft_memset(buffer, '*', 3);

//     printf("Nachher: %s\n", buffer); // Erwartete Ausgabe: ***kie

//     return 0;
// }
