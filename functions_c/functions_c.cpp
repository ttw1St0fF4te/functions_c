#include <iostream>
#include <algorithm>
using namespace std;

string reverse(string word)
{
	string result = { };
	for (int i = word.length(); i >= 0; i--)
		result += word[i];
	return result;
}

string removeVowels(string word)
{
	string result = { };
	string vowels = "AaEeIiOoUuYy";
	for (int i = 0; i < vowels.length(); i++)
	{
		for (int k = 0; k < word.length(); k++)
		{
			if (word[k] == vowels[i])
				word[k] = ' ';
			continue;
		}
	}
	result = word;
	return result;
}

string removeConsonants(string word)
{
	string result = { };
	string consonants = "qQwWrRtTpPsSdDfFgGhHjJkKlLzZxXcCvVbBnNmM";
	for (int i = 0; i < consonants.length; i++)
	{
		for (int k = 0; k < word.length(); k++)
		{
			if (word[k] == consonants[i])
				word[k] = ' ';
			continue;
		}
	}
	result = word;
	return result;
}

string shuffle(string word)
{
	random_shuffle(word.begin(), word.end());
	string result = word;
	return result;
}

int main()
{
	setlocale(LC_ALL, "RUS");

	cout << "Введите действие:\n";
	cout << "1 - Перевернуть слово \n2 - Удаление гласных \n3 - Удаление согласных \n4 - Перемещение букв в слове\n";

	int answer;
	cin >> answer;

	cout << "Ввведите слово:\n";

	string word;
	cin >> word;

	switch (answer)
	{
	case 1:
		cout << reverse(word);
		break;
	case 2:
		cout << removeVowels(word);
		break;
	case 3:
		cout << removeConsonants(word);
		break;
	case 4:
		cout << shuffle(word);
		break;
	default:
		break;
	}
}
