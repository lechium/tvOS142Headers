//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSNumber, NSString;

@interface PBDisplayEDID : NSObject
{
    NSData *_dataRepresentation;	// 8 = 0x8
    NSNumber *_productID;	// 16 = 0x10
    NSString *_manufacturer;	// 24 = 0x18
    NSString *_product;	// 32 = 0x20
    NSData *_physicalAddress;	// 40 = 0x28
    NSNumber *_WOM;	// 48 = 0x30
    NSNumber *_YOM;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000010018ff3c
@property(readonly, nonatomic) NSNumber *YOM; // @synthesize YOM=_YOM;
@property(readonly, nonatomic) NSNumber *WOM; // @synthesize WOM=_WOM;
@property(readonly, nonatomic) NSData *physicalAddress; // @synthesize physicalAddress=_physicalAddress;
@property(readonly, nonatomic) NSString *product; // @synthesize product=_product;
@property(readonly, nonatomic) NSString *manufacturer; // @synthesize manufacturer=_manufacturer;
@property(readonly, nonatomic) NSNumber *productID; // @synthesize productID=_productID;
@property(readonly, nonatomic) NSData *dataRepresentation; // @synthesize dataRepresentation=_dataRepresentation;
- (id)initWithAVService:(struct __IOAVService **)arg1;	// IMP=0x000000010018fb4c

@end

