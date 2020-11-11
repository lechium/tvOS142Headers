/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:18 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoLibraryServices/PLBackgroundJobWorker.h>

@class NSProgress, PAImageConversionServiceClient, PAVideoConversionServiceClient;

@interface PLBackgroundJobDeferredRenderDerivativesBaseWorker : PLBackgroundJobWorker {

	NSProgress* _progressForCurrentAsset;
	PAImageConversionServiceClient* _imageConversionClient;
	PAVideoConversionServiceClient* _videoConversionClient;

}
+(id)workerWithLibrary:(id)arg1 ;
-(BOOL)isInterruptible;
-(id)imageConversionClient;
-(id)videoConversionClient;
-(BOOL)hasPendingJobs;
-(id)managedObjectIDsNeedingProcessing;
-(void)performWorkOnManagedObjectID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_predicateToFetchDeferredAssets;
-(void)stopWorkingOnManagedObjectID:(id)arg1 ;
@end
