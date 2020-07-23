#pragma once
#include "basic/CardBase.h"

// 通用卡池

// 打击
class CommonAttackCard : public AttackCardBase {
public:
    CommonAttackCard();
    virtual ~CommonAttackCard();
};


// 防御
class CommonDefendCard : public SkillCardBase {
public:
    CommonDefendCard();
    virtual ~CommonDefendCard();
};