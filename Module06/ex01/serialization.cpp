/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-kang <minguk.gaang@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 01:25:10 by min-kang          #+#    #+#             */
/*   Updated: 2022/03/30 19:54:38 by min-kang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialization.hpp"

uintptr_t	serialize(Data *ptr) {
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*	deserialize(uintptr_t raw) {
	return (reinterpret_cast<Data *>(raw));
}