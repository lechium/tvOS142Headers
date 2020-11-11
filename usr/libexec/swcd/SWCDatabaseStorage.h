//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class NSData, NSDictionary, NSNumber, NSOrderedSet;

@interface SWCDatabaseStorage : NSObject <NSSecureCoding>
{
    long long _databaseVersion;	// 8 = 0x8
    NSOrderedSet *_entries;	// 16 = 0x10
    NSDictionary *_settings;	// 24 = 0x18
    NSNumber *_launchServicesDatabaseGeneration;	// 32 = 0x20
    NSData *_enterpriseState;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100014ebc
- (void).cxx_destruct;	// IMP=0x0000000100015870
@property(copy) NSData *enterpriseState; // @synthesize enterpriseState=_enterpriseState;
@property(copy) NSNumber *launchServicesDatabaseGeneration; // @synthesize launchServicesDatabaseGeneration=_launchServicesDatabaseGeneration;
@property(copy) NSDictionary *settings; // @synthesize settings=_settings;
@property(copy) NSOrderedSet *entries; // @synthesize entries=_entries;
@property long long databaseVersion; // @synthesize databaseVersion=_databaseVersion;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100014f84
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100014ec4

@end

