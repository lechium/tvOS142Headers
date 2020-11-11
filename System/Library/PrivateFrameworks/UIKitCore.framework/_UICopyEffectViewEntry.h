/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:08 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIVisualEffectViewEntry.h>

@class _UIVisualEffectViewBackdropCaptureGroup;

@interface _UICopyEffectViewEntry : _UIVisualEffectViewEntry {

	_UIVisualEffectViewBackdropCaptureGroup* _captureGroup;

}

@property (nonatomic,retain) _UIVisualEffectViewBackdropCaptureGroup * captureGroup;              //@synthesize captureGroup=_captureGroup - In the implementation block
-(id)description;
-(void)removeEffectFromView:(id)arg1 ;
-(BOOL)canTransitionToEffect:(id)arg1 ;
-(void)addEffectToView:(id)arg1 ;
-(void)setCaptureGroup:(_UIVisualEffectViewBackdropCaptureGroup *)arg1 ;
-(_UIVisualEffectViewBackdropCaptureGroup *)captureGroup;
@end
