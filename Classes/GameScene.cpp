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

void GameScene::onEnterTransitionDidFinish(){
    log("onEnterTransacitonDidFinish");
    mPlane = PlaneLayer::getInstance();
    this->addChild(mPlane, 2);
    
    this->schedule(schedule_selector(GameScene::gameUpdate));
}

bool GameScene::init(){
    log("GameScene::init");
    if (!Layer::init()) {
        return false;
    }
    

    initData();
    


    return true;
}

void GameScene::gameUpdate(float dt){
    //log("GameScene::gameUpdate");
    
}

#pragma mark - initData
void GameScene::initData()
{
    Size winSize = Director::getInstance()->getVisibleSize();
    
    // add your codes here...
    
    char buff[15];
    int id = (CCRANDOM_0_1() *5)+1;
    sprintf(buff, "img_bg_%d.jpg",id);
    
    auto over = Sprite::create(buff);
    over->setPosition(Point(winSize.width/2, winSize.height/2));
    this->addChild(over, 1);
}