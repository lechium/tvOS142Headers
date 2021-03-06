/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:32 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIStatusBarVisualProvider_CarPlay.h>

@class NSDictionary;

@interface _UIStatusBarVisualProvider_CarPlayVertical : _UIStatusBarVisualProvider_CarPlay {

	NSDictionary* _orderedDisplayItemPlacements;

}

@property (nonatomic,retain) NSDictionary * orderedDisplayItemPlacements;              //@synthesize orderedDisplayItemPlacements=_orderedDisplayItemPlacements - In the implementation block
+(CGSize)intrinsicContentSizeForOrientation:(long long)arg1 ;
-(id)setupInContainerView:(id)arg1 ;
-(id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)arg1 ;
-(NSDictionary *)orderedDisplayItemPlacements;
-(void)setOrderedDisplayItemPlacements:(NSDictionary *)arg1 ;
@end

