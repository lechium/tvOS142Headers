/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:41 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSTimer;

@interface UIAccessibilityInformationLoader : NSObject {

	NSTimer* _coalesceTimer;

}
+(id)sharedInstance;
-(id)_init;
-(void)setNeedsLoadAccessibilityInformation;
-(void)_loadAccessibilityInformationOnMainThread:(BOOL)arg1 ;
-(void)_setNeedsLoadAccessibilityInformationOnMainThread;
-(void)_coalesceTimerFired:(id)arg1 ;
-(void)loadAccessibilityInformation;
@end

