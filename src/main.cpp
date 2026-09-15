#include <Geode/Geode.hpp>
#include <Geode/modify/LevelCell.hpp>
using namespace geode::prelude;

class $modify(GodCell, LevelCell) {
    void loadFromLevel(GJGameLevel* level) {
        LevelCell::loadFromLevel(level);
        log::info("GOD mod cargado para nivel: {}", level->m_levelName);
    }
};
