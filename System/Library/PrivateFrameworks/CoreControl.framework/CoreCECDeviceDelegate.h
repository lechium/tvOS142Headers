/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:18 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreControl.framework/CoreControl
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CoreCECDeviceDelegate <CoreRCDeviceDelegate>
@optional
-(void)cecDeviceShouldAssertActiveSource:(id)arg1;
-(void)cecDevice:(id)arg1 activeSourceStatusHasChanged:(BOOL)arg2;
-(void)cecDevice:(id)arg1 deckControlPlayHasBeenReceived:(unsigned long long)arg2 fromDevice:(id)arg3;
-(void)cecDevice:(id)arg1 deckControlCommandHasBeenReceived:(unsigned long long)arg2 fromDevice:(id)arg3;
-(void)cecDevice:(id)arg1 deckControlStatusHasBeenUpdated:(unsigned long long)arg2 fromDevice:(id)arg3;
-(void)cecDevice:(id)arg1 featureAbort:(id)arg2;
-(void)cecDevice:(id)arg1 standbyRequestHasBeenReceived:(id)arg2;
-(void)cecDevice:(id)arg1 requestSystemAudioModeStatusChangeTo:(unsigned long long)arg2 didFinishWithResult:(BOOL)arg3 error:(id)arg4;

@end

