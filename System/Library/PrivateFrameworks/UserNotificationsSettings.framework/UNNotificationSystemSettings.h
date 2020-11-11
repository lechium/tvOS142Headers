/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:55 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UserNotificationsSettings.framework/UserNotificationsSettings
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UserNotificationsSettings/UserNotificationsSettings-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface UNNotificationSystemSettings : NSObject <NSCopying, NSSecureCoding> {

	long long _showPreviewsSetting;
	long long _announcementSetting;

}

@property (nonatomic,readonly) long long showPreviewsSetting;                    //@synthesize showPreviewsSetting=_showPreviewsSetting - In the implementation block
@property (nonatomic,readonly) long long announcementSetting;                    //@synthesize announcementSetting=_announcementSetting - In the implementation block
@property (nonatomic,readonly) long long spokenNotificationSetting; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)announcementSetting;
-(long long)showPreviewsSetting;
-(long long)spokenNotificationSetting;
-(id)initWithShowPreviewsSetting:(long long)arg1 announcementSetting:(long long)arg2 ;
@end

