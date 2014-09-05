//
//  PigSprite.cpp
//  planeGame
//
//  Created by Jaques Yang on 5/9/14.
//  Copyright 2014年 __MyCompanyName__. All rights reserved.
//


#include "PigSprite.h"

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

Sprite* getSprite(){
    return mSprite;
}

#pragma mark - initData
void PigSprite::initData()
{
    Size winSize = Director::getInstance()->getVisibleSize();
    
    // add your codes here...
    
}