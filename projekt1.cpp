#include <iostream>
#include <ctime>

using namespace std;

int limitX  = 100;
int limitY = 100;

class Facet {
public:
	int x,y;
	bool alone;
	Facet();
	void move();
};

Facet::Facet(){
    alone = 0;
    srand(time(NULL));
	x = rand()%limitX;
	y = rand()%limitY;
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
	bool alone;
	Laska();
	void move();
};

Laska::Laska(){
    alone = 0;
    srand(time(NULL));
	x = rand()%limitX;
	y = rand()%limitY;
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

class Para {
public:
	int x,y;
	bool exist;
	Para();
	void move();
};

Para::Para(){
	if (x < 0) x = 0;
	if (x >= limitX) x = limitX-1;
	if (y < 0) y = 0;
	if (y >= limitY) y = limitY-1;
}

void Para::move(){
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
    Para* pary = new Para[5];
    for(int i = 0;i<4;i++){
        pary[i] = Para();
    }

    int x = 0;
    while(x<100){
        x++;
        for(int i = 0;i<5;i++){
            if(faceci[i].alone){
            faceci[i].move();
            ekran[faceci[i].x][faceci[i].y] = 1;
            }
        }
        for(int i = 0;i<5;i++){
            if(laski[i].alone){
            laski[i].move();
            ekran[laski[i].x][laski[i].y] = 2;
            }
        }
        for(int i = 0;i<5;i++){
            if(pary[i].exist){
            pary[i].move();
            ekran[pary[i].x][pary[i].y] = 3;
            }
        }
        for(int i = 0;i<5;i++){
            if(faceci[i].alone){
                for(int j = 0;j<5;j++){
                    if(laski[j].alone){
                        if(faceci[i].x == laski[j].x && faceci[i].y == laski[j].y) {
                            faceci[i].alone == 0;
                            laski[i].alone == 0;
                            for(int k = 0;k<5;k++){
                                if(pary[k].exist == 0){
                                    pary[k].x = faceci[i].x;
                                    pary[k].y = faceci[i].y;
                                    pary[k].exist = 1;
                                    break;
                                }
                            }
                        }
                    }
                }
            }
        }
        for(int i = 0;i<limitX;i++){
            for(int j = 0;j<limitY;j++){
                switch(ekran[i][j]){
                    case 0:
                        cout << " ";
                        break;
                    case 1:
                        cout << "X";
                        break;
                    case 2:
                        cout << "O";
                        break;
                    case 3:
                        cout << "Q";
                        break;
            }
            cout << endl;
        }
    }

}

}
