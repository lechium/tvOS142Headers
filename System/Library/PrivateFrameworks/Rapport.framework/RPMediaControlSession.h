/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:26 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, RPMessageable;
@class NSObject;

@interface RPMediaControlSession : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	BOOL _invalidateCalled;
	BOOL _registeredMediaControlInterest;
	unsigned long long _mediaControlFlags;
	/*^block*/id _mediaControlFlagsChangedHandler;
	id<RPMessageable> _messenger;

}

@property (nonatomic,readonly) unsigned long long mediaControlFlags;              //@synthesize mediaControlFlags=_mediaControlFlags - In the implementation block
@property (nonatomic,copy) id mediaControlFlagsChangedHandler;                    //@synthesize mediaControlFlagsChangedHandler=_mediaControlFlagsChangedHandler - In the implementation block
@property (nonatomic,retain) id<RPMessageable> messenger;                         //@synthesize messenger=_messenger - In the implementation block
-(id)init;
-(void)invalidate;
-(void)_invalidate;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(id<RPMessageable>)messenger;
-(void)setMessenger:(id<RPMessageable>)arg1 ;
-(void)_handleMediaControlEvent:(id)arg1 ;
-(void)mediaCaptionSettingGetFromDestinationID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)mediaCaptionSettingSet:(int)arg1 destinationID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)mediaCommand:(int)arg1 destinationID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)mediaSkipBySeconds:(double)arg1 destinationID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)mediaGetVolumeFromDestinationID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)mediaSetVolume:(double)arg1 destinationID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(unsigned long long)mediaControlFlags;
-(id)mediaControlFlagsChangedHandler;
-(void)setMediaControlFlagsChangedHandler:(id)arg1 ;
@end

