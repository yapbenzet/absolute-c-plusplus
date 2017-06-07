#ifndef DTIME_H
#define DTIME_H

#include <iostream>
using std::istream;
using std::ostream;

namespace DTimeSavitch {
  class DigitalTime {
  public:
    DigitalTime(int theHour, int theMinute);
    DigitalTime();

    int getHour() const;
    int getMinute() const;

    void advance(int minutesAdded);
    void advance(int hoursAdded, int minutesAdded);

    friend bool operator == (const DigitalTime& time1, const DigitalTime& time2);
    friend istream& operator >> (istream& ins, DigitalTime& theObject);
    friend ostream& operator << (ostream& outs, const DigitalTime& theObject);

  private:
    int hour;
    int minute;
  };
}

#endif
