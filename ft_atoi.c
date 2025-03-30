/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschuster <jschuster@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 00:35:46 by jschuster         #+#    #+#             */
/*   Updated: 2025/03/21 00:55:12 by jschuster        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
    int i = 0;
    int vorzeichen = 1;
    int ergebnis = 0;
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
           str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
	{
        i++;
    }
    if (str[i] == '-' || str[i] == '+') {
        if (str[i] == '-') {
            vorzeichen = -1;
        }
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9') 
	{
        ergebnis = ergebnis * 10 + (str[i] - '0');
        i++;
    }
    return (ergebnis * vorzeichen);
}

#include <stdio.h>

int ft_atoi(const char *str); // Prototyp deiner Funktion

int main(void) {
    // Test 1: Positive Zahl
    printf("Test 1: %d (Erwartet: 123)\n", ft_atoi("123"));

    // Test 2: Negative Zahl mit Leerzeichen
    printf("Test 2: %d (Erwartet: -42)\n", ft_atoi("   -42"));

    // Test 3: Zeichen nach der Zahl
    printf("Test 3: %d (Erwartet: 56)\n", ft_atoi("56aby"));

    return 0;
}
