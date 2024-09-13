#include "../hooks/DTColorSelectPopup.hpp"

void DTColorSelectPopup::setCallback(SEL_CallFunc _callback, CCObject* _target){
    m_fields->callback = _callback;
    m_fields->target = _target;
}

void DTColorSelectPopup::colorValueChanged(cocos2d::ccColor3B newColor){
    ColorSelectPopup::colorValueChanged(newColor);

    if (m_fields->target)
        this->runAction(CCCallFunc::create(m_fields->target, m_fields->callback));
}