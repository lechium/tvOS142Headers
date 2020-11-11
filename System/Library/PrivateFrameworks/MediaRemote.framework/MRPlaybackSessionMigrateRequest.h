/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:34 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaRemote/MediaRemote-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _MRPlaybackSessionMigrateRequestProtobuf, NSError, NSString, MRContentItem, MRPlaybackSessionRequest;

@interface MRPlaybackSessionMigrateRequest : NSObject <NSCopying> {

	_MRPlaybackSessionMigrateRequestProtobuf* _protobuf;
	NSError* _migrateError;
	NSError* _fallbackError;
	unsigned _originatorType;
	unsigned _destinationTypes;
	NSString* _appBundleIdentifier;
	NSString* _initiator;
	unsigned long long _requestType;
	unsigned long long _fallbackReason;
	long long _playbackSessionSize;

}

@property (assign,nonatomic) unsigned destinationTypes;                                          //@synthesize destinationTypes=_destinationTypes - In the implementation block
@property (assign,nonatomic) long long playerOptions; 
@property (assign,nonatomic) long long endpointOptions; 
@property (nonatomic,retain) NSString * requestID; 
@property (nonatomic,retain) NSString * appBundleIdentifier;                                     //@synthesize appBundleIdentifier=_appBundleIdentifier - In the implementation block
@property (nonatomic,retain) NSString * initiator;                                               //@synthesize initiator=_initiator - In the implementation block
@property (assign,nonatomic) unsigned long long requestType;                                     //@synthesize requestType=_requestType - In the implementation block
@property (assign,nonatomic) unsigned long long fallbackReason;                                  //@synthesize fallbackReason=_fallbackReason - In the implementation block
@property (assign,nonatomic) double playbackPosition; 
@property (assign,nonatomic) double playbackRate; 
@property (assign,nonatomic) long long playbackSessionSize;                                      //@synthesize playbackSessionSize=_playbackSessionSize - In the implementation block
@property (assign,nonatomic) unsigned playbackState; 
@property (nonatomic,retain) MRContentItem * contentItem; 
@property (assign,nonatomic) unsigned originatorType;                                            //@synthesize originatorType=_originatorType - In the implementation block
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) NSString * report; 
@property (nonatomic,retain) MRPlaybackSessionRequest * playbackSessionRequest; 
@property (nonatomic,readonly) _MRPlaybackSessionMigrateRequestProtobuf * protobuf; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)finalize;
-(id)initWithData:(id)arg1 ;
-(NSString *)report;
-(double)duration;
-(unsigned long long)requestType;
-(NSString *)appBundleIdentifier;
-(void)setRequestType:(unsigned long long)arg1 ;
-(double)playbackRate;
-(void)setPlaybackRate:(double)arg1 ;
-(void)setAppBundleIdentifier:(NSString *)arg1 ;
-(NSString *)initiator;
-(NSString *)requestID;
-(void)setRequestID:(NSString *)arg1 ;
-(void)merge:(id)arg1 ;
-(_MRPlaybackSessionMigrateRequestProtobuf *)protobuf;
-(id)initWithProtobuf:(id)arg1 ;
-(unsigned)playbackState;
-(void)setPlaybackState:(unsigned)arg1 ;
-(void)setInitiator:(NSString *)arg1 ;
-(void)startEvent:(id)arg1 ;
-(void)endEvent:(id)arg1 withError:(id)arg2 ;
-(MRPlaybackSessionRequest *)playbackSessionRequest;
-(void)setPlaybackSessionSize:(long long)arg1 ;
-(long long)playerOptions;
-(void)setContentItem:(MRContentItem *)arg1 ;
-(void)setPlaybackPosition:(double)arg1 ;
-(void)setPlayerOptions:(long long)arg1 ;
-(void)setEndpointOptions:(long long)arg1 ;
-(void)endEvent:(id)arg1 ;
-(void)setPlaybackSessionRequest:(MRPlaybackSessionRequest *)arg1 ;
-(long long)endpointOptions;
-(double)playbackPosition;
-(MRContentItem *)contentItem;
-(unsigned)originatorType;
-(unsigned)destinationTypes;
-(long long)playbackSessionSize;
-(void)addDestinationType:(unsigned)arg1 ;
-(void)setOriginatorTypeFromDevice:(id)arg1 ;
-(void)addDestinationTypesFromDevices:(id)arg1 ;
-(unsigned long long)fallbackReason;
-(void)setFallbackReason:(unsigned long long)arg1 ;
-(void)setOriginatorType:(unsigned)arg1 ;
-(void)setDestinationTypes:(unsigned)arg1 ;
@end

