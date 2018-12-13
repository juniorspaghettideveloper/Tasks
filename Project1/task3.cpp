#include <iostream>
#include <fstream> 
#include <string>
using namespace std;

int main()
{
	string word;
	ifstream file("C:\\input.txt");
	while (getline(file, word)) {
		cout << "key: ";
		int size = word.length();
		for (int i = 0; i < size; i++) {
			if (word[i] != ':') {
				cout << word[i];
				
			}
			else {
				size = i;
				cout << " value: ";
				int o = size+1;
				for (o; o < word.length(); o++) {
					cout << word[o];
				}
				cout << endl;
				
			}		
		}
	}
	file.close();
	system("pause");
	return 0;
}