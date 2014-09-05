//
//  PigSprite.h
//  planeGame
//
//  Created by Jaques Yang on 5/9/14.
//  Copyright 2014年 __MyCompanyName__. All rights reserved.
//


#ifndef __planeGame__PigSprite__
#define __planeGame__PigSprite__

#include "cocos2d.h"

USING_NS_CC;

class PigSprite: public cocos2d::Node {
public:
    PigSprite();
    ~PigSprite();
    virtual bool init();
    CREATE_FUNC(PigSprite);
    Sprite* getSprite();
private:
    void initData();
    Sprite* mSprite;
    
};

#endif /* defined(__planeGame__PigSprite__) */