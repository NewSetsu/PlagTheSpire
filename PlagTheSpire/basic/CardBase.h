#pragma once

#include "BasicInterface.h"
#include "utils/Any.h"

// 前置声明
class CharacterBase;
class CardUser;

enum CardType : int {
    EMPTY_CARD = 0,     // 白卡
    ATTACK_CARD,        // 攻击卡
    SKILL_CARD,         // 技能卡
    BUFF_CARD,          // 能力卡
    CURSE_CARD,         // 诅咒卡
};

class CardBase : public SpireInterface {
protected:
    using card_value = int;
    card_value mana_cost{ 0 };   // 消耗费用
    CardType card_type{ CardType::EMPTY_CARD };
public:
    CardBase();
    virtual ~CardBase();
    virtual rzm::Any BeingUse(CardUser *user, SpireInterface *target) = 0;

    card_value& CardMana() { return mana_cost; }
};

//  攻击牌
class AttackCardBase : public CardBase {
protected:
    card_value base_dmg{0};
    card_value base_hit{0};

public:
    AttackCardBase();
    virtual ~AttackCardBase();

    virtual rzm::Any BeingUse(CardUser *user, SpireInterface *target);

    card_value& CardDmg() { return base_dmg; }
    card_value& CardHit() { return base_hit; }
};

// 技能牌
class SkillCardBase : public CardBase {
public:
    card_value def_num;
    card_value str_num;
public:
    SkillCardBase();
    virtual ~SkillCardBase();

    virtual rzm::Any BeingUse(CardUser *user, SpireInterface *target);
};

// 能力
// 诅咒