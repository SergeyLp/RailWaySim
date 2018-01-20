/*
* This is an independent project of an individual developer. Dear PVS-Studio, please check it.
* PVS-Studio Static Code Analyzer for C, C++ and C#: http://www.viva64.com
*/
#include "stdafx.h"
#include "../../../lib/!lip_def.h"
using namespace lip;

#include "GameTime.h"
namespace Railway
{

   std::string GameTime::toString(int formatId) const {
      int s;
      if (formatId == 1) {
         s = (t + 500) / 1000;  //round
      } else {
         s = (t + 30000) / 1000;  //round
      }
      int m = s / 60;
      s %= 60;
      const int h = m / 60;
      m %= 60;

      std::string str("");
      if (h < 10)
         str += "0";
      str += std::to_string(h) + ":";
      if (m < 10)
         str += "0";
      str += std::to_string(m);
      if (formatId == 1) {
         str += ":";
         if (s < 10)
            str += "0";
         str += std::to_string(s);
      }

      return str;
   }

   void GameTime::fromHour(double h) {
      t = fromHourToMsec(h);
   }

   void GameTime::fromMsec(uint ms) {
      t = ms;
   }

   int GameTime::fromHourToMsec(double h) {
      return (int(h * 60.0 * 60 * 1000));
   }

}