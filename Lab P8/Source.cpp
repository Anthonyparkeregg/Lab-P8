#include<iostream>
#include <string>
using namespace std;

int countCharacter(string str);
int main(void) {
	string str = "string";
	cout << countCharacter(str);

}
int countCharacter(string str) {
	return str.length();
}
