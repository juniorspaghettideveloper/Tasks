
#include "iostream"
#include "string"

using namespace std;

void split(string word, char a);

int main(int argc, char** argv) {
	cout << "Enter the word" << endl;
	string word;
	char a;
	getline(cin, word);
	cout << "Enter the symbol" << endl;
	cin.get(a);
	cout << "Result"<<endl;
	split(word, a);
	system("pause");
	return 0;
}

void split(string word, char a) {
	int l = word.length();
	for (int i = 0; i < l; ++i) {
		if (word[i] != a)
		{
			cout << word[i];
		}
		else {
			cout << endl;
		}
	}

}