/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:46 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SASettingOpenSettings.h>

@class NSString;

@interface SASettingOpenPreference : SASettingOpenSettings

@property (nonatomic,copy) NSString * pane; 
@property (nonatomic,copy) NSString * tag; 
+(id)openPreference;
+(id)openPreferenceWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)tag;
-(void)setTag:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)pane;
-(void)setPane:(NSString *)arg1 ;
@end
