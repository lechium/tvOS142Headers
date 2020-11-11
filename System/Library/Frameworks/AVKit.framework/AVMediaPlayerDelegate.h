/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:51 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class MPRemoteCommandCenter, AVPlayerViewController;

@interface AVMediaPlayerDelegate : NSObject {

	BOOL _areCommandHandlersInstalled;
	MPRemoteCommandCenter* _commandCenter;
	AVPlayerViewController* _playerViewController;

}

@property (assign,nonatomic,__weak) AVPlayerViewController * playerViewController;              //@synthesize playerViewController=_playerViewController - In the implementation block
@property (nonatomic,retain) MPRemoteCommandCenter * commandCenter;                             //@synthesize commandCenter=_commandCenter - In the implementation block
+(BOOL)_isThirdPartyPIPSupported;
-(void)dealloc;
-(void)invalidate;
-(AVPlayerViewController *)playerViewController;
-(void)setPlayerViewController:(AVPlayerViewController *)arg1 ;
-(id)initWithPlayerViewController:(id)arg1 ;
-(id)initWithPlayerViewController:(id)arg1 commandCenter:(id)arg2 ;
-(void)installCommandHandlers;
-(void)removeCommandHandlers;
-(id)mediaRemoteManager;
-(void)enableCommandsForUserInteraction;
-(long long)handlePlayCommand:(id)arg1 ;
-(long long)handlePauseCommand:(id)arg1 ;
-(long long)handlePlayPauseCommand:(id)arg1 ;
-(long long)handleStopCommand:(id)arg1 ;
-(long long)handleSkipForward:(id)arg1 ;
-(long long)handleSkipBackward:(id)arg1 ;
-(long long)handleSeekForward:(id)arg1 ;
-(long long)handleSeekBackward:(id)arg1 ;
-(long long)handleChangePlaybackRate:(id)arg1 ;
-(long long)handleEnableLanguageOption:(id)arg1 ;
-(long long)handleDisableLanguageOption:(id)arg1 ;
-(long long)handleChangePlaybackPosition:(id)arg1 ;
-(long long)handleSpecialSeekForward:(id)arg1 ;
-(long long)handleSpecialSeekBackward:(id)arg1 ;
-(long long)_handleEnableLanguageOptionCommandWithAudibleOption:(id)arg1 ;
-(long long)_handleDisableAudibleLanguageOptionCommand;
-(long long)_handleEnableLanguageOptionCommandWithLegibleOption:(id)arg1 ;
-(long long)_handleDisableLegibleLanguageOptionCommand;
-(MPRemoteCommandCenter *)commandCenter;
-(void)setCommandCenter:(MPRemoteCommandCenter *)arg1 ;
@end
