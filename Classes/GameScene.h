//
//  GameScene.h
//  planeGame
//
//  Created by Jaques Yang on 5/9/14.
//  Copyright 2014年 __MyCompanyName__. All rights reserved.
//


#ifndef __planeGame__GameScene__
#define __planeGame__GameScene__

#include "cocos2d.h"

USING_NS_CC;

class GameScene: public cocos2d::Layer {
public:
    GameScene();
    ~GameScene();
    static cocos2d::Scene* createScene();
    virtual bool init();
    CREATE_FUNC(GameScene);

private:
    void initData();
    
};

#endif /* defined(__planeGame__GameScene__) */