#include <iostream>

class Player
{
	private:
	int	id;
	std::string name;
	public:
	Player(int sid, std::string sname)
	{
		id = sid;
		name = sname;
		std::cout << "Created default player " << id << " named " << name << std::endl;
	}
	Player(int sid)
	{
		id = sid;
		name = "default";
		std::cout << "Creaed special player " << id << " named " << name << std::endl;
	}
	~Player()
	{
		std::cout << "Cleaned player " << id << " " << name << std::endl;
		id = 0;
		name = "null";
	}

};

int main(void)
{
	Player player1(0, "Lilly");
	Player player2(1);
	return (0);
}
