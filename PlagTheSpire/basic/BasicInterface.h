#pragma once
#include "utils/Any.h"

// 基类卡片
class AttackCardBase;
class SkillCardBase;

// 所有卡片类型
class CommonAttackCard;
class CommonDefendCard;

class SpireInterface {
public:
    SpireInterface() {};
    virtual ~SpireInterface() {};

    // 基类卡片
    virtual rzm::Any TakeAttackCardBase(AttackCardBase *card);
    virtual rzm::Any TakeSkillCardBase(SkillCardBase *card);

    // 每个对象接收每张卡片的反应不同

    // 普通卡片 打击、防御
    virtual rzm::Any TakeCommonAttackCard(CommonAttackCard *card);
    virtual rzm::Any TakeCommonDefendCard(CommonDefendCard *card);
};

