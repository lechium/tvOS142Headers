/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:17 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AVAudioPlayerDelegate.h>

@protocol IMAssistantAudioPlayerDelegate;
@class NSString, AVAudioPlayer;

@interface IMAssistantAudioPlayer : NSObject <AVAudioPlayerDelegate> {

	id<IMAssistantAudioPlayerDelegate> _delegate;
	NSString* _identifier;
	AVAudioPlayer* _player;

}

@property (nonatomic,readonly) NSString * identifier;               //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)identifier;
-(void)stopPlaying;
-(void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(BOOL)arg2 ;
-(long long)playerState;
-(id)initWithDelegate:(id)arg1 identifier:(id)arg2 ;
-(BOOL)setupAudioSession;
-(void)cleanupAudioSession;
-(BOOL)startPlayingAudioURL:(id)arg1 ;
@end

