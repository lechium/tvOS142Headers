//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface MCCertificatePropertiesInfo : NSObject
{
    NSArray *_sections;	// 8 = 0x8
    NSArray *_sectionTitles;	// 16 = 0x10
    NSArray *_keyValueSections;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000001f46c
@property(retain, nonatomic) NSArray *keyValueSections; // @synthesize keyValueSections=_keyValueSections;
@property(retain, nonatomic) NSArray *sectionTitles; // @synthesize sectionTitles=_sectionTitles;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
- (id)_sendablePropertiesFromTrust:(struct __SecTrust *)arg1;	// IMP=0x000000000001f104
- (id)_copyPropertiesFromTrust:(struct __SecTrust *)arg1;	// IMP=0x000000000001f020
- (id)_sendablePropertiesFromProperties:(id)arg1;	// IMP=0x000000000001edb4
- (id)_sendablePropertyFromProperty:(id)arg1;	// IMP=0x000000000001eaf8
- (id)_sectionsFromProperties:(id)arg1;	// IMP=0x000000000001e73c
- (id)_sectionInfoForCertSection:(id)arg1 title:(id)arg2;	// IMP=0x000000000001e628
- (id)_cellInfosForSection:(id)arg1;	// IMP=0x000000000001e138
- (void)_setup:(id)arg1;	// IMP=0x000000000001dadc
- (id)initWithTrust:(struct __SecTrust *)arg1;	// IMP=0x000000000001d964
- (id)initWithCertificateProperties:(id)arg1;	// IMP=0x000000000001d874
- (id)initWithCertificate:(struct __SecCertificate *)arg1;	// IMP=0x000000000001d770

@end

