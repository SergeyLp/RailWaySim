#pragma once
namespace Railway
{

class GameTime {
public:
    GameTime() :t(0) {};
    GameTime(uint ms) { fromMsec(ms); };
    std::string toString(int formatId = 0)const;
    void fromHour(double h);
    void fromMsec(uint ms);

    static int fromHourToMsec(double h);

private:
    uint t;   //msec
};

}