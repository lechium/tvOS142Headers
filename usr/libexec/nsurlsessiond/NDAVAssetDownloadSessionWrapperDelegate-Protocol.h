//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NDAVAssetDownloadSessionWrapper, NSArray, NSDictionary, NSError, NSValue;

@protocol NDAVAssetDownloadSessionWrapperDelegate <NSObject>
- (void)NDAVAssetDownloadSessionWrapper:(NDAVAssetDownloadSessionWrapper *)arg1 didFinishDownloadForMediaSelectionPropertyList:(NSDictionary *)arg2;
- (void)NDAVAssetDownloadSessionWrapper:(NDAVAssetDownloadSessionWrapper *)arg1 didResolveMediaSelectionPropertyList:(NSDictionary *)arg2;
- (void)NDAVAssetDownloadSessionWrapper:(NDAVAssetDownloadSessionWrapper *)arg1 didLoadTimeRange:(NSValue *)arg2 totalTimeRangesLoaded:(NSArray *)arg3 timeRangeExpectedToLoad:(NSValue *)arg4 forMediaSelectionPropertyList:(NSDictionary *)arg5;
- (void)NDAVAssetDownloadSessionWrapper:(NDAVAssetDownloadSessionWrapper *)arg1 didUpdateProgressWithLastBytesWritten:(unsigned long long)arg2 totalBytesWritten:(unsigned long long)arg3 totalBytesExpectedToWrite:(unsigned long long)arg4;
- (void)NDAVAssetDownloadSessionWrapper:(NDAVAssetDownloadSessionWrapper *)arg1 didCompleteWithError:(NSError *)arg2;
@end

