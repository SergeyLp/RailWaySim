/*
* This is an independent project of an individual developer. Dear PVS-Studio, please check it.
* PVS-Studio Static Code Analyzer for C, C++ and C#: http://www.viva64.com
*/
#include "stdafx.h"
#include "../../../lib/!lip_def.h"
using namespace lip;

#include "Game.h"

namespace Railway
{
   void Game::sampleInit() {
      Branch branch("../Stations.txt");
      branches.push_back(branch);

      trains.push_back({ Train("6001", 50.5) });
      trains.push_back({ Train("7002", 52) });
      trains.push_back({ Train("6503", 75.1) });
      trains.push_back({ Train("34", 77) });
      trains.push_back({ Train("070",140) });

   }
}