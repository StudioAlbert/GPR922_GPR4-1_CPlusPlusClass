#include <iostream>
#include <map>
#include <string>

int main()
{

	std::map<std::string, std::string> monMap;
	
	monMap.emplace("Sebastien", "0620785172");
	monMap.emplace("Aladin", "45435345435");
	monMap.emplace("Nemoz", "2");
	monMap["Benjamin"] = "jfhjkhfjkdh";

	//std::cout << "Votre nom ?" << std::endl;
	//std::string cle;
	//std::cin >> cle;

	//std::cout << "Votre numéro ?" << std::endl;
	//std::string valeur;
	//std::cin >> valeur;

	//monMap[cle] = valeur;

	std::cout << monMap["Sebastien"] << std::endl;

	for(auto mapIt = monMap.begin(); mapIt != monMap.end(); ++mapIt)
	{
		std::cout << "Pair value : " << mapIt->first << ":" << mapIt->second << std::endl;
	}

	for (auto onePair : monMap)
	{
		std::cout << "Pair value : " << onePair.first << ":" << onePair.second << std::endl;
	}

	//std::cout << "qui cherchez vous ?" << std::endl;
	//std::cin >> cle;

	//auto itTofind = monMap.find(cle);
	//if(itTofind != monMap.end())
	//{
	//	std::cout << "Trouvé le numéro = " << itTofind->second << std::endl;
	//}else
	//{
	//	std::cout << "Pas trouvé !!!!" << std::endl;
	//}
	//
	//std::map<int, int> monMapInt;

	//monMapInt.emplace(10, 456777);
	//monMapInt.emplace(1, 45);

	//std::cout << monMapInt.at(10) << std::endl;
	//
}
