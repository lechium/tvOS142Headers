//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKServerChangeToken;

__attribute__((visibility("hidden")))
@interface CKKSCloudKitFetchRequest : NSObject
{
    _Bool _participateInFetch;	// 8 = 0x8
    _Bool _resync;	// 9 = 0x9
    CKServerChangeToken *_changeToken;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000a8e68
@property(retain) CKServerChangeToken *changeToken; // @synthesize changeToken=_changeToken;
@property _Bool resync; // @synthesize resync=_resync;
@property _Bool participateInFetch; // @synthesize participateInFetch=_participateInFetch;

@end

