#pragma once
#include "Controller.h"

class CharacterBase;

class MonsterAI : public ControllerBase {
public:
    MonsterAI(CharacterBase *owner);
    virtual ~MonsterAI();

    virtual rzm::Any NextRound(RoomBase *room) override;
protected:
    CharacterBase *m_owner;
};

