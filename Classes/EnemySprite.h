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
#include "EnemyInfo.h"

USING_NS_CC;

class EnemySprite: public cocos2d::Node {
public:
    EnemySprite();
    ~EnemySprite();
    virtual bool init();
    CREATE_FUNC(EnemySprite);

public:
    void setEnemyType(EnemyType enemyType);
    Sprite* getSprite();
    int getLife();
    void loseLife();
    Rect getBoundingBox();
    Point getCurPoint();
private:
    Sprite* mSprite;
    int mLife;
    
    void initData();
    
};

#endif /* defined(__planeGame__EnemySprite__) */