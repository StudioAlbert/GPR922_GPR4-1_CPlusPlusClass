#include <iostream>

enum class Aliment
{
	BURGER,
	SUSHI,
	SALAD,
	PIZZA
};

enum class Monster {
	ORC,
	DRAGON,
	ELF,
	ELON_MUSK
};

int monsterHealth(Monster monster_) {
	
	switch (monster_)
	{
	case Monster::ORC:
		return 50;
		break;
	case Monster::DRAGON:
		return 5000;
		break;
	case Monster::ELF:
		return 10;
		break;
	case Monster::ELON_MUSK:
		return 200;
		break;
	default:
		return -1;
		break;
	}

}

enum class Cities : int
{
	PARIS = 1,
	LONDON = 1,
	BERLIN = 1,
	MADRID = 0x8
};

enum class CitiesLatitude : int
{
	PARIS = 1,
	LONDON = 3,
	TOKYO = 6,
	MADRID = 0x8
};

enum class Colors : long long
{
	DARK = 0xffff00ff,
	FADE = 0xffff00ff,
	BRIGHT = 0xff0000ff
};

std::string AlimentToString(Aliment aliment_) {

	switch (aliment_)
	{
	case Aliment::BURGER:
		return "American food with bread, meat and cheese";
		break;

	case Aliment::SUSHI:
		return "Japanese food but cold";
		break;

	case Aliment::SALAD:
		return "One of the five to eat everyday";
		break;

	case Aliment::PIZZA:
		return "No ananas";
		break;

	default:
		return "Value out of range";
		break;
	}

}

int main() {

	std::cout << "01-Basics-Enum" << std::endl;

	Aliment monAlimentPrefere = Aliment::PIZZA;

	std::string retour = AlimentToString(monAlimentPrefere);
	std::cout << retour << std::endl;
	std::cout << static_cast<int>(monAlimentPrefere) << std::endl;

	Cities city;
	city = Cities::LONDON;
	std::cout << static_cast<int>(city) << std::endl;

	Colors color;
	color = Colors::DARK;
	std::cout << static_cast<long long>(color) << std::endl;

	return EXIT_SUCCESS;

}


