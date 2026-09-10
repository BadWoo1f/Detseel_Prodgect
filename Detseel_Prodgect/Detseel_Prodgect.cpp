#include <iostream>
#include <vector>
using namespace std;
int main()
{
	struct gamer {
		string gmname;
		int many = 400;
		int gruz = 15;
	};

	struct tovar
	{
		string name;
		int cena;
		int ves;
	};

	gamer player;
	vector <tovar> magazin;

	magazin.push_back({ "hill",50 ,1 }); // 0
	magazin.push_back({ "mech",300 ,10 }); // 1
	magazin.push_back({ "shit",250 ,8 }); //2
	magazin.push_back({ "loock",300 ,3 }); //3
	magazin.push_back({ "boots",150 ,2 }); //4

	cout << "Hello in magazin." << "\n";

	for (int i = 0;i < magazin.size();i++) { //Показ товаров и их характеристик

		cout << i << " " << magazin[i].name << " ";
		cout << i << " " << "cena: " << magazin[i].cena << " ";
		cout << i << " " << "ves: " << magazin[i].ves << "\n";
	}

	cout << "dlya pocupci press nomber tovar\n" << "vash balans: " << player.many << "\n vash ves: " << player.gruz << "\n"; //что нажать для покупки и сколько есть денег и свободного веса

	for (int p = 0; p < 5;p++) {
		int gm;
		cin >> gm;
		if (magazin[gm].cena > player.many) { //не хватает денег
			cout << "\nne hvataet deneg";
		}
		if (magazin[gm].ves > player.gruz) { //не хватает грузоподъемности
			cout << "\nne hvataet gruzopodemnosti";
		}
		if (magazin[gm].cena < player.many && magazin[gm].ves < player.gruz) { //покупка свершилась
			player.many -= magazin[gm].cena;
			player.gruz -= magazin[gm].ves;
			cout << "\nvi cupili: " << magazin[gm].name << "\nvash balans: " << player.many << "\nvash gruz: " << player.gruz;
		}
	}
}

