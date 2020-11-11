/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:43 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AirPlayReceiverKit.framework/AirPlayReceiverKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AirPlayReceiverKit/AirPlayReceiverKit-Structs.h>
#import <libobjc.A.dylib/APRKResourceLoaderHelperDelegate.h>
#import <libobjc.A.dylib/APRKContentKeyHelperDelegate.h>

@protocol APRKMediaPlayerMessagingDelegate, OS_dispatch_queue;
@class AVQueuePlayer, NSString, NSObject, NSArray, NSDictionary, APRKResourceLoaderHelper, APRKContentKeyHelper, APRKMetadata, AVPlayerItem;

@interface APRKMediaPlayer : NSObject <APRKResourceLoaderHelperDelegate, APRKContentKeyHelperDelegate> {

	AVQueuePlayer* _player;
	NSString* _previousItemUUID;
	NSString* _currentItemUUID;
	BOOL _isInterestedInDateRange;
	long long _stallCount;
	id<APRKMediaPlayerMessagingDelegate> _messagingDelegate;
	NSObject*<OS_dispatch_queue> _messageQueue;
	NSArray* _cachedSelectedMediaArray;
	NSDictionary* _cachedSSLProperties;
	APRKResourceLoaderHelper* _resourceLoaderHelper;
	APRKContentKeyHelper* _contentKeyHelper;
	OpaqueAPReceiverFairPlayHelperRef _fpHelper;
	long long _internalPlaybackState;
	OpaqueAPSNetworkAddressRef _sessionReceiverAddr;
	APRKMetadata* _currentItemMetadata;

}

@property (nonatomic,retain) APRKMetadata * currentItemMetadata;                                         //@synthesize currentItemMetadata=_currentItemMetadata - In the implementation block
@property (nonatomic,readonly) AVQueuePlayer * backingAVQueuePlayer; 
@property (nonatomic,readonly) AVPlayerItem * currentItem; 
@property (assign,nonatomic,__weak) id<APRKMediaPlayerMessagingDelegate> messagingDelegate; 
@property (assign,nonatomic) BOOL isInterestedInDateRange; 
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(AVPlayerItem *)currentItem;
-(void)stopWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)contentKeyHelper:(id)arg1 wantsToPerformContentKeyRequestWithDictionary:(id)arg2 ;
-(void)contentKeyHelper:(id)arg1 didGenerateSecureStopRecordPayload:(id)arg2 ;
-(void)resourceLoaderHelper:(id)arg1 wantsToPerformUnhandledURLRequestWithDictionary:(id)arg2 forRequestID:(id)arg3 ;
-(void)_registerNotificationHandlersForPlayer;
-(void)_unregisterNotificationHandlersForPlayerItem:(id)arg1 ;
-(void)_unregisterNotificationHandlersForPlayer;
-(void)_updatePlaybackStateWithState:(long long)arg1 stoppedBecauseInterrupted:(BOOL)arg2 ;
-(void)_processUnhandledURLWithDictionary:(id)arg1 ;
-(id)_processPlaybackInfoRequestWithDictionary:(id)arg1 ;
-(void)_setPropertyWithDictionary:(id)arg1 ;
-(id)_getPropertyWithDictionary:(id)arg1 ;
-(void)_insertPlayQueueItemWithDictionary:(id)arg1 ;
-(void)_removePlayQueueItemWithDictionary:(id)arg1 ;
-(void)_setRateWithDictionary:(id)arg1 ;
-(void)_seekWithDictionary:(id)arg1 ;
-(void)_processStreamingKeyWithDictionary:(id)arg1 ;
-(void)_stopWithDictionary:(id)arg1 ;
-(id)_processAuthorizeItemWithDictionary:(id)arg1 ;
-(void)_sendUpstreamMessageWithDictionary:(id)arg1 ;
-(id)_SSLPropertiesforTLSInfo:(id)arg1 ;
-(id<APRKMediaPlayerMessagingDelegate>)messagingDelegate;
-(id)_fixedIPContentLocationFromURLString:(id)arg1 error:(id*)arg2 ;
-(void)_sendUpstreamErrorMessageWithError:(id)arg1 ;
-(void)_registerNotificationHandlersForPlayerItem:(id)arg1 ;
-(id)_playerItemForUUID:(id)arg1 ;
-(void)setIsInterestedInDateRange:(BOOL)arg1 ;
-(APRKMetadata *)currentItemMetadata;
-(void)setCurrentItemMetadata:(APRKMetadata *)arg1 ;
-(BOOL)_attemptToSetSelectedMediaArray:(id)arg1 ;
-(id)_currentPlaybackInfoDictionary;
-(BOOL)_ensureFairPlayHelper;
-(void)_sendUpstreamPlaybackStateMessageWithPlaybackStateString:(id)arg1 stoppedBecauseInterrupted:(BOOL)arg2 ;
-(void)_handleCurrentItemChangedNotification:(id)arg1 ;
-(void)_handleCurrentItemPlaybackStalledNotification:(id)arg1 ;
-(void)_handleTimeJumpedNotification:(id)arg1 ;
-(void)_handleCurrentItemPlayedToEndNotification:(id)arg1 ;
-(void)_prepareForNewItemPlaybackWithCompletionBlock:(/*^block*/id)arg1 ;
-(AVQueuePlayer *)backingAVQueuePlayer;
-(void)setMessagingDelegate:(id<APRKMediaPlayerMessagingDelegate>)arg1 ;
-(void)processMessageWithDictionary:(id)arg1 ;
-(BOOL)isInterestedInDateRange;
-(void)setSessionReceiverAddress:(OpaqueAPSNetworkAddressRef)arg1 ;
-(void)processTLSInfoDictionary:(id)arg1 ;
@end

