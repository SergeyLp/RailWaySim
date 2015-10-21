#pragma once
namespace Railway
{

   class GameTime {
   public:
      GameTime() {};
      GameTime(const uint ms) { fromMsec(ms); };
      std::string toString(const int formatId = 0)const;
      void fromHour(const double h);
      void fromMsec(const uint ms);

      static int fromHourToMsec(const double h);

   private:
      uint t;   //msec
   };

}