#pragma once
#include "BasicInterface.h"
#include "CardBase.h"
#include "CardUser.h"
#include "utils/Any.h"

#define CHARACTER_TAKE_CARD_EFFECT(card_name)\
    rzm::Any CharacterBase::Take##card_name##(##card_name## *card)

class CharacterBase : public SpireInterface {
protected:
    using charc_value = int;
    CardUser *card_user;

    charc_value health_point;
    charc_value max_health_point;
    charc_value str_point;
    charc_value dex_point;
    charc_value def_point;
public:
    CharacterBase();
    virtual ~CharacterBase();

    charc_value& GetHealthPoint() {return health_point;}
    charc_value& GetMaxHealthPoint() {return max_health_point;}
    charc_value& GetStrPoint() {return str_point;}
    charc_value& GetDexPoint() {return dex_point;}
    charc_value& GetDefPoint() {return def_point;}

    TAKE_CARD_EFFECT(CommonAttackCard) override;
    TAKE_CARD_EFFECT(CommonDefendCard) override;
};

