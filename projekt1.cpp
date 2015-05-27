#include <iostream>
#include <ctime>

using namespace std;

int limitX  = 100;
int limitY = 100;

class Facet {
public:
	int x,y;
	Facet();
	void move();
};

Facet::Facet(){
    srand(time(NULL));
	x = rand()%limitX;
	y = rand()%limitY;

	if (x < 0) x = 0;
	if (x >= limitX) x = limitX-1;
	if (y < 0) y = 0;
	if (y >= limitY) y = limitY-1;
}

void Facet::move(){
    srand(time(NULL));
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
	void move();
};

Laska::Laska(){
    srand(time(NULL));
	x = rand()%limitX;
	y = rand()%limitY;

	if (x < 0) x = 0;
	if (x >= limitX) x = limitX-1;
	if (y < 0) y = 0;
	if (y >= limitY) y = limitY-1;
}

void Laska::move(){
    srand(time(NULL));
	x += rand()%3 -1;
	y += rand()%3 -1;

	if (x < 0) x = 0;
	if (x >= limitX) x = limitX-1;
	if (y < 0) y = 0;
	if (y >= limitY) y = limitY-1;
}


int main() {
    int ekran[limitX][limitY];
	for(int i = 0;i<limitX;i++){
		for(int j = 0;j<limitY;j++){
			ekran[i][j] = 0;
		}
	}
    Facet* faceci = new Facet[5];
    for(int i = 0;i<4;i++){
        faceci[i] = Facet();
    }
    Laska* laski = new Laska[5];
    for(int i = 0;i<4;i++){
        laski[i] = Laska();
    }

    int x = 0;
    while(x<100){
        x++;
        for(int i = 0;i<4;i++){
            faceci[i].move();
            ekran[faceci[i].x][faceci[i].y] = 1;
        }
        for(int i = 0;i<4;i++){
            laski[i].move();
            ekran[laski[i].x][laski[i].y] = 1;
        }
        for(int i = 0;i<limitX;i++){
            for(int j = 0;j<limitY;j++){
                switch(ekran[i][j]){
                    case 0:
                        cout << " ";
                        break;
                    case 1:
                        cout << "x";
                        break;
                    case 2:
                        cout << "x";
                        break;
            }
        }
    }

}

}
