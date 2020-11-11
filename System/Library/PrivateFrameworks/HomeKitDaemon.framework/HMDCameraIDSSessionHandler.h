/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:11 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/IDSServiceDelegate.h>
#import <libobjc.A.dylib/HMDCameraRemoteStreamProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, HMDCameraStreamSessionID, IDSService, IDSSession, NSString;

@interface HMDCameraIDSSessionHandler : HMFObject <HMFLogging, IDSServiceDelegate, HMDCameraRemoteStreamProtocol> {

	NSObject*<OS_dispatch_queue> _workQueue;
	HMDCameraStreamSessionID* _sessionID;
	IDSService* _idsStreamService;
	IDSSession* _idsSession;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) HMDCameraStreamSessionID * sessionID;                //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,readonly) IDSService * idsStreamService;                       //@synthesize idsStreamService=_idsStreamService - In the implementation block
@property (nonatomic,retain) IDSSession * idsSession;                               //@synthesize idsSession=_idsSession - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(HMDCameraStreamSessionID *)sessionID;
-(id)logIdentifier;
-(void)startKeepAlive;
-(id)initWithSessionID:(id)arg1 workQueue:(id)arg2 ;
-(IDSSession *)idsSession;
-(void)setIdsSession:(IDSSession *)arg1 ;
-(IDSService *)idsStreamService;
@end
