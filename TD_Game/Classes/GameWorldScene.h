//
//  GameWorldScene.h
//  TD_Game
//
//  Created by cesc on 13-11-12.
//
//

#ifndef __TD_Game__GameWorldScene__
#define __TD_Game__GameWorldScene__

#include "cocos2d.h"
#include "Waypoint.h"

using namespace cocos2d;


class GameWorldScene: public CCLayer {
    
    
public:
   
    GameWorldScene();
    ~GameWorldScene();
    
    virtual bool init();
    
    void loadGameWorld();
    
    void loadTowerPosition();
    
    void loadWayPoinst();
    
    bool loadWave();
    
    CREATE_FUNC(GameWorldScene);
    
    void enmeyKilled();
    
    static CCScene* scene();
    
    virtual bool ccTouchBegan(CCTouch *pTouch, CCEvent *pEvent);
    
    virtual void registerWithTouchDispatcher(void);
    
    bool collisionWithCircle( CCPoint ciclePoint1, float radius1 , CCPoint ciclePoint2, float radius2 );
    
    CC_SYNTHESIZE_RETAIN(CCArray*, waypointsArray, WaypointArray );
    
    CCArray* _enemies;
    
private:
    
    int wave;
    CCArray* towerBases;
    CCArray* towers;
};

#endif /* defined(__TD_Game__GameWorldScene__) */
