/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:26 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUICore.framework/GameCenterUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterUICore/GameCenterUICore-Structs.h>
#import <GameCenterUICore/GKBrush.h>

@class NSPredicate, GKBrush;

@interface GKConditionBrush : GKBrush {

	NSPredicate* _predicate;
	GKBrush* _yesBrush;
	GKBrush* _noBrush;

}

@property (nonatomic,retain) NSPredicate * predicate;              //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,retain) GKBrush * yesBrush;                   //@synthesize yesBrush=_yesBrush - In the implementation block
@property (nonatomic,retain) GKBrush * noBrush;                    //@synthesize noBrush=_noBrush - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSPredicate *)predicate;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(CGSize)sizeForInput:(id)arg1 ;
-(void)drawInRect:(CGRect)arg1 withContext:(CGContextRef)arg2 input:(id)arg3 ;
-(GKBrush *)yesBrush;
-(void)setYesBrush:(GKBrush *)arg1 ;
-(GKBrush *)noBrush;
-(void)setNoBrush:(GKBrush *)arg1 ;
@end

