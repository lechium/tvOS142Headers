/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:38 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ActionKit/WFSettingsClient.h>
#import <libobjc.A.dylib/WFBooleanStateSetting.h>

@class NSString;

@interface WFAppearanceSettingsClient : WFSettingsClient <WFBooleanStateSetting>

@property (nonatomic,readonly) long long currentAppearance; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)getStateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setState:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setAppearance:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(long long)currentAppearance;
@end

