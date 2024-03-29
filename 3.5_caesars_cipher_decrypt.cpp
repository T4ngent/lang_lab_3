#include <iostream>
#include <locale>
using namespace std;
wstring decrypt(const std::wstring& text, const int key);
wstring toUpperCase(const wstring& input);
int main() {
	locale loc("ru_RU.UTF-8");
	locale::global(loc);
	setlocale(LC_ALL, "Russian");
	wstring str = L"АБВГДЕЖЗИЙКЛМНОПРОСТ";
	wcout << L"Введите ключ дешифровки" << endl;
	int key;
	cin >> key;
	str = toUpperCase(str);
	if (str==L"") {
		wcout << L"ОШИБКА" << endl;
		return -1;
	}
	str = decrypt(str, key);
	
	wcout << str << endl;
	return 0;
}
wstring decrypt(const std::wstring& text, const int key) {
	locale loc("ru_RU.UTF-8");
	locale::global(loc);
	wstring output = L"";
	const int LAUNGUAGE_SIZE = 32;
	for (wchar_t c : text) {
			if (c - key < L'А') {
				c += LAUNGUAGE_SIZE - key;
			}
			else {
				c -= key;
			}
			output += c;
	} 
	return output;
}
wstring toUpperCase(const wstring & input) {	
	locale loc("ru_RU.UTF-8");
	locale::global(loc);
	wstring output = L"";
	for (wchar_t c : input) {
		if ((L'А' <= c && c <= L'Я') || (L'а' <= c && c <= L'я')) {
			if (L'а' <= c && c <= L'я') {
				output += toupper(c, loc);
			} else {
				output += c;
			}
		} else {
			return L"";
		}
	}
	return output;
}