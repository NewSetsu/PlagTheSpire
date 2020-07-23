#pragma once
#include "CardBase.h"
class CardUser : public SpireInterface {
public:
    CardUser() {};
    virtual ~CardUser() {};

    virtual rzm::Any UseCard(CardBase *card, SpireInterface* target);
    virtual rzm::Any UseAttackCard(AttackCardBase *card, SpireInterface* target);
    virtual rzm::Any UseSkillCard(SkillCardBase *card, SpireInterface* target);
};