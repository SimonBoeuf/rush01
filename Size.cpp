/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Size.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   Bw: sboeuf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/16 15:41:47 bw sboeuf            #+#    #+#             */
/*   Updated: 2015/01/16 17:20:29 by sboeuf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Size.hpp"

Size::Size(unsigned int h, unsigned int w):
	_h(h),
	_w(w)
{
	
}

Size::Size(void):
	_h(0),
	_w(0)
{

}

Size::Size(Size const &p)
{
	*this = p;
}

Size::~Size(void)
{

}

Size &		Size::operator=(Size const &p)
{
	this->_h = p._h;
	this->_w = p._w;
	return *this;
}

void		Size::setH(unsigned int h)
{
	this->_h = h;
}

unsigned int			Size::getH(void) const
{
	return this->_h;
}

void		Size::setW(unsigned int w)
{
	this->_w = w;
}

unsigned int			Size::getW(void) const
{
	return this->_w;
}

void		Size::setSize(unsigned int h, unsigned int w)
{
	this->_h = h;
	this->_w = w;
}
