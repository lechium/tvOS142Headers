//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSSet, NSString;

@interface MSDManifest : NSObject
{
    NSMutableDictionary *_dict;	// 8 = 0x8
    NSString *_rootPath;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100018774
@property(retain) NSDictionary *dict; // @synthesize dict=_dict;
@property(retain) NSString *rootPath; // @synthesize rootPath=_rootPath;
- (id)createManifestForCurrentUser:(id)arg1;	// IMP=0x0000000100018510
@property(readonly, getter=pathSet) NSSet *pathSet;
- (_Bool)enumerateAndCollectMetaData:(id)arg1 relativeTo:(id)arg2 skip:(id)arg3 superSet:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x0000000100017820
- (_Bool)path:(id)arg1 inSuperSet:(id)arg2;	// IMP=0x0000000100017674
- (_Bool)addFilesFromPath:(id)arg1 relativeTo:(id)arg2 skip:(id)arg3 superSet:(id)arg4;	// IMP=0x0000000100017544
- (_Bool)addFilesFromPath:(id)arg1 relativeTo:(id)arg2 skip:(id)arg3;	// IMP=0x00000001000174c8
- (_Bool)folder:(id)arg1 contains:(id)arg2;	// IMP=0x00000001000172b4
- (void)setMetadata:(id)arg1 forFile:(id)arg2;	// IMP=0x0000000100017224
- (id)metadataForFile:(id)arg1;	// IMP=0x000000010001719c
- (void)dealloc;	// IMP=0x0000000100017144
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000100017048
- (id)init;	// IMP=0x0000000100016fc8

@end
