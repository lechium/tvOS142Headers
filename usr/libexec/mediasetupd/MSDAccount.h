//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSUUID;

@interface MSDAccount : NSObject
{
    NSUUID *_homeUserIdentifier;	// 8 = 0x8
    NSUUID *_homeIdentifier;	// 16 = 0x10
}

+ (id)homeUserIDSAssociatedWithDefaultAccount;	// IMP=0x00000001000234b8
+ (id)activeiTunesAccount;	// IMP=0x000000010002345c
+ (id)activeiTunesAccountName;	// IMP=0x0000000100023400
- (void).cxx_destruct;	// IMP=0x000000010002365c
@property(readonly, copy, nonatomic) NSUUID *homeIdentifier; // @synthesize homeIdentifier=_homeIdentifier;
@property(readonly, copy, nonatomic) NSUUID *homeUserIdentifier; // @synthesize homeUserIdentifier=_homeUserIdentifier;
@property(readonly, nonatomic) _Bool hasValidSubscription;
@property(readonly, copy, nonatomic) NSString *iTunesAccountName;
- (id)initWithHomeIdentifier:(id)arg1;	// IMP=0x0000000100022b1c
- (id)initWithHomeUserIdentifier:(id)arg1;	// IMP=0x0000000100022a54

@end
