//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MSDPartialDownload : NSObject
{
    NSString *_fileDownloading;	// 8 = 0x8
    long long _totalFileSize;	// 16 = 0x10
    long long _downloadedContentSize;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010000e194
@property long long downloadedContentSize; // @synthesize downloadedContentSize=_downloadedContentSize;
@property long long totalFileSize; // @synthesize totalFileSize=_totalFileSize;
@property(retain) NSString *fileDownloading; // @synthesize fileDownloading=_fileDownloading;
- (void)pushToTestLog:(id)arg1;	// IMP=0x000000010000e008
- (id)description;	// IMP=0x000000010000df78
- (void)appendDownloadedFileSize:(long long)arg1;	// IMP=0x000000010000de78
- (void)processServerRangeResponse:(id)arg1;	// IMP=0x000000010000dd48
- (id)getRangeHeaderForDownload;	// IMP=0x000000010000db60
- (_Bool)isDownloadComplete;	// IMP=0x000000010000d9c8
- (id)init;	// IMP=0x000000010000d984

@end
