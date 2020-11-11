/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:17 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDCameraSnapshotIDSStream.h>
#import <libobjc.A.dylib/IDSServiceDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue, HMDCameraSnapshotIDSStreamInitiatorDelegate;
@class HMDSnapshotFile, NSString, NSObject;

@interface HMDCameraSnapshotIDSStreamInitiator : HMDCameraSnapshotIDSStream <IDSServiceDelegate, HMFLogging> {

	HMDSnapshotFile* _snapshotFile;
	NSString* _destinationID;
	NSString* _sendFileIdentifier;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	id<HMDCameraSnapshotIDSStreamInitiatorDelegate> _delegate;

}

@property (nonatomic,retain) NSString * destinationID;                                                       //@synthesize destinationID=_destinationID - In the implementation block
@property (nonatomic,retain) NSString * sendFileIdentifier;                                                  //@synthesize sendFileIdentifier=_sendFileIdentifier - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue;                                   //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,__weak,readonly) id<HMDCameraSnapshotIDSStreamInitiatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) HMDSnapshotFile * snapshotFile;                                                 //@synthesize snapshotFile=_snapshotFile - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)dealloc;
-(id<HMDCameraSnapshotIDSStreamInitiatorDelegate>)delegate;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 ;
-(NSString *)destinationID;
-(void)setDestinationID:(NSString *)arg1 ;
-(id)logIdentifier;
-(id)initWithSessionID:(id)arg1 workQueue:(id)arg2 destinationID:(id)arg3 delegate:(id)arg4 delegateQueue:(id)arg5 ;
-(void)sendFile:(id)arg1 ;
-(void)setSnapshotFile:(HMDSnapshotFile *)arg1 ;
-(HMDSnapshotFile *)snapshotFile;
-(void)_callFileTransferFailed:(id)arg1 ;
-(void)_sendFile:(id)arg1 ;
-(void)setSendFileIdentifier:(NSString *)arg1 ;
-(NSString *)sendFileIdentifier;
@end

