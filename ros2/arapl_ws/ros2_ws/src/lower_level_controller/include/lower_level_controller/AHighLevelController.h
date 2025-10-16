#ifndef A_HIGH_LEVEL_CONTROLLER_H
#define A_HIGH_LEVEL_CONTROLLER_H

#include "Utilities.h"

#define READREGISTERNUMBER 100
#define WRITEREGISTERNUMBER 100
#define STARTINGINDEX 100

/**
 * @class AHighLevelController
 * @brief Abstract base class for high level controllers
 */
class AHighLevelController {
public:
    virtual ~AHighLevelController() = default;
    
    virtual void writeCommands(writeParameters &writeParams) = 0;
    virtual void readCommands(readParameters &readParam) = 0;
};

#endif  // A_HIGH_LEVEL_CONTROLLER_H
