/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amismail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 14:45:49 by amismail          #+#    #+#             */
/*   Updated: 2024/06/20 16:52:58 by amismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcat(char *dest, char *src)
{
	int		i;
	char	*org;

	org = dest;
	i = 0;
	while (*dest != '\0')
		dest++;
	while (*src != '\0')
	{
		*dest = *src;
		dest ++;
		src ++;
	}
	*dest = '\0';
	return (org);
}

/*int	main() {
    char	dest[50] = "Hello, ";
    char	*src = "world!";

    printf("Before strcat: %s\n", dest);
    my_strcat(dest, src);
    printf("After strcat: %s\n", dest);

    return 0;
}*/
