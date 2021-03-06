//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIImageSymbolConfiguration;

@interface _TVSBBulletinImageInfo : NSObject
{
    NSString *_imageName;	// 8 = 0x8
    NSString *_symbolName;	// 16 = 0x10
    UIImageSymbolConfiguration *_configuration;	// 24 = 0x18
}

+ (id)infoWithSymbolName:(id)arg1 configuration:(id)arg2;	// IMP=0x000000010001203c
+ (id)infoWithImageName:(id)arg1 configuration:(id)arg2;	// IMP=0x0000000100011f94
+ (id)infoWithImageName:(id)arg1;	// IMP=0x0000000100011f2c
- (void).cxx_destruct;	// IMP=0x00000001000120fc
@property(readonly, nonatomic) UIImageSymbolConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) NSString *symbolName; // @synthesize symbolName=_symbolName;
@property(readonly, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;

@end

