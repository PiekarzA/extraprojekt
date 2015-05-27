#include <iostream>
#include <ctime>

srand(time(NULL));
int limitX  = 100;
int limitY = 100;

class Facet {
public:
	int x,y;
	Facet();
	move();
}

Facet::Facet(){
	x = rand()%limitX;
	y = rand()%limitY;

	if (x < 0) x = 0;
	if (x >= limitX) x = limitX-1;
	if (y < 0) y = 0;
	if (y >= limitY) y = limitY-1;
}

Facet::move(){
	x += rand()%3 -1;
	y += rand()%3 -1;

	if (x < 0) x = 0;
	if (x >= limitX) x = limitX-1;
	if (y < 0) y = 0;
	if (y >= limitY) y = limitY-1;
}




class Laska {
public:
	int x,y;
	Laska();
}

Laska::Laska(){
	x = rand()%limitX;
	y = rand()%limitY;

	if (x < 0) x = 0;
	if (x >= limitX) x = limitX-1;
	if (y < 0) y = 0;
	if (y >= limitY) y = limitY-1;
}

Laska::move(){
	x += rand()%3 -1;
	y += rand()%3 -1;

	if (x < 0) x = 0;
	if (x >= limitX) x = limitX-1;
	if (y < 0) y = 0;
	if (y >= limitY) y = limitY-1;
}

int main() {
	//yo

}
