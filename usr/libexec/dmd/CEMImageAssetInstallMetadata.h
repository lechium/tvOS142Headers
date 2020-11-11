//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CEMAssetProvider-Protocol.h"

@class NSString, NSURL;

@interface CEMImageAssetInstallMetadata : NSObject <CEMAssetProvider>
{
    NSURL *_imageURL;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100007fac
- (void).cxx_destruct;	// IMP=0x0000000100008110
@property(copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100008084
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100007fb4
- (id)dataRepresentation;	// IMP=0x0000000100007f48
- (id)urlRepresentation;	// IMP=0x0000000100007f3c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

