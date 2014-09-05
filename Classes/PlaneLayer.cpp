//
//  PlaneLayer.cpp
//  planeGame
//
//  Created by Jaques Yang on 5/9/14.
//  Copyright 2014年 __MyCompanyName__. All rights reserved.
//


#include "PlaneLayer.h"

PlaneLayer::PlaneLayer()
{
    
}

PlaneLayer::~PlaneLayer()
{
    
}

cocos2d::Scene* PlaneLayer::createScene() {
    auto scene = Scene::create();
    auto layer = PlaneLayer::create();
    scene->addChild(layer);
    
    return scene;
}

bool PlaneLayer::init(){
    if (!Layer::init()) {
        return false;
    }
    

    initData();
    


    return true;
}

#pragma mark - initData
void PlaneLayer::initData()
{
    Size winSize = Director::getInstance()->getVisibleSize();
    
    // add your codes here...
    
}