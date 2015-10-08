#include "stdafx.h"
#include "CppUnitTest.h"

#include"../Core/NodeList.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using std::string;


namespace Railway{
	TEST_CLASS(TestNodeList){
	public:
		TEST_METHOD(Constructor){
			const NodeList l;
			Assert::IsNotNull(&l);
		}
	};

	TEST_CLASS(TestNode) {
	public:
		TEST_METHOD(Constructor) {
			const Node n;
			Assert::IsNotNull(&n);
		}
		TEST_METHOD(EmptyBeforeCreate) {
			const Node n;
			Assert::IsTrue(n.toString().size() == 0);
		}
		TEST_METHOD(Assign) {
			Node n;
			const string s = "test";
			n.assign(s, 0.0);
			Assert::IsTrue(s == n.toString());
			//Assert::IsTrue(len == 0.0);
		}
      TEST_METHOD(Attach) {
         Node n[Node::MAX_ATTACHED_POINTS+1];
         
         for (int i = 0; i < Node::MAX_ATTACHED_POINTS+1; ++i) {
            string name = "test " + std::to_string(i);
            n[i].assign(name, 0.0);
         }

         for (int i = 0; i < Node::MAX_ATTACHED_POINTS; ++i) {
            n[0].attach(&(n[i+1]), i);
         }

      }

	};
}

