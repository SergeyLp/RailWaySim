#include "stdafx.h"
#include "CppUnitTest.h"

#include"../Core/global.h"
#include"../Core/NodeList.h"
#include"../Core/GameTime.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using std::string;


namespace Railway{

   TEST_CLASS(TestGameTime) {
   public:
   TEST_METHOD(Constructor) {
      GameTime t;
      Assert::IsNotNull(&t);
   }
   TEST_METHOD(AssignHours25) {
      GameTime t;
      t.fromHour(25.0);
      Assert::IsTrue(t.toString() == "25:00");
   }
   TEST_METHOD(AssignHours025) {
      GameTime t;
      t.fromHour(0.25);
      Assert::IsTrue(t.toString() == "00:15");
   }
   TEST_METHOD(AssignHors0) {
      GameTime t;
      t.fromHour(0.0);
      Assert::IsTrue(t.toString() == "00:00");
   }
   TEST_METHOD(AssignHours1) {
      GameTime t;
      t.fromHour(1.0);
      Assert::IsTrue(t.toString() == "01:00");
   }
   TEST_METHOD(AssignMs1000) {
      GameTime t;
      t.fromMsec(1000);
      Assert::IsTrue(t.toString() == "00:00");
   }
   TEST_METHOD(AssignMs29999) {
      GameTime t;
      t.fromMsec(29999);
      Assert::IsTrue(t.toString() == "00:00");
   }
   TEST_METHOD(AssignMs30000) {
      GameTime t;
      t.fromMsec(30000);
      Assert::IsTrue(t.toString() == "00:01");
   }
   TEST_METHOD(AssignMs499) {
      GameTime t;
      t.fromMsec(499);
      Assert::IsTrue(t.toString() == "00:00");
   }
   TEST_METHOD(AssignMs0) {
      GameTime t;
      t.fromMsec(0);
      Assert::IsTrue(t.toString() == "00:00");
   }
   TEST_METHOD(AssignMs60k) {
      GameTime t;
      t.fromMsec(60000);
      Assert::IsTrue(t.toString() == "00:01");
   }
   };

   TEST_CLASS(TestGameTimeFormat1) {
public:
   TEST_METHOD(AssignHours25) {
      GameTime t;
      t.fromHour(25.0);
      Assert::IsTrue(t.toString(1) == "25:00:00");
   }
   TEST_METHOD(AssignHours025) {
      GameTime t;
      t.fromHour(0.25);
      Assert::IsTrue(t.toString(1) == "00:15:00");
   }
   TEST_METHOD(AssignHors0) {
      GameTime t;
      t.fromHour(0.0);
      Assert::IsTrue(t.toString(1) == "00:00:00");
   }
   TEST_METHOD(AssignHours1) {
      GameTime t;
      t.fromHour(1.0);
      Assert::IsTrue(t.toString(1) == "01:00:00");
   }
   TEST_METHOD(AssignMs1) {
      GameTime t;
      t.fromMsec(1000);
      Assert::IsTrue(t.toString(1) == "00:00:01");
   }
   TEST_METHOD(AssignMs900) {
      GameTime t;
      t.fromMsec(900);
      Assert::IsTrue(t.toString(1) == "00:00:01");
   }
   TEST_METHOD(AssignMs500) {
      GameTime t;
      t.fromMsec(500);
      Assert::IsTrue(t.toString(1) == "00:00:01");
   }
   TEST_METHOD(AssignMs499) {
      GameTime t;
      t.fromMsec(499);
      Assert::IsTrue(t.toString(1) == "00:00:00");
   }
   TEST_METHOD(AssignMs0) {
      GameTime t;
      t.fromMsec(0);
      Assert::IsTrue(t.toString(1) == "00:00:00");
   }
   TEST_METHOD(AssignMs60k) {
      GameTime t;
      t.fromMsec(60000);
      Assert::IsTrue(t.toString(1) == "00:01:00");
   }
   };
   #if 0
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
            const string name = "test " + std::to_string(i);
            n[i].assign(name, 0.0);
         }

         for (int i = 0; i < Node::MAX_ATTACHED_POINTS; ++i) {
            n[0].attach(&(n[i+1]), i);
         }

      }
	};
   #endif
}

