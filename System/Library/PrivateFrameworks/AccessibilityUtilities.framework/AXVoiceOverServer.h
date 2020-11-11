/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:04 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AccessibilityUtilities/AXServer.h>

@interface AXVoiceOverServer : AXServer
+(id)server;
-(id)_serviceName;
-(BOOL)_connectIfNecessary;
-(void)performAutomationTestingCommand:(id)arg1 userInfo:(id)arg2 timeout:(double)arg3 completion:(/*^block*/id)arg4 ;
-(id)lastSpokenPhrases;
-(id)lastSpokenContents;
-(id)lastSoundsPlayed;
-(id)currentRotorName;
-(id)lastScreenChange;
-(id)currentFocusedElement;
-(BOOL)triggerGesture:(id)arg1 ;
-(BOOL)triggerCommand:(long long)arg1 ;
-(BOOL)triggerCommand:(long long)arg1 withArgument:(id)arg2 ;
-(BOOL)isBrailleInputUIShowing;
-(BOOL)isHandwritingInputUIShowing;
-(BOOL)isBluetoothBrailleDisplayConnected;
@end

