#include<iostream>
#include <string>
using namespace std;

int main() {
	string song("Falling in love with you");
	string elvis("Elvis Presley");
	string singer;

	cout << "Who sang a song" + song + "?";
	cout << "(Hint: The first letter starts with " << elvis[0] << ") ";

	getline(cin, singer);
	if (singer == elvis)
		cout << "Correct!";
	else
		cout << "Nooo.. It's " + elvis + "!" << endl;

}
