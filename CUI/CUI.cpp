/*
* This is an independent project of an individual developer. Dear PVS-Studio, please check it.
* PVS-Studio Static Code Analyzer for C, C++ and C#: http://www.viva64.com
*/
#include "stdafx.h"
#include "../../../lib/!lip_def.h"
using namespace lip;
#include"../Core/NodeList.h"
#include"../Core/GameTime.h"
#include"../Core/Game.h"
//#include"../Core/RS_Part.h"
//-#include <string_view>

using namespace Railway;
using std::cout;
using std::string;


int main() {
   setlocale(LC_ALL, "");

   #if 0
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
      cout << "\n" << ni.toString() << "\n";
   }

   NodeList l;
   l.load();
   cout << l.toString(true);

   Way way1;

   Layout layout;
   layout.ways.push_back(way1);
   #endif

   Game game;
   game.sampleInit();

   #if 1
   //Physics phi;


   GameTime t, tEH, tAllegro, tE, tFr;
   GameTime train_shedule_list[5];


   #if 0
   Train fr(52);
   Train emu(50.5);
   Train emuFast(75.1);
   Train passenger(77);
   Train hiSpeed(140.6);
   #endif
   double module_proxy();

   for (const auto& sp : game.stop_points()) {
      tFr.fromHour(sp.distance / 52 + 2 + 43 / 60.0);
      t.fromHour(sp.distance / 77 + 7+17/60.0);
      tEH.fromHour(sp.distance / 75.1 + 20 + 50 / 60.0);
      tAllegro.fromHour(sp.distance / 140.6 + 6 + 40 / 60.0);
      tE.fromHour(sp.distance / 50.5 + 8 + 8 / 60.0);

      cout.width(15);
      cout.setf(std::ios::left);
      cout << std::left <<  sp.name << "\t" << std::internal << std::setw(6) << sp.distance
         //-<< std::setw(6) << "  " << sp.distance / 90 * 60
         << " \t" << tFr.toString()
         << " \t" << tE.toString()
         << " \t" << tEH.toString()
         << " \t" << t.toString()
         << " \t" << tAllegro.toString()
         //-<< std::setw(6) << "  " << sp.distance / 120 * 60
         << "\n";
   }
   #endif
   //cout << "\n" << l1.toString();
   
   cout << module_proxy() << " **** \n";
   //assert(true, "Bad");



   std::string programName;

   // ...

   if (!programName.empty()) {
       //char emptyString[] = { '\0' };
       cout << programName.data();
   }

    cout << "\n\t\t PRESS ENTER...\n>"; getchar();
    return 0;
}

