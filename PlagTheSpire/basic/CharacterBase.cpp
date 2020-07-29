#include "CharacterBase.h"
#include "cards/CommonCards.h"

CharacterBase::CharacterBase() {

}

CharacterBase::~CharacterBase() {

}


rzm::Any CharacterBase::TakeAttackCardBase(AttackCardBase *card) {
    auto tmp_dmg = card->CardDmg() * card->CardHit();
    auto res_def = def_point - tmp_dmg;
    if (res_def >= 0) {
        def_point = res_def;
    } else {
        def_point = 0;
        health_point += res_def;
    }


}

rzm::Any CharacterBase::TakeSkillCardBase(SkillCardBase *card) {
    // 获得防御
    this->def_point += (dex_point + card->def_num);
}

rzm::Any CharacterBase::TakeCommonAttackCard(CommonAttackCard *card) {
    return TakeAttackCardBase(card);
}

rzm::Any CharacterBase::TakeCommonDefendCard(CommonDefendCard *card) {
    return TakeSkillCardBase(card);
}