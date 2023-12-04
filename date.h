#ifndef DATE_H
#define DATE_H

class Date {
public:
    int day;
    int month;
    int year;

    Date(int day = 0, int month = 0, int year = 0);
    bool isLeapYear() const;
};

#endif