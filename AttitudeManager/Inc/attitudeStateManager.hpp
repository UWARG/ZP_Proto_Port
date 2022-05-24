/*
 * attitudeStateManager.hpp
 *
 * Attitude State-Machine Header
 *
 *  Created on: May 24, 2022
 *      Author: Anthony (Anni) Luo
 */

#ifndef ATTITUDE_STATE_MANAGER_HPP
#define ATTITUDE_STATE_MANAGER_HPP

#include "attitudeManager.hpp"

class attitudeManager;

class attitudeState
{
public:
    virtual void enter(attitudeManager* attitudeMgr) = 0;
    virtual void execute(attitudeManager* attitudeMgr) = 0;
    virtual void exit(attitudeManager* attitudeMgr) = 0;

    bool operator==(const attitudeState& rhs) const {return (this == &rhs);}

    virtual ~attitudeState() {}

};

#endif //ATTITUDE_STATE_MANAGER_HPP