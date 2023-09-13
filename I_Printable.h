#ifndef POLYMORPHISM_EXERCISE_I_PRINTABLE_H
#define POLYMORPHISM_EXERCISE_I_PRINTABLE_H
#include <iostream>

class I_Printable
{
    friend std::ostream &operator<<(std::ostream &os, const I_Printable &obj);
public:
    virtual void print(std::ostream &os) const = 0;
    virtual ~I_Printable() = default;
};


#endif //POLYMORPHISM_EXERCISE_I_PRINTABLE_H
