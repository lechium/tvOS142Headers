//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSBundle, NSString, TVSettingsPreferenceFacade;

@interface TVSettingsItemFactory : NSObject
{
    NSBundle *_bundle;	// 8 = 0x8
    NSString *_plistName;	// 16 = 0x10
    NSString *_appIdentifier;	// 24 = 0x18
    TVSettingsPreferenceFacade *_preferenceFacade;	// 32 = 0x20
}

+ (long long)_autocapitalizationTypeFromString:(id)arg1;	// IMP=0x0000000100048c64
+ (long long)_autocorrectionTypeFromString:(id)arg1;	// IMP=0x0000000100048bf0
+ (long long)_keyboardTypeFromString:(id)arg1;	// IMP=0x0000000100048b3c
+ (_Bool)_specifierSupported:(id)arg1;	// IMP=0x0000000100048ac8
- (void).cxx_destruct;	// IMP=0x0000000100048d48
@property(retain, nonatomic) TVSettingsPreferenceFacade *preferenceFacade; // @synthesize preferenceFacade=_preferenceFacade;
@property(copy, nonatomic) NSString *appIdentifier; // @synthesize appIdentifier=_appIdentifier;
@property(copy, nonatomic) NSString *plistName; // @synthesize plistName=_plistName;
@property(retain, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
- (id)privacyItemFromSpecifierDictionary:(id)arg1;	// IMP=0x0000000100048a0c
- (id)titleItemFromSpecifierDictionary:(id)arg1;	// IMP=0x00000001000486a0
- (id)toggleItemFromSpecifierDictionary:(id)arg1;	// IMP=0x0000000100048268
- (id)longTextItemFromSpecifierDictionary:(id)arg1;	// IMP=0x0000000100047fb8
- (id)textItemFromSpecifierDictionary:(id)arg1;	// IMP=0x0000000100047cb8
- (id)sliderItemFromSpecifierDictionary:(id)arg1;	// IMP=0x0000000100047c6c
- (id)radioGroupFromSpecifierDictionary:(id)arg1;	// IMP=0x00000001000477f0
- (id)multiValueItemFromSpecifierDictionary:(id)arg1;	// IMP=0x0000000100047274
- (id)groupFromSpecifierDictionary:(id)arg1 withItems:(id)arg2;	// IMP=0x0000000100047034
- (id)childPaneItemFromSpecifierDictionary:(id)arg1;	// IMP=0x0000000100046ce4
- (id)initWithBundle:(id)arg1 appIdentifier:(id)arg2 containerPath:(id)arg3 plistName:(id)arg4;	// IMP=0x0000000100046ba4

@end

