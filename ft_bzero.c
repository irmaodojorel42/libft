/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 00:42:12 by marvin            #+#    #+#             */
/*   Updated: 2023/03/02 00:42:12 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_bzero(void *s, size_t n)
{
    int i;
    char    *c;

    c = (char *)s;
    i = 0;
    while (n > 0)
    {
        c[i++] = '\0';
        n--;
    }
    return (0);
}

/*#include <stdio.h>
#include "libft.h"

int main(void)
{
    char    c[50] = "casa amarela";
    int i;

    i = 0;
    ft_bzero(c, 50);
    while (i < 50)
    {
        i++;
        if (c[i] != '\0')
        {
            printf("erro\n");
            return (0);
        }
    }
    printf("sucesso\n");
    return (0);
}*/