//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface TVSettingsNotificationSettings : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    NSArray *_sectionInfos;	// 16 = 0x10
    NSString *_displayName;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100006ef4
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSArray *sectionInfos; // @synthesize sectionInfos=_sectionInfos;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) _Bool allowsNotifications;
- (unsigned long long)hash;	// IMP=0x0000000100006c54
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100006b98

@end

