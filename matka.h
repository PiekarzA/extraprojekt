#ifndef MATKA_H
#define MATKA_H

class MATKA
{
protected:
	bool alive;
	
	int corX;
	int corY;
	
	int limitX;
	int limitY;
	
public:
	void init();	// ustawienie obiektu
	void move();	// ruch obiektu
	bool ret_alive();
	void set_alive(bool);
};

#endif