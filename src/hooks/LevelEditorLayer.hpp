#ifndef GEODE_IS_MACOS
#include <Geode/modify/LevelEditorLayer.hpp>

class $modify(HookedLevelEditorLayer, LevelEditorLayer) {
    bool init(GJGameLevel* p0, bool p1);
};
#endif