#pragma once
#include "basic/DefineTheSpire.h"
#include "utils/Any.h"

class RoomBase;
class ControllerBase {
public:
    virtual rzm::Any NextRound(RoomBase *room) = 0;
};

