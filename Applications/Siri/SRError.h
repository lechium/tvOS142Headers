//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSError.h>

@interface SRError : NSError
{
}

+ (id)errorWithCode:(long long)arg1;	// IMP=0x0000000100089c3c
+ (id)errorWithCode:(long long)arg1 localizedFailureReason:(id)arg2;	// IMP=0x0000000100089bdc
+ (id)errorWithCode:(long long)arg1 userInfo:(id)arg2;	// IMP=0x0000000100089b7c
- (id)initWithCode:(long long)arg1;	// IMP=0x0000000100089d4c
- (id)initWithCode:(long long)arg1 localizedFailureReason:(id)arg2;	// IMP=0x0000000100089c68
- (id)initWithCode:(long long)arg1 userInfo:(id)arg2;	// IMP=0x0000000100089c4c

@end
