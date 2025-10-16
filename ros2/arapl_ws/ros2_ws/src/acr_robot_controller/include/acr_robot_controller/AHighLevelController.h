#ifndef AHIGHLEVELCONTROLLER_H
#define AHIGHLEVELCONTROLLER_H

#include <string>
#include <iostream>
#include "Utilities.h"

class AHighLevelController
{
public:
    virtual ~AHighLevelController() {}
    virtual void writeCommands(writeParameters &writeParams) = 0;
    virtual void readCommands(readParameters &readParam) = 0;
};

#endif
