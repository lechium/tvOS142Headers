/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:02 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class VUIMediaEntityType, VUIMediaEntityAssetControllerState;


@protocol VUIMediaEntityAssetController <NSObject>
@property (nonatomic,copy,readonly) NSObject*<VUIMediaEntityIdentifier> mediaEntityIdentifier; 
@property (nonatomic,copy,readonly) VUIMediaEntityType * mediaEntityType; 
@property (assign,nonatomic,__weak) id<VUIMediaEntityAssetControllerDelegate> delegate; 
@property (nonatomic,readonly) BOOL supportsStartingDownload; 
@property (nonatomic,readonly) BOOL supportsRedownloadingContent; 
@property (nonatomic,copy,readonly) VUIMediaEntityAssetControllerState * state; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> completionDispatchQueue; 
@property (nonatomic,readonly) BOOL contentAllowsCellularDownload; 
@required
-(void)invalidate;
-(id<VUIMediaEntityAssetControllerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(VUIMediaEntityAssetControllerState *)state;
-(VUIMediaEntityType *)mediaEntityType;
-(NSObject*<OS_dispatch_queue>)completionDispatchQueue;
-(void)setCompletionDispatchQueue:(id)arg1;
-(NSObject*<VUIMediaEntityIdentifier>)mediaEntityIdentifier;
-(BOOL)supportsStartingDownload;
-(void)startDownloadAllowingCellular:(BOOL)arg1 quality:(long long)arg2 shouldMarkAsDeletedOnCancellationOrFailure:(BOOL)arg3 completion:(/*^block*/id)arg4;
-(void)pauseDownload;
-(void)resumeDownload;
-(void)deleteAndRedownloadAllowingCellular:(BOOL)arg1 quality:(long long)arg2 shouldMarkAsDeletedOnCancellationOrFailure:(BOOL)arg3 completion:(/*^block*/id)arg4;
-(void)fetchNewKeysForDownloadedVideo;
-(void)cancelAndRemoveDownload;
-(void)cancelKeyFetch;
-(BOOL)supportsRedownloadingContent;
-(BOOL)contentAllowsCellularDownload;

@end

