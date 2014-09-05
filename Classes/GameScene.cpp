//
//  GameScene.cpp
//  planeGame
//
//  Created by Jaques Yang on 5/9/14.
//  Copyright 2014年 __MyCompanyName__. All rights reserved.
//


#include "GameScene.h"

GameScene::GameScene()
{
    
}

GameScene::~GameScene()
{
    
}

cocos2d::Scene* GameScene::createScene() {
    auto scene = Scene::create();
    auto layer = GameScene::create();
    scene->addChild(layer);
    
    return scene;
}

bool GameScene::init(){
    if (!Layer::init()) {
        return false;
    }
    

    initData();
    


    return true;
}

#pragma mark - initData
void GameScene::initData()
{
    Size winSize = Director::getInstance()->getVisibleSize();
    
    // add your codes here...
    
}