/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:55 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AudioSession.framework/AudioSession
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AudioSession/AudioSession-Structs.h>
@class NSString;

@interface AVAudioSessionChannelDescription : NSObject {

	void* _impl;

}

@property (nonatomic,readonly) NSString * channelName; 
@property (nonatomic,readonly) NSString * owningPortUID; 
@property (nonatomic,readonly) unsigned long long channelNumber; 
@property (nonatomic,readonly) unsigned channelLabel; 
+(id)privateCreateArray:(id)arg1 portUID:(id)arg2 ;
+(id)privateCreate:(id)arg1 portUID:(id)arg2 channelNumber:(unsigned)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(void)dealloc;
-(unsigned long long)channelNumber;
-(NSString *)owningPortUID;
-(unsigned)channelLabel;
-(NSString *)channelName;
-(BOOL)isEqualToChannel:(id)arg1 ;
-(ChannelDescriptionImpl*)privateGetImplementation;
@end

