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

USING_NS_CC;

class PlaneLayer: public cocos2d::Layer {
public:
    PlaneLayer();
    ~PlaneLayer();
    static cocos2d::Scene* createScene();
    virtual bool init();
    CREATE_FUNC(PlaneLayer);

private:
    void initData();
    
};

#endif /* defined(__planeGame__PlaneLayer__) */