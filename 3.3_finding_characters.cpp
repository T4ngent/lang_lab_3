#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	string Text = "deb http://mirror.mephi.ru/debian/ stretch main contrib non-freedeb-src http://mirror.mephi.ru/debian/ stretch main contrib non-freedeb http://security.debian.org/ stretch/updates main contrib non-freedeb-src http://security.debian.org/ stretch/updates main contrib non-freedeb http://mirror.mephi.ru/debian/ stretch-updates main contrib non-freedeb-src http://mirror.mephi.ru/debian/ stretch-updates main contrib non-freedeb http://mirror.mephi.ru/debian stretch-backports main contrib non-freedeb-src http://mirror.mephi.ru/debian stretch-backports main contrib non-free";
	int chicli = 0;
	int bukvi = 0;
	int znaki = 0;
	for (int i = 0; i<Text.length(); i++) {
		if(isdigit(Text[i])) {
			chicli++;
		} else {
			if ((Text[i] >='a' && Text[i] <='z') || (Text[i] >='A' && Text[i] <='Z'))
				bukvi++;
			else {
				if(Text[i] != ' ' ) {
					znaki++;
				}
			}
		}
	}
}
cout << "Чисел:"<< chicli << endl;
cout << "Букв:"<< bukvi << endl;
cout << "Знаков:"<< znaki << endl;
return 0;
}