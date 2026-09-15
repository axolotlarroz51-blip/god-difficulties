#include <Geode/Geode.hpp>
using namespace geode::prelude;
#include <Geode/modify/GJDifficultySprite.hpp>

class $modify(GODDiff, GJDifficultySprite) {
    bool init(int diff, GJDifficultyName name, bool feature) {
        if (!GJDifficultySprite::init(diff, name, feature)) return false;

        std::string file = "";
        // Tus 4 caras GOD
        if (diff == 1) file = "1789487493184.png"_spr; // Peaceful rosita
        if (diff == 2) file = "1789487508957.png"_spr; // GOD
        if (diff == 3) file = "1789487486240.png"_spr; // Impossible
        if (diff == 4) file = "1789487503657.png"_spr; // Ultra / negra
        if (diff == 5) file = "1789487508957.png"_spr;

        if (!file.empty()) {
            if (auto spr = this->getChildByType<CCSprite>(0)) {
                auto tex = CCTextureCache::sharedTextureCache()->addImage(file.c_str(), false);
                if (tex) spr->setTexture(tex);
            }
        }
        return true;
    }
};
