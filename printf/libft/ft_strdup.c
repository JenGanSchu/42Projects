/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschuste <jschuste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 17:48:31 by jschuste          #+#    #+#             */
/*   Updated: 2025/03/31 18:44:31 by jschuste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	size_t	len;
	size_t	i;

	len = 0;
	while (s[len])
	{
		len++;
	}
	dup = (char *)malloc((len + 1) * sizeof(char));
	if (!dup)
	{
		return (0);
	}
	i = 0;
	while (i < len)
	{
		dup[i] = s[i];
		i++;
	}
	dup[len] = '\0';
	return (dup);
}

// #include <stdio.h>

// int	main(void)
// {
// 	const char *original = "Hey, Pookie!";
// 	char *kopie = ft_strdup(original);

// 	if (kopie)
// 	{
// 		printf("Original: %s\n", original);
// 		printf("Kopie: %s\n", kopie);
// 		free(kopie); // Speicher freigeben
// 	}
// 	else
// 	{
// 		printf("Speicherzuweisung fail.\n");
// 	}
// 	return (0);
// }