#include <stdio.h>
#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	string Text = "deb http://mirror.mephi.ru/debian/ stretch main contrib non-free \ndeb-src http://mirror.mephi.ru/debian/ stretch main contrib non-free \ndeb http://security.debian.org/ stretch/updates main contrib non-free \ndeb-src http://security.debian.org/ stretch/updates main contrib non-free \ndeb http://mirror.mephi.ru/debian/ stretch-updates main contrib non-free \ndeb-src http://mirror.mephi.ru/debian/ stretch-updates main contrib non-free \ndeb http://mirror.mephi.ru/debian stretch-backports main contrib non-free \ndeb-src http://mirror.mephi.ru/debian stretch-backports main contrib non-free";
	string mephi = "mephi";
	string yandex = "yandex";
	for (int i = 0; i<10; i++)
		if (Text.find(mephi) != -1) {
			Text.replace(Text.find(mephi),mephi.length(),yandex);
		}
	cout << "Изменённый текст: " <<endl;
	cout << Text << endl;
	return 0;
}