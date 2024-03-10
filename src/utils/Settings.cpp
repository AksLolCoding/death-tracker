#include "Settings.hpp"

int64_t Settings::getPrecision() {
    return Mod::get()->getSettingValue<int64_t>("precision");
}

int64_t Settings::getMaxSessionLength() {
    return Mod::get()->getSettingValue<int64_t>("session-length");
}

bool Settings::isCompletedLevelTrackingDisabled() {
    return Mod::get()->getSettingValue<bool>("disable-tracking-completed-levels");
}

bool Settings::isPracticeZeroDeathsEnabled() {
    return Mod::get()->getSettingValue<bool>("practice-zero-deaths");
}