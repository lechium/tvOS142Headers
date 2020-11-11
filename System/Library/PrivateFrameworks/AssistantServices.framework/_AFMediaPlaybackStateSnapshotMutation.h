/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:03 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFMediaPlaybackStateSnapshotMutating.h>

@class AFMediaPlaybackStateSnapshot, NSDate, NSString;

@interface _AFMediaPlaybackStateSnapshotMutation : NSObject <AFMediaPlaybackStateSnapshotMutating> {

	AFMediaPlaybackStateSnapshot* _baseModel;
	long long _playbackState;
	NSDate* _nowPlayingTimestamp;
	NSString* _mediaType;
	NSString* _groupIdentifier;
	struct {
		unsigned isDirty : 1;
		unsigned hasPlaybackState : 1;
		unsigned hasNowPlayingTimestamp : 1;
		unsigned hasMediaType : 1;
		unsigned hasGroupIdentifier : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setGroupIdentifier:(id)arg1 ;
-(void)setMediaType:(id)arg1 ;
-(id)generate;
-(void)setPlaybackState:(long long)arg1 ;
-(id)initWithBaseModel:(id)arg1 ;
-(void)setNowPlayingTimestamp:(id)arg1 ;
@end

