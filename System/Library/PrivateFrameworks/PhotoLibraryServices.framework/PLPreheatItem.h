/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:25 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, OS_dispatch_group;
#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSString, NSObject, PLAssetsdCloudClient;

@interface PLPreheatItem : NSObject {

	unsigned short _format;
	long long _imageType;
	CGSize _optimalSourcePixelSize;
	NSString* _assetUUID;
	BOOL _CPLPrefetching;
	NSObject*<OS_dispatch_queue> _CPLPrefetchingIsolationQueue;
	NSString* _CPLPrefetchingDoneToken;
	int _CPLNotifyRegistrationToken;
	BOOL _CPLPrefetchingCancelled;
	NSObject*<OS_dispatch_group> _CPLPrefetchingWaitGroup;
	BOOL _cachingAllowed;
	Ai _requestCount;
	PLAssetsdCloudClient* _cloudClient;
	BOOL _didCompleteCPLPrefetchingWithSuccessOrError;
	BOOL _CPLPrefetchingWasCancelled;
	unsigned short _bestFormat;
	NSString* _virtualCPLTaskIdentifier;

}

@property (nonatomic,readonly) unsigned short format;                                             //@synthesize format=_format - In the implementation block
@property (assign,nonatomic) unsigned short bestFormat;                                           //@synthesize bestFormat=_bestFormat - In the implementation block
@property (nonatomic,readonly) long long imageType;                                               //@synthesize imageType=_imageType - In the implementation block
@property (nonatomic,readonly) CGSize optimalSourcePixelSize;                                     //@synthesize optimalSourcePixelSize=_optimalSourcePixelSize - In the implementation block
@property (nonatomic,copy,readonly) NSString * assetUUID;                                         //@synthesize assetUUID=_assetUUID - In the implementation block
@property (nonatomic,readonly) BOOL CPLPrefetching;                                               //@synthesize CPLPrefetching=_CPLPrefetching - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_group> CPLPrefetchingWaitGroup;              //@synthesize CPLPrefetchingWaitGroup=_CPLPrefetchingWaitGroup - In the implementation block
@property (retain) NSString * virtualCPLTaskIdentifier;                                           //@synthesize virtualCPLTaskIdentifier=_virtualCPLTaskIdentifier - In the implementation block
@property (assign) BOOL didCompleteCPLPrefetchingWithSuccessOrError;                              //@synthesize didCompleteCPLPrefetchingWithSuccessOrError=_didCompleteCPLPrefetchingWithSuccessOrError - In the implementation block
@property (assign) BOOL CPLPrefetchingWasCancelled;                                               //@synthesize CPLPrefetchingWasCancelled=_CPLPrefetchingWasCancelled - In the implementation block
@property (assign,nonatomic) BOOL cachingAllowed;                                                 //@synthesize cachingAllowed=_cachingAllowed - In the implementation block
-(id)description;
-(BOOL)isCancelled;
-(unsigned short)format;
-(long long)imageType;
-(NSString *)assetUUID;
-(id)cachedImage:(BOOL*)arg1 ;
-(id)cachedImageIfAvailable:(BOOL*)arg1 ;
-(BOOL)addImageHandler:(/*^block*/id)arg1 ;
-(void)startPreheatRequestWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)cancelPreheatRequestWithCompletionHandler:(/*^block*/id)arg1 ;
-(CGSize)optimalSourcePixelSize;
-(id)initForCPLPrefetchingWithAssetUUID:(id)arg1 format:(unsigned short)arg2 assetsdClient:(id)arg3 ;
-(void)setCachingAllowed:(BOOL)arg1 ;
-(long long)incrementRequestCount;
-(long long)decrementRequestCount;
-(BOOL)isRetained;
-(unsigned short)bestFormat;
-(void)setBestFormat:(unsigned short)arg1 ;
-(BOOL)CPLPrefetching;
-(NSObject*<OS_dispatch_group>)CPLPrefetchingWaitGroup;
-(NSString *)virtualCPLTaskIdentifier;
-(void)setVirtualCPLTaskIdentifier:(NSString *)arg1 ;
-(BOOL)didCompleteCPLPrefetchingWithSuccessOrError;
-(void)setDidCompleteCPLPrefetchingWithSuccessOrError:(BOOL)arg1 ;
-(BOOL)CPLPrefetchingWasCancelled;
-(void)setCPLPrefetchingWasCancelled:(BOOL)arg1 ;
-(BOOL)cachingAllowed;
@end
