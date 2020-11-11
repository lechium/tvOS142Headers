//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCountedSet, NSDate, NSMutableArray, NSString;

@interface TVPPhotoStreamBatch : NSObject
{
    NSString *_ID;	// 8 = 0x8
    NSString *_batchDescription;	// 16 = 0x10
    NSString *_batchCreatorName;	// 24 = 0x18
    NSDate *_modifiedDate;	// 32 = 0x20
    NSMutableArray *_photosInfo;	// 40 = 0x28
    NSMutableArray *_photoIndices;	// 48 = 0x30
    long long _photoAssetCount;	// 56 = 0x38
    long long _videoAssetCount;	// 64 = 0x40
    long long _batchIndex;	// 72 = 0x48
    struct CGRect _batchFrame;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000100019ef4
@property(nonatomic) struct CGRect batchFrame; // @synthesize batchFrame=_batchFrame;
@property(nonatomic) long long batchIndex; // @synthesize batchIndex=_batchIndex;
@property(nonatomic) long long videoAssetCount; // @synthesize videoAssetCount=_videoAssetCount;
@property(nonatomic) long long photoAssetCount; // @synthesize photoAssetCount=_photoAssetCount;
@property(retain, nonatomic) NSMutableArray *photoIndices; // @synthesize photoIndices=_photoIndices;
@property(retain, nonatomic) NSMutableArray *photosInfo; // @synthesize photosInfo=_photosInfo;
@property(retain, nonatomic) NSDate *modifiedDate; // @synthesize modifiedDate=_modifiedDate;
@property(retain, nonatomic) NSString *batchCreatorName; // @synthesize batchCreatorName=_batchCreatorName;
@property(retain, nonatomic) NSString *batchDescription; // @synthesize batchDescription=_batchDescription;
@property(retain, nonatomic) NSString *ID; // @synthesize ID=_ID;
@property(readonly, nonatomic) NSCountedSet *countsByAssetDisplayType;

@end
