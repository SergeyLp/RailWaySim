#pragma once

namespace Railway
{
   class Engineer {};
   class Motor{};

   class Rs {};
   class Train{
   public:
      enum TrainType {
         hi_speed = 0,
         velocity = 1,
         pass = 2,
         emu = 3,
         frenght = 4,
         slow = 5,
         danger = 6
      };
      Train(const std::string name,  ffloat maxSpeed_) : name_(name), maxSpeed_(maxSpeed_)  {};
      ffloat speed()const { return maxSpeed_; }
   private:
      std::string name_;


      std::vector<Rs> rs_;
      const ffloat maxSpeed_;
      ffloat speed_;
      ffloat pos_; // It will coord
   };

   class Loco : public Rs {
   private:
      Engineer engineer_;
      Motor motor_;
   };

   class Wagon : public Rs {};

}
