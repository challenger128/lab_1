#include <iostream>
#include<string.h>

using namespace std;


int main() {
	char str[256];
	cout << "Enter sentence -> ";
	gets_s(str);
	str[255] = '\0';
	int	FirstLetter = -1;
	for (int i = 0; i < 255; ++i) {
		if (str[i] != ' ' && str[i] != '.' && FirstLetter == -1) {
			FirstLetter = i;
		}
		else {
			if (str[i] == ' ' || str[i] == '.') {
				bool DigitWord = true;
				for (int j = FirstLetter; j < i; ++j) {
					if (!(str[j] >= '0' && str[j] <= '9')) {
						DigitWord = false;
						break;
					}
				}
				if (str[FirstLetter] >= '0' && str[FirstLetter] <= '9' && !DigitWord) {
					str[FirstLetter] = '_'; // меняем первый символ слова, чтобы оно стало индетификатором
				}
				else {
					if (DigitWord == true) {
						for (int j = FirstLetter; j < i; ++j) {
							str[j] = ' '; // проставляем пробелы, т.е. убираем слова, состоящие только из цифр
						}
					}
				}
				FirstLetter = -1;
			}
		}

	}
	cout << str;



	return 0;
}
