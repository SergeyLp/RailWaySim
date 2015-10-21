#include "stdafx.h"
#include "global.h"
#include "GameTime.h"
namespace Railway
{

   std::string GameTime::toString(const int formatId) const {
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

   void GameTime::fromHour(const double h) {
      t = fromHourToMsec(h);
   }

   void GameTime::fromMsec(const uint ms) {
      t = ms;
   }

   int GameTime::fromHourToMsec(const double h) {
      return (int(h * 60 * 60 * 1000));
   }

}