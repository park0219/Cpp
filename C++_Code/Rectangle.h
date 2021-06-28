#ifndef __Rectangle_h__
#define __Rectangle_h__
#include "Location.h"

class Rectangle {
private:
	Location upLeft;
	Location lowRight;
public:
	bool InitMembers(Location &ul, Location &lr);
	void showRecinfo();
};


#endif // !__Rectangle_h__
