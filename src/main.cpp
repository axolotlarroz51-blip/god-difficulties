#include <Geode/Geode.hpp>
using namespace geode::prelude;
#include <Geode/modify/GJDifficultySprite.hpp>

class $modify(GJDifficultySprite) {
    void updateDifficulty(int diff) {
        GJDifficultySprite::updateDifficulty(diff);
        
        std::string file = "";
        // Mapeamos tus 4 GOD faces
        if (diff == 1) file = "1789487493184.png"_spr; // Peaceful rosita
        if (diff == 2) file = "1789487508957.png"_spr; // GOD blanco con halo
        if (diff == 3) file = "1789487486240.png"_spr; // IMPOSSIBLE rojo
        if (diff == 4) file = "1789487503657.png"_spr; // ULTRA (la negrita)
        if (diff == 5) file = "1789487508957.png"_spr; // Extra -> GOD

        if (!file.empty()) {
            if (auto spr = this->getChildByType<CCSprite>(0)) {
                auto tex = CCTextureCache::sharedTextureCache()->addImage(file.c_str(), false);
                if (tex) spr->setTexture(tex);
            }
        }
    }
};

$on_mod(Loaded) {
    log::info("GOD Difficulties by axolotl loaded!");
}
