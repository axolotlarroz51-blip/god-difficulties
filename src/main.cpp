#include <Geode/Geode.hpp>
#include <Geode/modify/LevelCell.hpp>
using namespace geode::prelude;

class $modify(GodCell, LevelCell) {
    void loadFromLevel(GJGameLevel* level) {
        LevelCell::loadFromLevel(level);
        if (!level) return;
        std::string name = level->m_levelName;
        std::transform(name.begin(), name.end(), name.begin(), ::toupper);
        if (name.find("[GOD]") == std::string::npos) return;
        if (auto spr = this->getChildByType<GJDifficultySprite>(0)) {
            spr->setTexture(CCTextureCache::sharedTextureCache()->addImage("god_difficulty.png"_spr, false));
        }
    }
};
