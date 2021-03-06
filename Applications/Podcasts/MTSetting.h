//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MTSettingsGroup, NSDictionary, NSString;

@interface MTSetting : NSObject
{
    _Bool _enabled;	// 8 = 0x8
    NSDictionary *_userInfo;	// 16 = 0x10
    long long _type;	// 24 = 0x18
    NSString *_identifier;	// 32 = 0x20
    id _value;	// 40 = 0x28
    CDUnknownBlockType _changeHandler;	// 48 = 0x30
    NSString *_title;	// 56 = 0x38
    CDUnknownBlockType _generator;	// 64 = 0x40
    MTSettingsGroup *_group;	// 72 = 0x48
}

+ (id)optionSettingWithTitle:(id)arg1 initialValue:(unsigned long long)arg2 optionDescription:(id)arg3 identifier:(id)arg4 changeHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000010010d640
+ (id)optionSettingWithTitle:(id)arg1 headerTitle:(id)arg2 initialValue:(unsigned long long)arg3 optionDescription:(id)arg4 identifier:(id)arg5 changeHandler:(CDUnknownBlockType)arg6;	// IMP=0x000000010010d444
+ (id)informativeSettingWithText:(id)arg1 identifier:(id)arg2;	// IMP=0x000000010010d398
+ (id)loadingSettingWithIdentifier:(id)arg1;	// IMP=0x000000010010d334
+ (id)drilldownSettingWithTitle:(id)arg1 valueLabel:(id)arg2 identifier:(id)arg3 viewControllerGenerator:(CDUnknownBlockType)arg4;	// IMP=0x000000010010d23c
+ (id)textSettingWithInitialValue:(id)arg1 placeholder:(id)arg2 identifier:(id)arg3 changeHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000010010d140
+ (id)buttonSettingWithTitle:(id)arg1 identifier:(id)arg2 changeHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010010d018
+ (id)buttonSettingWithTitle:(id)arg1 detailText:(id)arg2 identifier:(id)arg3 changeHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000010010cea8
+ (id)switchSettingWithTitle:(id)arg1 initialValue:(_Bool)arg2 identifier:(id)arg3 changeHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000010010cd0c
+ (id)radioOptionWithTitle:(id)arg1 radioGroup:(id)arg2 value:(unsigned long long)arg3 identifier:(id)arg4;	// IMP=0x000000010010cbe4
- (void).cxx_destruct;	// IMP=0x000000010010d808
@property(nonatomic) __weak MTSettingsGroup *group; // @synthesize group=_group;
@property(copy, nonatomic) CDUnknownBlockType generator; // @synthesize generator=_generator;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) CDUnknownBlockType changeHandler; // @synthesize changeHandler=_changeHandler;
@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
- (id)init;	// IMP=0x000000010010d6f0

@end

