#include "RoomBase.h"

RoomBase::RoomBase(DefiniteRand &glb_rand) : rand_generator(glb_rand) {

}

std::vector<RoomBase *> RoomBase::NextRoom() {
    return higher_rooms;
}

RoomBase *RoomBase::Room(int index) {
    if (static_cast<size_t>(index) >= 0 &&
        static_cast<size_t>(index) < higher_rooms.size()) {
        return higher_rooms[index];
    }
    return nullptr;
}

std::vector<CharacterBase *> RoomBase::Players() {
    return players;
}

CharacterBase *RoomBase::Player(int index) {
    if (static_cast<size_t>(index) >= 0 &&
        static_cast<size_t>(index) < players.size()) {
        return players[index];
    }
    return nullptr;
}

std::vector<CharacterBase *> RoomBase::Monsters() {
    return monsters;
}

CharacterBase *RoomBase::Monster(int index) {
    if (static_cast<size_t>(index) >= 0 &&
        static_cast<size_t>(index) < monsters.size()) {
        return monsters[index];
    }
    return nullptr;
}

DefiniteRand &RoomBase::RandGenerator() {
    return rand_generator;
}