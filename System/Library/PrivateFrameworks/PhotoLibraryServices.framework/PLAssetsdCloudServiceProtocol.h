/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:21 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PLAssetsdCloudServiceProtocol <NSObject>
@required
-(void)requestVideoPlaybackURLForCloudSharedAsset:(id)arg1 mediaAssetType:(unsigned long long)arg2 reply:(/*^block*/id)arg3;
-(void)cancelCPLDownloadTaskWithIdentifier:(id)arg1 reply:(/*^block*/id)arg2;
-(void)downloadCloudPhotoLibraryAssetWithObjectURI:(id)arg1 taskIdentifier:(id)arg2 resourceType:(unsigned long long)arg3 HighPriority:(BOOL)arg4 trackCPLDownload:(BOOL)arg5 downloadIsTransient:(BOOL)arg6 reply:(/*^block*/id)arg7;
-(void)asynchronousStartPreheatingCPLDownloadForAssets:(id)arg1 doneTokens:(id)arg2 format:(unsigned long long)arg3 reply:(/*^block*/id)arg4;
-(void)asynchronousStopPreheatingCPLDownloadForAssetsWithTaskIdentifiers:(id)arg1 reply:(/*^block*/id)arg2;
-(void)computeFingerPrintsOfAssetWithObjectURI:(id)arg1 reply:(/*^block*/id)arg2;

@end

