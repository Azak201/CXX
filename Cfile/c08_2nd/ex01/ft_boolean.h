/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amismail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 13:23:30 by amismail          #+#    #+#             */
/*   Updated: 2024/06/30 17:18:37 by amismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

# define TRUE 1

# define FALSE 0

# define SUCCESS 0

# define EVEN_MSG "I have an even number of arguments.\n"

# define ODD_MSG "I have an odd number of arguments.\n"

# define EVEN(nbr) (((nbr) % 2 == 0) ? 1 : 0)

typedef int	t_bool;

#endif
