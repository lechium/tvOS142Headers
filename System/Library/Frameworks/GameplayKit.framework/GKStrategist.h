/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:55 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol GKStrategist <NSObject>
@property (nonatomic,retain) id<GKGameModel> gameModel; 
@property (nonatomic,retain) id<GKRandom> randomSource; 
@required
-(id<GKGameModel>)gameModel;
-(id)bestMoveForActivePlayer;
-(void)setGameModel:(id)arg1;
-(id<GKRandom>)randomSource;
-(void)setRandomSource:(id)arg1;

@end
