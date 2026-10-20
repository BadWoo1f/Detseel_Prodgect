#include <iostream>
#include <vector>
#include <windows.h>
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

struct lvl //Варианты на 1 уровне
{
	int number;
	string name;
	string opisan;

};

vector <lvl> vlvl;

void Choice_Skill(int g) {

	for (int cikl = 0; cikl < vlvl.size();cikl++) {

		if (g == vlvl[cikl].number) {
			cout << vlvl[cikl].name;
			cout << "/ click _" << cikl << "\n";
			cout << vlvl[cikl].opisan << "\n";
		}
	}
	int gm;
	cin >> gm;
	cout << "vi vibrali: " << vlvl[gm].name << "\n"; //Выбрали первый скилл
}
void Skill_Tree()
{
	
	
	// 1 уровень
	vlvl.push_back({ 1,"Defense", "While wearing armor, you gain a +1 bonus to AC." }); //0
	vlvl.push_back({ 1,"Two-weapon_fighting", "If you are fighting with two weapons, you can add your ability modifier to the damage of the second attack."}); //1
	vlvl.push_back({ 1,"Shooting", "You gain a +2 bonus to attack rolls when attacking with a ranged weapon." }); //2
	// 2 уровень
	vlvl.push_back({ 2,"SURGE_IN_ACTIVITY", "You gain the ability to momentarily transcend your normal limits. On your turn, you can take one additional action in addition to your normal action and bonus action. Once you use this feature, you must finish a short or long rest before you can use it again." }); //
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
		int g = 1;
		int p = 2;
		cout << "You have unlocked the skill tree.\n";
		for (int i = 0;i < 4;i++) { // процесс прокачки
			int op = 4 - i;
			cout << "You have " << op << " free experience points.\nChoose a skill.";
			if (op > 0) { //при всвободных очках опыта
				
				Choice_Skill(g); //выбор скила
				g ++; //лвл игрока

				
			}
			else { //когда очки опыта законичлись
				cout << "\nYou have spent all your experience points.";
			

			}
		}

}


void itog() {
	//Добавить предметы. Возможно переделать прокачку в предметы, а вместо прокачки добавить уникальные умения, как в работе про прокачку.
	// первая идея навыка: убрать рандом из игры, игрок сможет выбирать своего бойца после того, как увидит кого выбрал бот
	// переделать магазин на циклы
	//Добавить больше описаний происходящего в процессе
	//добавить предметы с особыми эффектами, например вампиризм, или постоянное уменьшение домага противнику ну или добавить это в скиллы


	struct unit {
		string name;
		int dmg = 10;
	};
	
	int many = 0;
	int xp = 0;
	int lvl = 0; //переменная очков прокачки/ пусть стоимость 1 очка прокачки будет 5xp
	unit m[3];
	m[0].name = "Мечник";

	m[1].name = "Лучник";

	m[2].name = "Всадник";

	int table[3][3]{ //0=ничья 1= проигрыш 2= победа
		{0,1,2},
		{2,0,1},
		{1,2,0}
	};

	int gamerhp = 300;
	int bothp = 1000;
	cout << "Правила игры: У вас и противника есть свои базы, начальные hp вашей базы: " << gamerhp << " , hp базы противника:" << bothp << "\nТак-же в каждом раунде вам буден дан выбор из трех бойцов: Мечник, лучник и Всадник";
	cout << "\nМечник сильнее Всадника, Лучник сильнее Мечника, Всадник сильнее Лучника";
	cout << "\nТак-же за победы в боях вы получаете деньги, которые можно тратить на улучшение бойцов и базы";
	cout << "\nЗа любые сражения вы получаете xp, но за победы получаете их в большим колличестве. При достижении новых уровней будет доступна прокачка особых скиллов";
	for (int i = 0; i < 100; i++) {
		int bot = rand() % 3;
		int gamer;
		
		cout << "\n0=Мечник. 1=Лучник. 2=Всадник";
		cin >> gamer;
		
		cout << "\nбот выбрал " << bot;
		int result = table[bot][gamer];
		int raznica;
		
		if (result == 0) { //бой с ничьей
			gamerhp -= m[gamer].dmg;
			bothp -= m[bot].dmg;
			raznica = m[gamer].dmg - m[bot].dmg;
			cout << "\nhp игрока " << gamerhp << "\nhp бота " << bothp;
		}
		if (result == 1) { //бой с проигрышем
			gamerhp -= m[gamer].dmg * 1.5;
			bothp -= m[bot].dmg;
			raznica = (m[gamer].dmg*1.5) - m[bot].dmg;
			cout << "\nhp игрока " << gamerhp << "\nhp бота " << bothp;
		}
		if (result == 2) { //бой с победой
			gamerhp -= m[gamer].dmg;
			bothp -= m[bot].dmg * 1.5;
			raznica = m[gamer].dmg -( m[bot].dmg*1.5);
			many += 10;
			cout << "\nhp игрока " << gamerhp << "\nhp бота " << bothp;
		}
		//cout<< " raznica:"<<raznica;
		
			if (raznica==0) {//ничья
				xp += 2;
				cout << "\nxp: " << xp;
	    	}
			if (raznica > 0) {//победа
				xp+= 4;
				cout << "\nxp: " << xp;
			}
			if (raznica < 0) {//проигрыш
				xp += 1;
				cout << "\nxp: " << xp;
			}

		if (gamerhp <= 0 && bothp <= 0) { // Ничья
			cout << "\nНичья";
			break;
		}

		if (gamerhp <= 0 && bothp > 0) { //закончились твои хп, проиграл
			cout << "\nВы проиграли";
			break;
		}
		if (bothp <= 0) { //победил бота
			cout << "\nПобеда!";
			break;
		}

		if (xp >= 5) {
			lvl++;
			xp -= 5;
			cout << "\nПоздравляем с поднятием уровня! Ваш нынешний уровень " << lvl;

		}
		int magaz = many;
		for (int mag = 0; mag < magaz / 5;mag++) {
			cout << "\nУ вас есть " << many << " Денег.\nЖелаете улучшить войска, или базу?\nНажмите 0 для продолжения игры. Нажмите 1 для перехода в магазин.";
			cin >> gamer;
			if (gamer == 1) {//продумать разную стоимость
				cout << "\nДля улучшения оружия Мечника (+5 урона/ стоимость 5) нажмите 1\nДля улучшения оружия Лучника (+5 урона/ стоимость 5) нажмите 2\nДля улучшения оружия Всадника (+5урона/ стоимость 5) нажмите 3\nДля усиления стен базы (+100hp/ стоимость 5) нажмите 4\nДля выхода из меню прокачки нажмите 0";
				cin >> gamer;
				if (gamer == 1 && many >= 5) {//если хватает денег
					many -= 5;
					m[0].dmg + 5;
					cout << "\nУрон вашего Мечник: " << m[0].dmg;
				}
				if (gamer == 1 && many < 5) {//не хватает мани
					cout << "У вас не достаточно денег";
				}
				if (gamer == 2 && many >= 5) {//если хватает денег
					many -= 5;
					m[1].dmg + 5;
					cout << "\nУрон вашего Лучника: " << m[1].dmg;
				}
				if (gamer == 2 && many < 5) {//не хватает мани
					cout << "У вас не достаточно денег";
				}

				if (gamer == 3 && many >= 5) {//если хватает денег
					many -= 5;
					m[2].dmg + 5;
					cout << "\nУрон вашего Всадника: " << m[2].dmg;
				}
				if (gamer == 3 && many < 5) {//не хватает мани
					cout << "У вас не достаточно денег";
				}

				if (gamer == 4 && many >= 5) {//если хватает денег
					many -= 5;
					gamerhp + 100;
					cout << "\nhp вашей базы:" << gamerhp;  //Выдаст в любом случае в конце цикла
				}
				if (gamer == 4 && many < 5) {//не хватает мани
					cout << "У вас не достаточно денег";
				}

				



			}
		}//цикл магазина

		cout << "\nhp вашей базы: " << gamerhp;
		cout << "\nhp базы бота: " << bothp;



	}
}


int main()
{
	SetConsoleOutputCP(CP_UTF8);
	srand(time(0));
	//Skill_Tree();
	itog();

}
