#pragma once
#include <vector>

#include "DefineTheSpire.h"
#include "utils/Any.h"
#include "utils/DefiniteRand.h"

class CharacterBase;

class RoomBase {
public:
    RoomBase(DefiniteRand &glb_rand);

    std::vector<RoomBase *> NextRoom();
    RoomBase *Room(int index);

    std::vector<CharacterBase *> Players();
    CharacterBase *Player(int index);

    std::vector<CharacterBase *> Monsters();
    CharacterBase *Monster(int index);

    DefiniteRand &RandGenerator();
protected:
    std::vector<RoomBase *>         higher_rooms;
    std::vector<CharacterBase *>    players;
    std::vector<CharacterBase *>    monsters;
    DefiniteRand&                   rand_generator;
};