/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:39 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ActionKit/WFSettingsClient.h>
#import <libobjc.A.dylib/WFDecimalValueSetting.h>

@class NSString;

@interface WFBrightnessSettingsClient : WFSettingsClient <WFDecimalValueSetting>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)createClientWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getValueWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setValue:(float)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

