#include<iostream>
using namespace std;

void Kitty() {
	cout << "Kitty on your lap\n";
}

void Kitty(char *str) {
	cout << str << '\n';
}

int main() {
  // カッコがないとvoid型のポインタと判断されるため、カッコ
	void (*po1)() , (*po2)(char *);
	po1 = Kitty;
	po2 = Kitty;

	(*po1)();
	(*po2)("Di Gi Gharat");
	return 0;
}

