/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:14 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/GameController.framework/GameController
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameController/_GCIPCRemoteConnection.h>
#import <libobjc.A.dylib/_GCIPCOutgoingConnection.h>

@interface _GCIPCRemoteOutgoingConnection : _GCIPCRemoteConnection <_GCIPCOutgoingConnection>

@property (getter=isInvalid,nonatomic,readonly) BOOL invalid; 
+(id)sharedConnectionWorkloop;
-(id)debugDescription;
-(id)description;
-(id)redactedDescription;
-(id)initWithConnection:(id)arg1 ;
-(id)remoteProxy;
-(id)remoteProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)synchronousRemoteProxyWithErrorHandler:(/*^block*/id)arg1 ;
@end
