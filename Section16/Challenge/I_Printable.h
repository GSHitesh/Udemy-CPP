#ifndef _I_Printable_
#define _I_Printable_
#include<iostream>

class I_Printable{
        
    friend std::ostream &operator<<(std::ostream &os, const I_Printable &obj);
public:
    virtual void print(std::ostream &os) const = 0;
    virtual ~I_Printable() = default;
    

        };

#endif // _I_Printable_
