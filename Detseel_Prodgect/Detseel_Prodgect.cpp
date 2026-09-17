#include <iostream>
#include <vector>
using namespace std;

/*void() {
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
}*/

int main()
{
	
	struct lvl //Варианты на 1 уровне
	{
	int number;
	string name;
	string opisan;
	
	};

	vector <lvl> vlvl;
	// 1 уровень
	vlvl.push_back({ 1,"Defense", "While wearing armor, you gain a +1 bonus to AC." }); //0
	vlvl.push_back({ 1,"Two-weapon fighting", "If you are fighting with two weapons, you can add your ability modifier to the damage of the second attack."}); //1
	vlvl.push_back({ 1,"Shooting", "You gain a +2 bonus to attack rolls when attacking with a ranged weapon." }); //2
	// 2 уровень
	vlvl.push_back({ 2,"SURGE IN ACTIVITY", "You gain the ability to momentarily transcend your normal limits. On your turn, you can take one additional action in addition to your normal action and bonus action. Once you use this feature, you must finish a short or long rest before you can use it again." }); //
    //3
	// 3 уровень
	vlvl.push_back({ 3, "Samurai", "Your swiftness in battle can help you defend yourself and land a precise strike.\nAs a bonus action on your turn, you can gain advantage on weapon attack rolls until the end of the current turn.You also gain 5 temporary hit points.\nYou can use this feature three times.You regain all expended uses after finishing a long rest." });
		//4
		vlvl.push_back({ 3, "Champion", "Your weapon attacks score a critical hit on a roll of 19 or 20 on the attack roll."}); //5
		vlvl.push_back({ 3, "Mystic Archer" , "Once per turn, when you fire an arrow from your shortbow or longbow as part of an Attack action, you can apply one of your magic shot options to that arrow.\nYou decide whether to use this ability after successfully hitting a creature with the arrow, unless the option chosen does not require an attack roll.\nhave two uses of this ability, and you regain all expended uses when you finish a short or long rest."}); 
		//6
		// 4 уровень
		vlvl.push_back({ 4, "ENHANCEMENT OF CHARACTERISTICS", "You can increase the value of one of your ability scores by 2, or two ability scores by 1."}); //7
		vlvl.push_back({ 4, "Shield master" , "You use shields for both defense and offense. You gain the following benefits while using a shield:\nIf you take the Attack action on your turn, you can use a bonus action to try to shove a creature within 5 feet of you with your shield.\nIf you aren't incapacitated, you can add your shield's AC bonus to any Dexterity saving throw you make against a spell or other harmful effect that targets only you.\nIf you are subjected to an effect that allows you to make a Dexterity saving throw to take only half damage, you can use your reaction to position your shield between yourself and the source of the effect; if you succeed on the saving throw, you take no damage instead of half damage."}); 
		//8
		vlvl.push_back({ 4, "Defensive duelist" ,"If you are using a weapon with the /finesse/ property that you are proficient with, and another creature hits you with a melee attack, you can use your reaction to add your proficiency bonus to your AC against that attack, potentially causing it to miss."}); 
		//9
		vlvl.push_back({ 4, "Mobile", "You are incredibly fast and agile. You gain the following benefits:\nYour speed increases by 10 feet.\nWhen you take the Dash action, difficult terrain does not slow your movement for that turn.\nIf you make a melee attack against a creature, you do not provoke opportunity attacks from that creature for the rest of the turn, whether you hit or miss."}); 
        //10

		cout << "You have unlocked the skill tree.\n";
		for (int i = 0;i < 4;i++) { // процесс прокачки
			int op = 4 - i;
			cout << "You have " << op << " free experience points.\nChoose a skill.";
			if (op > 0) { //при всвободных очках опыта
				for (int cikl = 0; cikl < vlvl.size();cikl++) {
					int g = 1;
					if (g == vlvl[cikl].number) {
						cout << vlvl[cikl].name;
					}
				}
				break;
			}
			else { //когда очки опыта законичлись
				cout << "\nYou have spent all your experience points.";
			}
		}

}

