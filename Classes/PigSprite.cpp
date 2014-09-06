//
//  PigSprite.cpp
//  planeGame
//
//  Created by Jaques Yang on 5/9/14.
//  Copyright 2014年 __MyCompanyName__. All rights reserved.
//


#include "PigSprite.h"
#include "PlaneLayer.h"

PigSprite::PigSprite()
{
    
}

PigSprite::~PigSprite()
{
    
}


bool PigSprite::init(){
    if (!Node::init()) {
        return false;
    }
    

    initData();
    


    return true;
}

Sprite* PigSprite::getSprite(){
    return mSprite;
}

void PigSprite::f_followPlane(float dt){
    
    Size winSize = Director::getInstance()->getVisibleSize();
    
    Point pos = PlaneLayer::getInstance()->getChildByTag(PLANE_TAG)->getPosition();
    
    if (pos.x + 60 + mSprite->getContentSize().width <= winSize.width) {
        this ->setPosition(Point(pos.x + 60 + mSprite->getContentSize().width/2, pos.y));
    } else {
        this -> setPosition(Point(pos.x - 60 -mSprite->getContentSize().width/2,pos.y));
    }
}

void PigSprite::f_createAnimate(int count, int fps){
    char buff[16];
    Animation * ani = Animation::create();
    ani->setDelayPerUnit(1.0/fps);
    for (int i=1; i< count; i++) {
        sprintf(buff, "hero_0%d.png",i);
        ani->addSpriteFrame(SpriteFrameCache::getInstance()->getSpriteFrameByName(buff));
    }
    mSprite->runAction(RepeatForever::create(Animate::create(ani)));
}

#pragma mark - initData
void PigSprite::initData()
{
    Size winSize = Director::getInstance()->getVisibleSize();
    
    // add your codes here...
    
    mSprite = Sprite::createWithSpriteFrame(SpriteFrameCache::getInstance()->getSpriteFrameByName("hero_01.png"));
    this->setPosition(Point(winSize.width/2, winSize.height/2));
    this->addChild(mSprite);
    this->setScale(0.6f);
    f_createAnimate(3, 8);
    this->schedule(schedule_selector(PigSprite::f_followPlane));
}

