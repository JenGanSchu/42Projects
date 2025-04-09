/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschuste <jschuste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 17:53:36 by jschuste          #+#    #+#             */
/*   Updated: 2025/03/31 19:07:04 by jschuste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	i;
	size_t	j;

	if (*little == '\0')
		return ((char *)big);
	i = 0;
	while (i < n && big[i] != '\0')
	{
		j = 0;
		while (i + j < n && big[i + j] != '\0' && little[j] != '\0' && big[i
				+ j] == little[j])
		{
			j++;
		}
		if (little[j] == '\0')
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}

// #include <stdio.h>

// int main()
// {
// 	const char	*haystack = "Hello Pookie";
// 	const char	*needle1 = "Pookie";
// 	const char	*needle2 = "pookie";
// 	const char	*needle3 = "";
// 	const char	*needle4 = "lo, P";

// 	printf("Test 1: %s\n", ft_strnstr(haystack, needle1, 13));
// 	printf("Test 2: %s\n", ft_strnstr(haystack, needle2, 13));
// 	printf("Test 3: %s\n", ft_strnstr(haystack, needle3, 13));
// 	printf("Test 4: %s\n", ft_strnstr(haystack, needle4, 5));
// }