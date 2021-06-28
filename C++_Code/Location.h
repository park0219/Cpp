#ifndef __LOCATION_H__
#define __LOCATION_H__

class Location {
private:
	int x;
	int y;
public:
	bool InitMembers(int xpos, int ypos);
	int getX();
	int getY();
	bool setX(int xpos);
	bool setY(int ypos);
};

#endif // !__LOCATION_H__


