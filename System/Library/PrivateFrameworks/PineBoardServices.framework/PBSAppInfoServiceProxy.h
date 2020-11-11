/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:02 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PineBoardServices.framework/PineBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PBSAppInfoServiceInterface.h>

@protocol PBSAppInfoServiceInterface;
@class NSMapTable, NSString;

@interface PBSAppInfoServiceProxy : NSObject <PBSAppInfoServiceInterface> {

	/*^block*/id _interruptionHandler;
	id<PBSAppInfoServiceInterface> _remoteProxy;
	NSMapTable* _pendingReplies;

}

@property (nonatomic,readonly) id<PBSAppInfoServiceInterface> remoteProxy;              //@synthesize remoteProxy=_remoteProxy - In the implementation block
@property (nonatomic,readonly) NSMapTable * pendingReplies;                             //@synthesize pendingReplies=_pendingReplies - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                      //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setInterruptionHandler:(id)arg1 ;
-(id)interruptionHandler;
-(id<PBSAppInfoServiceInterface>)remoteProxy;
-(void)setServiceDelegate:(id)arg1 ;
-(id)initWithRemoteServiceProxy:(id)arg1 ;
-(void)handleConnectionInterruption:(id)arg1 ;
-(NSMapTable *)pendingReplies;
-(void)appInfoUpdatesWithReply:(/*^block*/id)arg1 ;
@end
