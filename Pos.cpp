/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pos.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboeuf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/16 15:41:47 by sboeuf            #+#    #+#             */
/*   Updated: 2015/01/16 17:17:06 by sboeuf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pos.hpp"

Pos::Pos(int x, int y):
	_x(x),
	_y(y)
{
	
}

Pos::Pos(void):
	_x(0),
	_y(0)
{

}

Pos::Pos(Pos const &p)
{
	*this = p;
}

Pos::~Pos(void)
{

}

Pos &		Pos::operator=(Pos const &p)
{
	this->_x = p._x;
	this->_y = p._y;
	return *this;
}

void		Pos::setX(int x)
{
	this->_x = x;
}

int			Pos::getX(void) const
{
	return this->_x;
}

void		Pos::setY(int y)
{
	this->_y = y;
}

int			Pos::getY(void) const
{
	return this->_y;
}

void		Pos::setPos(int x, int y)
{
	this->_x = x;
	this->_y = y;
}
