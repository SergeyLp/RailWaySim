#include "stdafx.h"
#include"../Core/NodeList.h"
using namespace Railway;
using std::cout;
using std::string;

int main() {
   setlocale(LC_ALL, "");

	Node n1;
	n1.assign("Санк Петербург", 0.0);
	cout << n1.toString() << "\n";

   Node n[Node::MAX_ATTACHED_POINTS];

   //const string s = "test";
   for (int i = 0; i < Node::MAX_ATTACHED_POINTS; ++i) {
      string name = "test " + std::to_string(i);
      n[i].assign(name, 0.0);
   }

   for (auto ni : n) {
      cout << ni.toString() << "\n";
   }

   NodeList l;
   l.load();
   cout << l.toString(true);


	cout << "\n\t\t PRESS ENTER...\n>"; getchar();//	return 0;
}

