/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:26 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUICore.framework/GameCenterUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterUICore/GameCenterUICore-Structs.h>
#import <GameCenterUICore/GKBrush.h>

@class GKUITheme;

@interface GKThemeBrush : GKBrush {

	GKUITheme* _theme;

}

@property (nonatomic,retain) GKUITheme * theme;              //@synthesize theme=_theme - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTheme:(GKUITheme *)arg1 ;
-(GKUITheme *)theme;
-(id)initWithTheme:(id)arg1 ;
@end
