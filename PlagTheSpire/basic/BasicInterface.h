#pragma once
#include "utils/Any.h"

// 所有卡片类型
class CommonAttackCard;
class CommonDefendCard;

#define TAKE_CARD_EFFECT(card_name) \
    virtual rzm::Any Take##card_name##(##card_name## *card)



class SpireInterface {
public:
    SpireInterface() {};
    virtual ~SpireInterface() {};

    // 每个对象接收每张卡片的反应不同
    TAKE_CARD_EFFECT(CommonAttackCard);
    TAKE_CARD_EFFECT(CommonDefendCard);
};

