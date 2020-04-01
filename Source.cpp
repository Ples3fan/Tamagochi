#include<iostream>
#include<fstream>
#include <windows.h>
#include<string>
#include<conio.h>
#include<ctime>
using namespace std;

void z() { Sleep(100); }
void z2() { Sleep(210); }
void z3() { Sleep(900); }

class Murdock {
private:
	string Nikname;
	int stamina;
	int inpoints;
	int happypoints;

public:
	Murdock() {
		Nikname = "—тандарт";
		stamina = 20;
		inpoints = 20;
		happypoints = 20;
	}
	Murdock(string Nik, int chois){
		Nikname = Nik;
		if (chois == 1) {
			stamina = 20;
			inpoints = 10;
			happypoints = 30;
		}
		if (chois == 2) {
			stamina = 25;
			inpoints = 25;
			happypoints= 10;
		}
		if (chois == 3) {
			stamina = 40;
			inpoints = 5;
			happypoints = 15;
		}
	}
	void set_stamina(int stamina2) {
		stamina = stamina2;
	}

	void set_inpoints(int intelligence) {
		inpoints = intelligence;
	}
	void set_happypoints(int hap) {
		happypoints = hap;
	}
	int get_haappypoints() {
		return happypoints;
	}
	int get_stamina() {
		return stamina;
	}

	int get_inpoints() {
		return inpoints;
	}
	void mod_intelligence(int more) {
		inpoints += more;
	}

	void mod_stamina(int type) {
		int stam;
		stam = get_stamina();

		if (type == 1) { 
			stam = stam - 2;
		}
		else if (type == 2) { 
			stam = stam + 2;
		}
		set_stamina(stam);
	}
	void mod_happypoints(int hap) {
		int happyp = get_haappypoints();

		happyp += hap;

		set_happypoints(happyp);
	}

	void decrease_happy(int hap) {
		int happe = get_haappypoints();
		happe -= hap;
		set_happypoints(happe);
	}
	void blink() {
		int in;
		in = get_stamina();
		if (in <= 0) {
			cout << "Ќе хватает выносливости!! —ъешь что-нибуть";
			z3();
		}
		else {				
			string murdy = " /\\_/\\\n (^.w.^)\n (0|||0)\n  |||||\n (\\|||/)";
			string murdy2 = " /\\_/\\\n (^.w.^)\n (\\|||/)\n  |0|0|\n (\\|||/)";

			for (int i = 0; i < 6; i++) {
				cout << murdy;
				z();
				if (system("CLS")) system("clear");
				z();
				cout << " ";
				cout << murdy2;
				z2();
				if (system("CLS")) system("clear");
				cout << " ";

			}
			mod_stamina(1);
		}
	}

	void run() {
		string murdy = "  /\\_/\\\n (^.w.^)\n (0|||0)\n  |||||\n (\\|||/)";
		string murdy2 = "  \t/\\_/\\\n \t(^.w.^)\n \t(0|||0)\n  \t|||||\n \t(\\|||/)";
		int st;
		st = get_stamina();
		if (st <= 0) {
			cout << "Ќе хватает выносливости!! —ъешь что-нибуть";
			z3();
		}
		else {
			for (int i = 0; i < 8; i++) {
				cout << "\n\n\n\n\n";
				z();
				for (int j = 0; j < i; j++) {
					cout << murdy;
					z();
					if (system("CLS")) system("clear");
					cout << murdy2;
					z();
					if (system("CLS")) system("clear");
				}
			}
			mod_stamina(1);
		}
	}

	void surprised() {
		string murdy = " /\\_/\\\n (^.w.^)\n (0|||0)\n  |||||\n (\\|||/)";
		string murdy2 = " /\\_/\\\n (^.0.^)\n (\\|||/)\n  |0|0|\n (\\|||/)";

		for (int i = 0; i < 6; i++) {
			cout << murdy;
			z();
			if (system("CLS")) system("clear");
			z();
			cout << " ";
			cout << murdy2;
			z2();
			if (system("CLS")) system("clear");
			cout << " ";

		}
	}

	void eating() {
		string murdy = " /\\_/\\\n (^.w.^) ***\n (0|||0)\n  |||||\n (\\|||/)";;
		string murdy2 = " /\\_/\\\n (^.O.^)  **\n (0|||0)\n  |||||\n (\\|||/)";;
		string murdy3 = " /\\_/\\\n (^.w.^)   *\n (0|||0)\n  |||||\n (\\|||/)";;

		for (int i = 0; i < 6; i++) {
			cout << murdy;
			z2();
			z2();
			if (system("CLS")) system("clear");
			z();
			cout << " ";
			cout << murdy2;
			z2();
			z2();
			if (system("CLS")) system("clear");
			cout << " ";
			cout << murdy3;
			z2();
			z2();
			if (system("CLS")) system("clear");
			cout << " ";

		}
		mod_stamina(2);
	}

	void chat(string yousay) {

		string kittysay = "м€€у\n";
		string kittysay2 = "мурррр\n";
		string kittysay3 = "м€€€ууу муррр\n";
		string kittybye = "пфффф.....шшшшшш!!!!\n";

		int count = 0;
		int chap = 0;
		int quit = 0;

		while (yousay != "ѕока" /*|| quit!=1*/) {
			cin >> yousay;
			int value = rand() % 100;
			if (value < 25) {
				cout << kittysay2;
			}
			else if (value > 25 && value < 50) {
				cout << kittysay3;
			}
			else if (value < 100 && value>50) {
				cout << kittysay;
			}
			else {
				cout << kittysay;
			}
			if (yousay == "ѕривет") {
				cout << "мурррр м€у!!\n";
				chap++;
			}
			if (yousay == " уку") {
				cout << "ммм м€€€уу...\n";
				chap++;
			}
			if (yousay == " ис-кис") {
				/*Murdock gatito;*/
				/*gatito.*/surprised();
				chap++;
			}
			count++;
			//if (chap > 10) {
			//	cout << kittybye;
			//	quit++;
			//}
		}
		mod_intelligence(count);
		mod_happypoints(chap);
	}

	void math() {
		srand(time(NULL));
		string murdy = "  /\\_/\\\n (^.w.^)- <( ";
		int reply=0;
		int intelligence = 0;
		int happy = 0;

		cout << "ƒавай начнем, если хочешь закончить напиши -1\n\n";

		while (reply != -1) {
			int value = rand() % 100;
			int value2 = rand() % 100;
			cout << murdy;
			cout << value << " + ";
			cout << value2 << " ? ";
			cout << " )\n (0|||0)\n  |||||\n (\\|||/)\n";

			cin >> reply;
			if (reply == (value + value2)) {
				cout << "м€€у!\n";
				cout << "+2 к интелекту -1 к радости\n";
				intelligence++;
				intelligence++;
				happy++;
			}
			else {
				cout << "  /\\_/\\\n (O.>.o)......м€€€у?\n (0|||0)\n  |||||\n (\\|||/)\n";
			}

		}
		decrease_happy(happy);
		mod_intelligence(intelligence);
	}

};

int main() {
	system("color 0c");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	/*Murdock gatito;*/
	int ans=-1;
	string ans1;
	int suma;
	string Nick;
	int vibor=0;
	cout << "¬ведите им€: "; cin >> Nick;
	ifstream ifs(Nick, ios::binary);
	if (!ifs) { cout << "\t\t\t\t ¬ыберите спецификацию персонажа:\n 1 - ¬еселый болванчик\n 2 - јристократ\n 3 - «доровенна€ детина\n\n ¬аш выбор: ";
				cin >> vibor; 
			  }
	if (vibor == 0) {
		vibor = 2;
	}
	Murdock gatito(Nick, vibor);
		ifs.read(reinterpret_cast<char*>(&gatito), sizeof(gatito));
		ifs.close();
	

	while (ans != 0) {

		cout << "\n\n\n „то ты хочешь сделать?\n\n0-выход\n1-танцевать\n2-бегать\n3-eat\n4-общатьс€\n5-заниматс€ математикой\n6-просмотреть выносливость\n7-просмотреть интеллект\n8-просотреть уровень радости\n";
		cout << "“вой выбор: ";
		cin >> ans;

		switch (ans) {
		case 1:
			gatito.blink();
			break;
		case 2:
			gatito.run();
			break;
		case 3:
			gatito.eating();
			break;
		case 4: {
			string ans3;
			cout << "введите текст:\n";
			gatito.chat(ans3);
			break;
		}
		case 5:
			gatito.math();
			break;
		case 6: {
			int st;
			st = gatito.get_stamina();
			cout << st << "\n";
			z3();
			break;
		}

		case 7: {
			int in;
			in = gatito.get_inpoints();
			cout << in << "\n";
			z3();
			break;
		}
		case 8: {
			int hp;
			hp = gatito.get_haappypoints();
			cout << hp << endl;
			z3();
			break;
		}
		default:
			cout << "Ќе правильно! ѕопробуй снова\n";
			break;
		} 
		if (system("CLS")) system("clear");
	}
	ofstream ofs(Nick, ios::binary);
	ofs.write(reinterpret_cast<char*>(&gatito), sizeof(gatito));
	ofs.close();
	return 0;
}

