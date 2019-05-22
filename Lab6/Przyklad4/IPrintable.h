#ifndef IPRINTABLE_H
#define IPRINTABLE_H
#include <string>
using namespace std;
class IPrintable {
    public:
    virtual string getForPrint()=0;
};
#endif