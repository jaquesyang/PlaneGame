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


bool EnemySprite::init(){
    if (!Node::init()) {
        return false;
    }
    

    initData();
    


    return true;
}

void EnemySprite::setEnemyType(EnemyType enemyType){
    switch (enemyType) {
        case Enemy1:
            mSprite = Sprite::createWithSpriteFrame(SpriteFrameCache::getInstance()->getSpriteFrameByName("n1.png"));
            mLife = ENEMY1_MAXLIFE;
            break;
        case Enemy2:
            mSprite = Sprite::createWithSpriteFrame(SpriteFrameCache::getInstance()->getSpriteFrameByName("n2.png"));
            mLife = ENEMY2_MAXLIFE;
            break;
        case Enemy3:
            mSprite = Sprite::createWithSpriteFrame(SpriteFrameCache::getInstance()->getSpriteFrameByName("n3.png"));
            mLife = ENEMY2_MAXLIFE;
            break;
        case Enemy4:
            mSprite = Sprite::createWithSpriteFrame(SpriteFrameCache::getInstance()->getSpriteFrameByName("boss.png"));
            mLife = ENEMY3_MAXLIFE;
            break;
            
        default:
            return;
    }
    
    this->addChild(mSprite,1);
    mSprite->setScale(0.6f);
    Size winSize = Director::getInstance()->getWinSize();
    Size enemySize = mSprite->getContentSize();
    
    int minX = enemySize.width /2;
    int maxX = winSize.width - enemySize.width/2;
    
    int rangeX = maxX - minX;
    
    int actualX = (rand() * rangeX) + minX;
    
    this->setPosition(Point(actualX, winSize.height + enemySize.height));
}

Sprite* EnemySprite::getSprite(){
    return mSprite;
}

int EnemySprite::getLife(){
    return mLife;
}

void EnemySprite::loseLife(){
    mLife -= 0.5f;
}

Point EnemySprite::getCurPoint(){
    return this->getPosition();
}

Rect EnemySprite::getBoundingBox(){
    Rect rect = mSprite->getBoundingBox();
    Point pos = this->convertToWorldSpace(rect.origin);
    Rect enemyRect(pos.x,pos.y, rect.size.width,rect.size.height);
   
    
    return enemyRect;
}

#pragma mark - initData
void EnemySprite::initData()
{
    Size winSize = Director::getInstance()->getVisibleSize();
    
    // add your codes here...
    
}


