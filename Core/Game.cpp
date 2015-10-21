#include "stdafx.h"
#include "global.h"

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