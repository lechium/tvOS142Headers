//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSMutableArray;

@interface SRStack : NSObject <NSCopying>
{
    NSMutableArray *_elements;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100036408
@property(readonly, nonatomic, getter=_elements) NSMutableArray *elements; // @synthesize elements=_elements;
- (id)copy;	// IMP=0x00000001000363f0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000363ec
@property(readonly, copy, nonatomic) NSArray *allObjects;
@property(readonly, nonatomic) id topObject;
- (id)init;	// IMP=0x0000000100036338
- (id)initWithStack:(id)arg1;	// IMP=0x00000001000362dc
- (id)initWithArray:(id)arg1;	// IMP=0x0000000100036204

@end

