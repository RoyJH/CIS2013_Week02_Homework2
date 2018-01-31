#include <iostream>
using namespace std;

int main () 
{
	int bottles = 99;
	
	
	while (bottles > 1) {
		cout << bottles << " bottles of beer on the wall, " << bottles << " bottles of beer.\n";
		cout <<"Take one down and pass it around, "; bottles-- ; cout << bottles << " bottles of beer on the wall.\n";
		cout << "\n";
		}

		if (bottles = 1) {
		cout << "1 bottle of beer on the wall, 1 bottle of beer.\n";
		cout << "Take one down and pass it around, no more bottles of beer on the wall.\n";
		cout << "\n";
		}

		if (bottles = 1) {
		cout << "No more bottles of beer on the wall, no more bottles of beer.\n";
		cout <<	"Go to the store and buy some more, 99 bottles of beer on the wall.\n";
		}
	return 0;
}