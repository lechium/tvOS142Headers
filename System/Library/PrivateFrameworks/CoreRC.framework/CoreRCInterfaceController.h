/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:19 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreRC/CoreRCInterfaceListenerDelegate.h>

@protocol CoreRCInterfaceControllerDelegate, OS_dispatch_queue;
@class NSMutableArray, NSObject, CECFakeInterfaceListener, NSArray, NSString;

@interface CoreRCInterfaceController : NSObject <CoreRCInterfaceListenerDelegate> {

	NSMutableArray* _interfaceListeners;
	id<CoreRCInterfaceControllerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) CECFakeInterfaceListener * fakeInterfaceListener; 
@property (assign,nonatomic) id<CoreRCInterfaceControllerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                            //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSArray * interfaceListeners;                                  //@synthesize interfaceListeners=_interfaceListeners - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id<CoreRCInterfaceControllerDelegate>)delegate;
-(void)setDelegate:(id<CoreRCInterfaceControllerDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)startOnQueue:(id)arg1 ;
-(NSArray *)interfaceListeners;
-(CECFakeInterfaceListener *)fakeInterfaceListener;
-(void)interfaceListener:(id)arg1 didAddInterface:(id)arg2 ;
-(void)interfaceListener:(id)arg1 didRemoveInterface:(id)arg2 ;
-(id)firstInterface;
-(BOOL)addInterfaceListenerClass:(Class)arg1 ;
-(BOOL)addBundlesFromPaths:(id)arg1 expectedClass:(Class)arg2 ;
@end
