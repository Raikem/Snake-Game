#pragma once

#include "Snake.h"
#include "Board.h"
#include <random>

class Apple
{
public:
	Apple(std::mt19937& rng, const Board& board, const Snake& snake );
	void Respawn( std::mt19937& rng,const Board& board,const Snake& snake);
	void Draw(Board& board) const;
	const Location& GetLocation() const;
private:
	static constexpr Color c = Colors::Red;
	Location loc;
};