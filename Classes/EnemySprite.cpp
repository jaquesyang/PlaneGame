//
//  EnemySprite.cpp
//  planeGame
//
//  Created by Jaques Yang on 5/9/14.
//  Copyright 2014年 __MyCompanyName__. All rights reserved.
//


#include "EnemySprite.h"

EnemySprite::EnemySprite()
{
    
}

EnemySprite::~EnemySprite()
{
    
}

cocos2d::Scene* EnemySprite::createScene() {
    auto scene = Scene::create();
    auto layer = EnemySprite::create();
    scene->addChild(layer);
    
    return scene;
}

bool EnemySprite::init(){
    if (!Layer::init()) {
        return false;
    }
    

    initData();
    


    return true;
}

#pragma mark - initData
void EnemySprite::initData()
{
    Size winSize = Director::getInstance()->getVisibleSize();
    
    // add your codes here...
    
}