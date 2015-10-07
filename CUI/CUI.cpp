#include "stdafx.h"
#include"../Core/NodeList.h"
using namespace Railway;
using std::cout;
using std::string;

int main() {
	//NodeList nList;
	SetConsoleOutputCP(1251);

	Node n1;
	n1.assign("Санк Петербург");
	cout << n1.toString() << "\n";

   Node n[Node::MAX_ATTACHED_POINTS];

   const string s = "test";
   for (int i = 0; i < Node::MAX_ATTACHED_POINTS; ++i) {
      string name = "test " + std::to_string(i);
      n[i].assign(name);
   }

   for (int i = 0; i < Node::MAX_ATTACHED_POINTS; ++i) {
      cout << n[i].toString() << "\n";
   }



	cout << "\n\t\t PRESS ENTER...\n>"; getchar();
	return 0;
}

