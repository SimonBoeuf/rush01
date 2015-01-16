/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GameEntity.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboeuf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/16 15:54:26 by sboeuf            #+#    #+#             */
/*   Updated: 2015/01/16 17:16:48 by sboeuf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GameEntity.hpp"

GameEntity::GameEntity(Pos p, Size s, std::map<int, std::string> shape):
	_pos(p),
	_size(s),
	_shape(shape)
{
	std::map<int, std::string>::iterator iter;
	if (shape.size() != s.getH())
		throw SizeException();
	for (iter = shape.begin(); iter != shape.end(); ++iter)
	{
		if(iter->second.length() != s.getW())
			throw SizeException();
	}
}

GameEntity::GameEntity(GameEntity const & ge)
{
	*this = ge;
}

GameEntity				&GameEntity::operator=(GameEntity const & ge)
{
	this->_pos = ge._pos;
	this->_size = ge._size;
	this->_shape = ge._shape;
	return *this;
}

void					GameEntity::setPos(Pos p)
{
	this->_pos = p;
}

Pos						GameEntity::getPos(void) const
{
	return this->_pos;
}

void					GameEntity::setSize(Size s)
{
	this->_size = s;
}

Size					GameEntity::getSize(void) const
{
	return this->_size;
}

void					GameEntity::setShape(std::map<int, std::string> shape)
{
	this->_shape = shape;
}

std::map<int, std::string>	GameEntity::getShape(void) const
{
	return this->_shape;
}

const char					*GameEntity::SizeException::what(void) const throw()
{
	return ("Size of the shape does not match the parameters");
}
