/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:48 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ATAssetLinkControllerObserver <NSObject>
@optional
-(void)assetLinkController:(id)arg1 didEnqueueAsset:(id)arg2;
-(void)assetLinkController:(id)arg1 didProcessFinishedAsset:(id)arg2;
-(void)assetLinkController:(id)arg1 didChangeDownloadStateForAssets:(id)arg2;
-(void)assetLinkController:(id)arg1 didProcessAllTrackAssetsWithAssetType:(id)arg2;
-(void)assetLinkControllerDidProcessAllTrackAssets:(id)arg1;
-(void)assetLinkController:(id)arg1 didUpdateAssetState:(id)arg2;

@required
-(void)assetLinkController:(id)arg1 didUpdateAsset:(id)arg2;
-(void)assetLinkController:(id)arg1 didFinishAsset:(id)arg2;

@end

