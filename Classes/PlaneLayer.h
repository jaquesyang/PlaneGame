//
//  PlaneLayer.h
//  planeGame
//
//  Created by Jaques Yang on 5/9/14.
//  Copyright 2014年 __MyCompanyName__. All rights reserved.
//


#ifndef __planeGame__PlaneLayer__
#define __planeGame__PlaneLayer__

#include "cocos2d.h"

#include "PigSprite.h"

USING_NS_CC;

#define PLANE_TAG 1

class PlaneLayer: public cocos2d::Layer {
public:
    PlaneLayer();
    ~PlaneLayer();
    static cocos2d::Scene* createScene();
    virtual bool init();
    //CREATE_FUNC(PlaneLayer);

    static PlaneLayer* getInstance();
    
    bool onTouchBegan(Touch* touch, Event* pEvent);
    void onTouchMoved(Touch *touch, Event* pEvent);
    
    
private:
    void initData();
    
    PigSprite* mPig;
    //static PlaneLayer* sharedPlane;
    
};

#endif /* defined(__planeGame__PlaneLayer__) */