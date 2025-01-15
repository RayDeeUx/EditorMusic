#pragma once
#include <Geode/Geode.hpp>
#include <Geode/modify/EditorPauseLayer.hpp>

class $modify(HookedEditorPauseLayer, EditorPauseLayer) {
    static void onModify(auto& self);
    
    bool init(LevelEditorLayer* editor);
    void onSaveAndExit(cocos2d::CCObject* sender);
    #ifndef GEODE_IS_MACOS
    void onExitEditor(cocos2d::CCObject* sender);
    #else
    void FLAlert_Clicked(FLAlertLayer* p0, bool btnTwo);
    #endif
    void onSaveAndPlay(cocos2d::CCObject* sender);
};