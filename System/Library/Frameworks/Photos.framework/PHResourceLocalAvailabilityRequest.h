/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:38 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSProgressReporting.h>

@class NSMutableDictionary, PHAsset, NSProgress, NSArray, NSMutableArray, NSString;

@interface PHResourceLocalAvailabilityRequest : NSObject <NSProgressReporting> {

	NSMutableDictionary* _progressByRequestIdentifier;
	/*^block*/id _downloadCompletionHandler;
	BOOL __downloadCancelled;
	PHAsset* _asset;
	long long _requestType;
	double _progressFraction;
	NSProgress* _progress;
	/*^block*/id _progressChangeHandler;
	NSArray* __assetResources;
	NSMutableArray* __activeAssetResourcesRequest;

}

@property (assign,setter=_setProgressFraction:,nonatomic) double progressFraction;                                           //@synthesize progressFraction=_progressFraction - In the implementation block
@property (assign,setter=_setDownloadCancelled:,getter=_isDownloadCancelled,nonatomic) BOOL _downloadCancelled;              //@synthesize _downloadCancelled=__downloadCancelled - In the implementation block
@property (setter=_setAssetResources:,nonatomic,retain) NSArray * _assetResources;                                           //@synthesize _assetResources=__assetResources - In the implementation block
@property (nonatomic,readonly) NSMutableArray * _activeAssetResourcesRequest;                                                //@synthesize _activeAssetResourcesRequest=__activeAssetResourcesRequest - In the implementation block
@property (readonly) PHAsset * asset;                                                                                        //@synthesize asset=_asset - In the implementation block
@property (readonly) long long requestType;                                                                                  //@synthesize requestType=_requestType - In the implementation block
@property (readonly) NSProgress * progress;                                                                                  //@synthesize progress=_progress - In the implementation block
@property (nonatomic,copy) id progressChangeHandler;                                                                         //@synthesize progressChangeHandler=_progressChangeHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_resourceInfoForAsset:(id)arg1 resourcesToShare:(id)arg2 includeAllAssetResources:(BOOL)arg3 fulfillOnDemandResources:(BOOL)arg4 error:(id*)arg5 ;
+(id)_resourcesToShareForAsset:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)fetchResourcesToShareForAsset:(id)arg1 requestOptions:(id)arg2 error:(id*)arg3 ;
+(id)_resourcesToShareForAsset:(id)arg1 error:(id*)arg2 ;
+(BOOL)setValuesInDictionary:(id)arg1 fromDictionary:(id)arg2 keysToCopy:(id)arg3 ;
+(id)originalsAndFullSizeResourcesToShareForAsset:(id)arg1 fromAvailableResources:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
+(id)singularResourcesToShareForAsset:(id)arg1 fromAvailableResources:(id)arg2 options:(id)arg3 useOriginalResources:(BOOL)arg4 knownUnsupported:(BOOL)arg5 error:(id*)arg6 ;
+(id)resourceInfoKeysForResourceTypesForPhotos;
+(id)resourceInfoKeysForResourceTypesForVideos;
+(id)utiKeysForURLKeys;
+(id)indexesForAssetsRequiringResourceRetrieval:(id)arg1 requestType:(long long)arg2 ;
+(id)indexesForAssetsRequiringResourceRetrieval:(id)arg1 requestType:(long long)arg2 options:(id)arg3 ;
+(id)indexesForAssetsWithoutThumbnails:(id)arg1 requestType:(long long)arg2 ;
+(id)resourceInfoForAsset:(id)arg1 requestType:(long long)arg2 error:(id*)arg3 ;
-(id)init;
-(NSProgress *)progress;
-(long long)requestType;
-(PHAsset *)asset;
-(id)initWithAsset:(id)arg1 requestType:(long long)arg2 ;
-(void)fetchResourceAvailabilityWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)retrieveRequiredResourcesWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_fetchResourcesWithOptions:(id)arg1 networkAccessAllowed:(BOOL)arg2 handler:(/*^block*/id)arg3 ;
-(void)_fetchResourcesForPickerAsset:(id)arg1 options:(id)arg2 networkAccessAllowed:(BOOL)arg3 handler:(/*^block*/id)arg4 ;
-(void)_fetchResourcesForSharingAsset:(id)arg1 options:(id)arg2 networkAccessAllowed:(BOOL)arg3 handler:(/*^block*/id)arg4 ;
-(void)_fetchResourcesForDuplicatingAsset:(id)arg1 options:(id)arg2 networkAccessAllowed:(BOOL)arg3 handler:(/*^block*/id)arg4 ;
-(void)_handleCompletionOfAssetResourceDataRequestWithId:(int)arg1 error:(id)arg2 ;
-(void)_simulateFetchResourcesWithDuration:(double)arg1 success:(BOOL)arg2 networkAccessAllowed:(BOOL)arg3 handler:(/*^block*/id)arg4 ;
-(void)_didFinishDownloadWithSuccess:(BOOL)arg1 resourceInfo:(id)arg2 error:(id)arg3 ;
-(void)_cancelActiveAssetResourceRequests;
-(void)cancelRetrievalRequest;
-(void)_updateCombinedProgressWithValue:(double)arg1 forRequestIdentifier:(id)arg2 networkAccessAllowed:(BOOL)arg3 ;
-(void)_setProgressFraction:(double)arg1 ;
-(long long)resourceAvailabilityForOptions:(id)arg1 resourceInfo:(id*)arg2 ;
-(double)progressFraction;
-(id)progressChangeHandler;
-(void)setProgressChangeHandler:(id)arg1 ;
-(BOOL)_isDownloadCancelled;
-(void)_setDownloadCancelled:(BOOL)arg1 ;
-(NSArray *)_assetResources;
-(void)_setAssetResources:(id)arg1 ;
-(NSMutableArray *)_activeAssetResourcesRequest;
@end

