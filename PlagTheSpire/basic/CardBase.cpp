#include "CardBase.h"
#include "CharacterBase.h"

CardBase::CardBase() {

}

CardBase::~CardBase() {

}

AttackCardBase::AttackCardBase() {
    card_type = CardType::ATTACK_CARD;
}

AttackCardBase::~AttackCardBase() {

}

rzm::Any AttackCardBase::BeingUse(CardUser *user, SpireInterface *target) {
    return user->UseAttackCard(this, target);
}

SkillCardBase::SkillCardBase() {
    card_type = CardType::SKILL_CARD;
}

SkillCardBase::~SkillCardBase() {

}

rzm::Any SkillCardBase::BeingUse(CardUser *user, SpireInterface *target) {
    return user->UseSkillCard(this, target);
}