/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:55 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextInputCore/TIMetricDescriptor.h>

@class NSString;

@interface TISettingValueDescriptor : TIMetricDescriptor {

	NSString* _settingName;

}

@property (retain) NSString * settingName;              //@synthesize settingName=_settingName - In the implementation block
+(id)settingValueDescriptorWithMetricName:(id)arg1 settingName:(id)arg2 ;
-(NSString *)settingName;
-(id)initWithMetricName:(id)arg1 settingName:(id)arg2 ;
-(void)setSettingName:(NSString *)arg1 ;
@end

