#pragma once
#include "NodeList.h"
#include "RS_Part.h"

namespace Railway
{
   class Game {
      public:
         //Game();
         void sampleInit();
         std::vector<StopPoint> sp() const { return branches[0].stopPoints(); }
      private:
         std::vector<Branch> branches;
         std::vector<Train> trains;
   };

}