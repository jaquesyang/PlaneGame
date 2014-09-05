//
//  EnemySprite.h
//  planeGame
//
//  Created by Jaques Yang on 5/9/14.
//  Copyright 2014年 __MyCompanyName__. All rights reserved.
//


#ifndef __planeGame__EnemySprite__
#define __planeGame__EnemySprite__

#include "cocos2d.h"

USING_NS_CC;

class EnemySprite: public cocos2d::Layer {
public:
    EnemySprite();
    ~EnemySprite();
    static cocos2d::Scene* createScene();
    virtual bool init();
    CREATE_FUNC(EnemySprite);

private:
    void initData();
    
};

#endif /* defined(__planeGame__EnemySprite__) */