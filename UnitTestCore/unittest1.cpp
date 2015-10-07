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
			n.assign(s);
			Assert::IsTrue(s == n.toString());
			//Assert::IsTrue(len == 0.0);
		}
	};
}

