//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface MSDContentCacheManager : NSObject
{
    NSString *_fileDownloadCachePath;	// 8 = 0x8
    NSMutableArray *_fileDownloadedList;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0000000100079280
- (void).cxx_destruct;	// IMP=0x0000000100079fe4
@property(retain) NSMutableArray *fileDownloadedList; // @synthesize fileDownloadedList=_fileDownloadedList;
@property(retain) NSString *fileDownloadCachePath; // @synthesize fileDownloadCachePath=_fileDownloadCachePath;
- (void)clearListOfDownloadedFiles;	// IMP=0x0000000100079e40
- (void)addToListOfDownloadedFiles:(id)arg1;	// IMP=0x0000000100079c88
- (void)moveFilesToCacheFromStagingPath:(id)arg1;	// IMP=0x0000000100079ba8
- (_Bool)checkIfFileIsPresentInCache:(id)arg1;	// IMP=0x0000000100079a4c
- (_Bool)copyFileIfPresentInCache:(id)arg1 toLocation:(id)arg2;	// IMP=0x000000010007986c
- (void)clearCache;	// IMP=0x00000001000796e8
- (void)clearCacheIfNeededForManifest:(id)arg1;	// IMP=0x0000000100079460
- (id)init;	// IMP=0x00000001000792ec

@end

