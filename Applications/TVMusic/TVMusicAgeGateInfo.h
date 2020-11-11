//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TVMusicAgeGateInfo : NSObject
{
    _Bool _isAgeGateEnabled;	// 8 = 0x8
    long long _ratingThreshold;	// 16 = 0x10
    NSString *_dialogTitle;	// 24 = 0x18
    NSString *_dialogMessage;	// 32 = 0x20
}

+ (void)initialize;	// IMP=0x0000000100054d24
+ (id)ageGateInfoFromURLBag;	// IMP=0x0000000100054cac
- (void).cxx_destruct;	// IMP=0x0000000100055418
@property(retain, nonatomic) NSString *dialogMessage; // @synthesize dialogMessage=_dialogMessage;
@property(retain, nonatomic) NSString *dialogTitle; // @synthesize dialogTitle=_dialogTitle;
@property(nonatomic) long long ratingThreshold; // @synthesize ratingThreshold=_ratingThreshold;
@property(nonatomic) _Bool isAgeGateEnabled; // @synthesize isAgeGateEnabled=_isAgeGateEnabled;
- (id)description;	// IMP=0x00000001000552e4
- (id)initWithRatingThreshold:(long long)arg1 dialogTitle:(id)arg2 dialogMessage:(id)arg3;	// IMP=0x0000000100055230
- (id)initFromURLBag;	// IMP=0x0000000100054d8c
- (id)init;	// IMP=0x0000000100054d58

@end

