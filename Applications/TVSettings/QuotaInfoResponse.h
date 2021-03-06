//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleAccount/AAResponse.h>

@class NSArray, NSDictionary, NSNumber, NSString;

@interface QuotaInfoResponse : AAResponse
{
    _Bool _basicAccount;	// 32 = 0x20
    NSDictionary *_quotaInfo;	// 40 = 0x28
    NSDictionary *_storageInfo;	// 48 = 0x30
    NSDictionary *_urls;	// 56 = 0x38
    NSArray *_topToolbarItems;	// 64 = 0x40
    NSArray *_otherToolbarItems;	// 72 = 0x48
    NSDictionary *_accountStatus;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000001000ee508
@property(readonly, nonatomic) NSDictionary *accountStatus; // @synthesize accountStatus=_accountStatus;
- (_Bool)hasPurchasedMoreStorage;	// IMP=0x00000001000ee494
- (id)storageFooter:(_Bool)arg1;	// IMP=0x00000001000ee48c
@property(readonly, nonatomic) NSNumber *availableStorageBytes;
@property(readonly, nonatomic) NSNumber *usedStorageBytes;
@property(readonly, nonatomic) NSString *availableStorageText;
@property(readonly, nonatomic) NSString *totalStorageText;
@property(readonly, nonatomic) NSString *appDetailsURLString;
@property(readonly, nonatomic) NSString *manageStorageURLString;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;	// IMP=0x00000001000edd64

@end

