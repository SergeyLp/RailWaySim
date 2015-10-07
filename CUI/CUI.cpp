#include "stdafx.h"
#include"../Core/NodeList.h"
using namespace Railway;
using std::cout;
using std::string;

int main() {
	//NodeList nList;
	SetConsoleOutputCP(1251);

	Node n;
	n.assign("Санк Петербург");
	cout << n.toString();// .c_str();

	cout << "\n\t\t PRESS ENTER...\n>";
	getchar();

	return 0;
}

