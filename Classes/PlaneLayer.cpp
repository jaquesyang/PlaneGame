//
//  PlaneLayer.cpp
//  planeGame
//
//  Created by Jaques Yang on 5/9/14.
//  Copyright 2014年 __MyCompanyName__. All rights reserved.
//


#include "PlaneLayer.h"

static PlaneLayer* sharedPlane = NULL;

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
    log("PlaneLayer::init");
    if (!Layer::init()) {
        return false;
    }
    

    initData();
    


    return true;
}

PlaneLayer* PlaneLayer::getInstance(){
    if (sharedPlane==NULL) {
        log("PlaneLayer::getInstance");
        sharedPlane = new PlaneLayer();
        if (sharedPlane && sharedPlane->init()) {
            return sharedPlane;
        } else {
            CC_SAFE_DELETE(sharedPlane);
            
            return NULL;
        }
    }
    return sharedPlane;
}


bool PlaneLayer::onTouchBegan(Touch* touch, Event* pEvent){
    log("PlaneLayer::onTouchBegan");
    auto target = static_cast<Sprite *>(pEvent->getCurrentTarget());
    Point locationInNode = target -> convertToNodeSpace(touch->getLocation());
    target -> setPosition(touch->getLocation());
    
    return true;
}
void PlaneLayer::onTouchMoved(Touch *touch, Event* pEvent){
    
    auto target = static_cast<Sprite *>(pEvent->getCurrentTarget());
    target -> setPosition(touch->getLocation());
}


#pragma mark - initData
void PlaneLayer::initData()
{
    log("PlaneLayer::initData");
    Size winSize = Director::getInstance()->getVisibleSize();
    
    // add your codes here...
    
    SpriteFrameCache::getInstance()->addSpriteFramesWithFile("pig.plist");
    SpriteFrameCache::getInstance()->addSpriteFramesWithFile("bullet.plist");
    SpriteFrameCache::getInstance()->addSpriteFramesWithFile("wsparticle_p01.plist");
    SpriteFrameCache::getInstance()->addSpriteFramesWithFile("nplane.plist");
    
    
    auto plane = Sprite::create("mplane.png");
    plane->setTag(PLANE_TAG);
    plane->setScale(0.7f);
    plane->setPosition(Point(winSize.width/2 - plane->getContentSize().width /2, winSize.height/7));
    this->addChild(plane);
    
    mPig = PigSprite::create();
    this->addChild(mPig);
    
    auto touchListener = EventListenerTouchOneByOne::create();
    
    touchListener->setSwallowTouches(true);
    touchListener->onTouchBegan = CC_CALLBACK_2(PlaneLayer::onTouchBegan, this);
    touchListener->onTouchMoved = CC_CALLBACK_2(PlaneLayer::onTouchMoved, this);
    
    _eventDispatcher->addEventListenerWithSceneGraphPriority(touchListener, plane);
    
    
    
}