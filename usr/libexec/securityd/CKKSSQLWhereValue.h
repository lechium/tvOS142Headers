//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CKKSSQLWhereValue : NSObject
{
    unsigned long long _sqlOp;	// 8 = 0x8
    NSString *_value;	// 16 = 0x10
}

+ (id)op:(unsigned long long)arg1 value:(id)arg2;	// IMP=0x000000010002cbe0
- (void).cxx_destruct;	// IMP=0x000000010002cbd4
@property(retain) NSString *value; // @synthesize value=_value;
@property unsigned long long sqlOp; // @synthesize sqlOp=_sqlOp;
- (id)initWithOperation:(unsigned long long)arg1 value:(id)arg2;	// IMP=0x000000010002cb30

@end

