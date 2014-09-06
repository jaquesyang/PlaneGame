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
#include "PlaneLayer.h"

USING_NS_CC;

class GameScene: public cocos2d::Layer {
public:
    GameScene();
    ~GameScene();
    static cocos2d::Scene* createScene();
    virtual bool init();
    virtual void onEnterTransitionDidFinish();
    CREATE_FUNC(GameScene);
    
    
    void gameUpdate(float dt);

private:
    void initData();
    
    PlaneLayer* mPlane;

    
};

#endif /* defined(__planeGame__GameScene__) */