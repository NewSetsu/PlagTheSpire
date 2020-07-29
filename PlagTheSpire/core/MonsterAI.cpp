#include "MonsterAI.h"
#include "basic/CharacterBase.h"
#include "basic/RoomBase.h"

MonsterAI::MonsterAI(CharacterBase *owner) : m_owner(owner) {

}

MonsterAI::~MonsterAI() {

}

rzm::Any MonsterAI::NextRound(RoomBase *room) {
    auto tmp_target = room->RandGenerator().GenRandBetween(0, room->Players().size());
    auto card_index = room->RandGenerator().GenRandBetween(0, m_owner->HoldCards().size());
    m_owner->HoldCards()[card_index]->BeingUse(m_owner->CardUsr(), room->Player(tmp_target));

    return rzm::Any();
}