#include <ctime>

#include "matka.h"

void MATKA::init()
{
	srand(time(NULL));
	corX = rand()%limitX;
	corY = rand()%limitY;
	return;
}

void MATKA::move()
{
	if (!alive)
		return;
		
	srand(time(NULL));
	
	corX += rand()%3 -1;
	corY += rand()%3 -1;
	
	if (corX < 0)
		corX = 0;
	if (corX >= limitX)
		corX = limitX-1;
	if (corY < 0)
		corY = 0;
	if (corY >= limitY)
		corY = limitY-1;
	
	return;
}

bool MATKA::ret_alive()
{
	return alive;
}

void MATKA::set_alive(bool arg)
{
	alive = arg;
	return;
}

