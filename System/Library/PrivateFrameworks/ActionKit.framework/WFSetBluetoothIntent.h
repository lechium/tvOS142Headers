/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:41 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/WFBooleanSettingIntent.h>

@class NSNumber;

@interface WFSetBluetoothIntent : INIntent <WFBooleanSettingIntent>

@property (assign,nonatomic) long long operation; 
@property (nonatomic,retain) NSNumber * state; 
@property (nonatomic,readonly) Class settingsClientClass; 
@property (nonatomic,copy) NSNumber * state; 
-(void)applyWithSettingsClient:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(Class)settingsClientClass;
@end

