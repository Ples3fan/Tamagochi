#include<iostream>
#include<fstream>
#include <windows.h>
#include<string>
#include<conio.h>
using namespace std;

void z() { Sleep(100); }
void z2() { Sleep(210); }
void z3() { Sleep(900); }

class Murdock {
private:
	int stamina = 20;
	int inpoints = 0;

public:
	void set_stamina(int stamina2) {
		stamina = stamina2;
	}

	void set_inpoints(int intelligence) {
		inpoints = intelligence;
	}

	int get_stamina() {
		return stamina;
	}

	int get_inpoints() {
		return inpoints;
	}

	void mod_intelligence(int more) {
		int inte = get_inpoints();

		inte = inte + more;

		set_inpoints(inte);
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

		int count = 0;

		while (yousay != "ѕока") {
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
			}
			if (yousay == "cute") {
				cout << "ммм м€€€уу...\n";
			}
			if (yousay == " отик") {
				Murdock gatito;
				gatito.surprised();
			}
			count++;
		}
		mod_intelligence(count);
	}

	void math() {
		string murdy = "  /\\_/\\\n (^.w.^)- <( ";
		int reply=0;
		int intelligence = 0;

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
				cout << "+1 к интелекту\n";
				intelligence++;
				intelligence++;
			}
			else {
				cout << "  /\\_/\\\n (O.>.o)......м€€€у?\n (0|||0)\n  |||||\n (\\|||/)\n";
			}

		}

		mod_intelligence(intelligence);
	}

};

int main() {
	system("color 0c");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Murdock gatito;
	int ans=-1;
	string ans1;
	int suma;

	while (ans != 0) {

		cout << "\n\n\n „то ты хочешь сделать?\n\n0-выход\n1-танцевать\n2-бегать\n3-eat\n4-общатьс€\n5-заниматс€ математикой\n6-просмотреть выносливость\n7-просмотреть интеллект\n";
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

		default:
			cout << "Ќе правильно! ѕопробуй снова\n";
			break;
		} 
		if (system("CLS")) system("clear");
	} 
	return 0;
}

