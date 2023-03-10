/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 01:27:00 by marvin            #+#    #+#             */
/*   Updated: 2023/03/03 01:27:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *src)
{
    int i;
    int s;
    int n;

    i = 0;
    s = 1;
    n = 0;
    while (src[i] == ' ' || (src[i] >= 9 && src[i] <= 13))
        i++;
    if (src[i] == '+' || src[i] == '-')
    {
        if (src[i] == '-')
            s *= -1;
        i++;
    }
    while (src[i] >= '0' && src[i] <= '9')
    {
        n *= 10;
        n += src[i] - '0';
        i++; 
    }
    return (n * s);
}

/*#include <stdio.h>
#include "libft.h"

int main(void)
{
    const char  *s1 = "         -1547asdfvr  ";
    const char  *s2 = "casa";

    printf("result: %d\n", ft_atoi(s1));
    printf("not atoi: %d\n", ft_atoi(s2));
    return (0);
}*/