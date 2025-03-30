/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschuster <jschuster@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 16:28:50 by jschuster         #+#    #+#             */
/*   Updated: 2025/01/31 20:13:54 by jschuster        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalpha(int c)
{
    int letter;
	
	letter = c;
	if ((letter >= 'A' && letter <= 'Z') || (letter >= 'a' && letter <= 'z' ))
		return (1);
	return (0);
}

// #include <stdio.h>
// int    main(void)
// {
//     char test_chars[] = {'A', 'z', '1', '%', 'm', 'Z'};
//     int i;

//     printf("Testing ft_isalpha:\n");
//     for (i = 0; i < 6; i++) {
//         char c = test_chars[i];
//         int result = ft_isalpha(c);
//         printf("Character: '%c' -> ft_isalpha: %d\n", c, result);
//     }

//     return 0;
// }
