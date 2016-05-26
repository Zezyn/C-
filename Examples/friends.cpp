#include<iostream>

using namespace std;
class Settings
{
	public:
	   Settings();
		void setPosition(Position& p);
		Position getPosition();
};

class Character
{
	public:
	   Character(Settings& settings)
		{
			settings.Settings();
			}
};

int main()
{


	return 0;
}
