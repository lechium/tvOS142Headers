/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:22 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/FBSDisplayObserving.h>

@class NSMutableDictionary, FBSDisplayMonitor, NSString;

@interface _UISystemGestureManager : NSObject <UIGestureRecognizerDelegate, FBSDisplayObserving> {

	NSMutableDictionary* _displayIdentityToManagerMap;
	FBSDisplayMonitor* _displayMonitor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)_sharedInstanceIfExists;
+(void)_cancelTouchesWithIdentifiers:(id)arg1 forDisplayWithIdentity:(id)arg2 ;
-(NSString *)description;
-(id)init;
-(void)dealloc;
-(void)displayMonitor:(id)arg1 willDisconnectIdentity:(id)arg2 ;
-(id)_systemGestureManagerForDisplayWithIdentityCreatingIfNeeded:(id)arg1 ;
-(id)windowForSystemGesturesForDisplayWithIdentity:(id)arg1 ;
-(void)addGestureRecognizer:(id)arg1 toDisplayWithIdentity:(id)arg2 ;
-(void)addGestureRecognizer:(id)arg1 recognitionEvent:(long long)arg2 toDisplayWithIdentity:(id)arg3 ;
-(void)removeGestureRecognizer:(id)arg1 fromDisplayWithIdentity:(id)arg2 ;
-(void)setTransform:(CGAffineTransform)arg1 onDisplayWithIdentity:(id)arg2 ;
-(void)clearTransformFromDisplayWithIdentity:(id)arg1 ;
@end
