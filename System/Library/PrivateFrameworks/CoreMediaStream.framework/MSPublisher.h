/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:16 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreMediaStream/MSCupidStateMachine.h>
#import <libobjc.A.dylib/MSPublisher.h>

@protocol MSPublisher <NSObject>
@property (assign,nonatomic) id<MSPublisherDelegate> delegate; 
@property (assign,nonatomic) int publishBatchSize; 
@required
-(id<MSPublisherDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)stop;
-(void)publish;
-(void)abort;
-(void)submitAssetCollectionsForPublication:(id)arg1 skipAssetCollections:(id)arg2;
-(void)reenqueueQuarantinedAssetCollections;
-(int)publishBatchSize;
-(void)setPublishBatchSize:(int)arg1;

@end

#import <libobjc.A.dylib/MSPublishStreamsProtocolDelegate.h>
#import <libobjc.A.dylib/MSPublishStorageProtocolDelegate.h>

@protocol MSPublisherDelegate, MSPublishStorageProtocol;
@class MSMediaStreamDaemon, MSObjectQueue, NSArray, NSMutableArray, NSMutableDictionary, MSPublishStreamsProtocol, NSURL, NSString;

@interface MSPublisher : MSCupidStateMachine <MSPublisher, MSPublishStreamsProtocolDelegate, MSPublishStorageProtocolDelegate> {

	id<MSPublisherDelegate> _delegate;
	MSMediaStreamDaemon* _daemon;
	int _state;
	MSObjectQueue* _uploadQueue;
	MSObjectQueue* _derivativesQueue;
	MSObjectQueue* _quarantinedQueue;
	NSArray* _pendingDerivativesQueue;
	NSMutableArray* _requestAuthQueue;
	unsigned long long _sendingQueueCount;
	NSMutableArray* _sendingQueue;
	NSMutableDictionary* _fileHashToAssetMap;
	MSPublishStreamsProtocol* _protocol;
	id<MSPublishStorageProtocol> _storageProtocol;
	NSURL* _storageProtocolURL;
	NSMutableArray* _tempFiles;
	NSMutableDictionary* _maxSizeByUTI;
	long long _publishTargetByteCount;
	int _publishBatchSize;
	int _maxErrorCount;

}

@property (assign,nonatomic) MSMediaStreamDaemon * daemon;                  //@synthesize daemon=_daemon - In the implementation block
@property (nonatomic,retain) NSURL * storageProtocolURL;                    //@synthesize storageProtocolURL=_storageProtocolURL - In the implementation block
@property (assign,nonatomic) long long publishTargetByteCount;              //@synthesize publishTargetByteCount=_publishTargetByteCount - In the implementation block
@property (assign,nonatomic) int publishBatchSize;                          //@synthesize publishBatchSize=_publishBatchSize - In the implementation block
@property (assign,nonatomic) id<MSPublisherDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)nextActivityDate;
+(BOOL)isInRetryState;
+(void)stopAllActivities;
+(void)forgetPersonID:(id)arg1 ;
+(id)nextActivityDateForPersonID:(id)arg1 ;
+(void)_setMasterNextActivityDate:(id)arg1 forPersonID:(id)arg2 ;
+(id)publisherForPersonID:(id)arg1 ;
+(id)existingPublisherForPersonID:(id)arg1 ;
+(id)_clearInstantiatedPublishersByPersonID;
+(id)personIDsWithOutstandingActivities;
-(void)dealloc;
-(id<MSPublisherDelegate>)delegate;
-(void)setDelegate:(id<MSPublisherDelegate>)arg1 ;
-(void)stop;
-(void)publish;
-(void)deactivate;
-(void)abort;
-(void)setDaemon:(MSMediaStreamDaemon *)arg1 ;
-(MSMediaStreamDaemon *)daemon;
-(int)_stop;
-(void)publishStorageProtocol:(id)arg1 didFinishUploadingAsset:(id)arg2 error:(id)arg3 ;
-(int)publishStorageProtocol:(id)arg1 didRequestFDForAsset:(id)arg2 ;
-(void)publishStorageProtocol:(id)arg1 didFinishUsingFD:(int)arg2 forAsset:(id)arg3 ;
-(void)publishStorageProtocolDidFinishPublishingAllAssets:(id)arg1 ;
-(void)publishStreamsProtocol:(id)arg1 didFinishUploadingMetadataResponse:(id)arg2 error:(id)arg3 ;
-(void)publishStreamsProtocol:(id)arg1 didReceiveAuthenticationError:(id)arg2 ;
-(void)publishStreamsProtocol:(id)arg1 didFinishSendingUploadCompleteError:(id)arg2 ;
-(void)submitAssetCollectionsForPublication:(id)arg1 skipAssetCollections:(id)arg2 ;
-(void)reenqueueQuarantinedAssetCollections;
-(int)publishBatchSize;
-(void)setPublishBatchSize:(int)arg1 ;
-(id)initWithPersonID:(id)arg1 baseURL:(id)arg2 ;
-(void)_updateMasterManifest;
-(BOOL)enqueueAssetCollections:(id)arg1 outError:(id*)arg2 ;
-(BOOL)dequeueAssetCollectionWithGUIDs:(id)arg1 outError:(id*)arg2 ;
-(void)computeHashForAsset:(id)arg1 ;
-(void)_refreshServerSideConfiguredParameters;
-(void)_serverSideConfigurationDidChange:(id)arg1 ;
-(void)_registerAsset:(id)arg1 ;
-(void)_registerAllAssetsForWrapper:(id)arg1 ;
-(void)_quarantineOrDiscardWrappers:(id)arg1 withError:(id)arg2 ;
-(BOOL)_verifyAssetFile:(id)arg1 ;
-(id)_collectionWithNoDerivatives:(id)arg1 ;
-(id)_checkAssetCollectionFiles:(id)arg1 ;
-(id)_checkObjectWrappers:(id)arg1 ;
-(BOOL)_isAllowedToUpload;
-(void)_requestDerivatives;
-(void)_addAssetToFileHashMap:(id)arg1 ;
-(void)_removeAssetFromFileHashMap:(id)arg1 ;
-(void)_removeAssetsInAssetCollectionWrappersFromAssetMap:(id)arg1 ;
-(void)_didFinishUsingAssetCollections:(id)arg1 ;
-(void)_sendMetadataToStreams;
-(id)_invalidStreamsResponseErrorUnderlyingError:(id)arg1 ;
-(void)_sendFilesToMMCS;
-(void)_categorizeError:(id)arg1 setOutIsIgnorable:(BOOL*)arg2 setOutIsCounted:(BOOL*)arg3 setOutIsFatal:(BOOL*)arg4 setOutNeedsBackoff:(BOOL*)arg5 setOutIsTemporary:(BOOL*)arg6 setOutIsTokenAuth:(BOOL*)arg7 setOutIsAuthError:(BOOL*)arg8 ;
-(void)_sendUploadComplete;
-(id)_abortedError;
-(void)_abort;
-(void)_forget;
-(BOOL)_isInRetryState;
-(NSURL *)storageProtocolURL;
-(void)setStorageProtocolURL:(NSURL *)arg1 ;
-(long long)publishTargetByteCount;
-(void)setPublishTargetByteCount:(long long)arg1 ;
@end

