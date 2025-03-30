/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschuster <jschuster@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 17:44:20 by jschuster         #+#    #+#             */
/*   Updated: 2025/03/25 23:36:34 by jschuster        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strchr(const char *s, int c)
{
    int i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == (char)c)
        {
            return ((char *)s + i);
        }
        i++;
    }
    if (c == '\0')
    {
        return ((char *)s + i);
    }
    return (0);
}

// #include <stdio.h>

// int main() {
//     const char *text = "Hello Pookie!";
//     char search = 'o';

//     char *result = ft_strchr(text, search);

//     if (result) {
//         printf("Zeichen '%c' gefunden an Adresse: %p\n", search, (void *)result);
//         printf("Rest der Zeichenkette ab dem gefundenen Zeichen: %s\n", result);
//     } else {
//         printf("Zeichen '%c' wurde nicht gefunden.\n", search);
//     }

//     return 0; }
//