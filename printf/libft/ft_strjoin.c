/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschuste <jschuste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 17:52:58 by jschuste          #+#    #+#             */
/*   Updated: 2025/03/31 17:57:45 by jschuste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	copy_strings(char *dest, const char *s1, const char *s2)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		dest[i + j] = s2[j];
		j++;
	}
	dest[i + j] = '\0';
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joinstr;
	size_t	len1;
	size_t	len2;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	joinstr = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (!joinstr)
		return (NULL);
	copy_strings(joinstr, s1, s2);
	return (joinstr);
}

// #include <stdio.h>

// int main()
// {
//     char *s1 = "Hello, ";
//     char *s2 = "World!";
//     char *result;

//     result = ft_strjoin(s1, s2); // Zeichenketten verbinden
//     printf("Result: '%s'\n", result);

//     free(result); // Speicher freigeben
//     return (0);
// }