/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschuster <jschuster@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 20:23:59 by jschuster         #+#    #+#             */
/*   Updated: 2025/03/26 01:17:56 by jschuster        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *joinstr;
    size_t  i;
    
    if (!s1 || !s2)
        return (0);
    i = 0;
    while (s1[i])
        i++;
    while (s2[i - ft_strlen(s1)])
        i++;
    joinstr = (char *)malloc(sizeof(char) * (i + 1));
    if (!joinstr)
        return (0);
    i = 0;
    while (*s1)
    {
        joinstr[i] = *s1;
        i++;
        s1++;
    }
    while (*s2)
    {
        joinstr[i] = *s2;
        i++;
        s2++;
    }
    joinstr[i] = '\0';
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
