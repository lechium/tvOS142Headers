//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TVSettingsLicenseUtilities : NSObject
{
}

+ (id)acknowledgementsPath;	// IMP=0x000000010009349c
+ (id)legalSafetyText;	// IMP=0x00000001000933d4
+ (id)iTunesTermsText;	// IMP=0x000000010009335c
+ (id)iCloudTermsText;	// IMP=0x0000000100093318
+ (id)gameCenterTermsText;	// IMP=0x00000001000932d4
+ (id)warrantyText;	// IMP=0x0000000100093290
+ (id)softwareLicenseText;	// IMP=0x000000010009324c
+ (void)initialize;	// IMP=0x00000001000931cc
+ (void)_downloadTerms;	// IMP=0x0000000100092fbc
+ (void)_getBuiltinTerms;	// IMP=0x0000000100092e40
+ (void)_decodeTermsData:(id)arg1;	// IMP=0x0000000100092c1c
+ (id)_termsRequest;	// IMP=0x000000010009294c

@end
