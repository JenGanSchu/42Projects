/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschuste <jschuste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 17:40:26 by jschuste          #+#    #+#             */
/*   Updated: 2025/03/31 18:42:58 by jschuste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	size_t			i;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ptr1[i] != ptr2[i])
			return (ptr1[i] - ptr2[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>

// int main()
// {
// 	char str1[] = "Pookie";
// 	char str2[] = "Pooki";

// 	int reesult = ft_memcmp(str1, str2, 10)
// 	if (result == 0)
// 		printf("Speicherbereiche gleich.\n");
// 	else if (result > 0)
// 		printf("str1 ist groesser als str2.\n");
// 	else if (result < 0)
// 		printf("str1 ist kleienr als str2.\n");

// 	return (0);
// }