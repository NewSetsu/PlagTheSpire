#pragma once
#include <vector>
#include "BasicInterface.h"
#include "CardBase.h"
#include "CardUser.h"
#include "utils/Any.h"

class CharacterBase : public SpireInterface {
protected:
    using charc_value = int;

    charc_value health_point;
    charc_value max_health_point;
    charc_value str_point;
    charc_value dex_point;
    charc_value def_point;

    CardUser *card_user;
    std::vector<CardBase *> hold_cards;
public:
    CharacterBase();
    virtual ~CharacterBase();

    charc_value& GetHealthPoint() {return health_point;}
    charc_value& GetMaxHealthPoint() {return max_health_point;}
    charc_value& GetStrPoint() {return str_point;}
    charc_value& GetDexPoint() {return dex_point;}
    charc_value& GetDefPoint() {return def_point;}

    CardUser* CardUsr() { return card_user; }
    std::vector<CardBase *>& HoldCards() { return hold_cards; }
public:
    // 基类卡片
    virtual rzm::Any TakeAttackCardBase(AttackCardBase *card) override;
    virtual rzm::Any TakeSkillCardBase(SkillCardBase *card) override;

    // 每个对象接收每张卡片的反应不同

    // 普通卡片 打击、防御
    virtual rzm::Any TakeCommonAttackCard(CommonAttackCard *card) override;
    virtual rzm::Any TakeCommonDefendCard(CommonDefendCard *card) override;
};

