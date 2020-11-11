/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:26 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoAnalysis/PhotoAnalysis-Structs.h>
#import <PhotoAnalysis/PHAWorker.h>
#import <libobjc.A.dylib/PHAVisionServiceAssetsAnalyzingOperationDelegate.h>
#import <libobjc.A.dylib/PVVisionIntegrating.h>

@protocol OS_dispatch_queue;
@class NSOperationQueue, NSObject, NSMapTable, NSMutableDictionary, NSNumber, NSString;

@interface PHAVisionServiceWorker : PHAWorker <PHAVisionServiceAssetsAnalyzingOperationDelegate, PVVisionIntegrating> {

	NSOperationQueue* _assetAnalysisOperationQueue;
	NSObject*<OS_dispatch_queue> _commandDispatchQueue;
	NSMapTable* _jobToAssetsAnalyzingOperationMapTable;
	NSMutableDictionary* _coalescedAnalysisResultsByAssetLocalIdentifier;
	NSMutableDictionary* _coalescedJobResultsByAssetLocalIdentifier;
	NSNumber* _lastRecordedDarkWakeState;
	AQ _lastPerformedJobScenario;
	BOOL _analysisJobCancelled;
	unsigned _visionAlgorithmUmbrellaVersion;

}

@property (assign) BOOL analysisJobCancelled;                                      //@synthesize analysisJobCancelled=_analysisJobCancelled - In the implementation block
@property (assign,nonatomic) unsigned visionAlgorithmUmbrellaVersion;              //@synthesize visionAlgorithmUmbrellaVersion=_visionAlgorithmUmbrellaVersion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)analysisLog;
+(id)preferredAssetResourcesForAnalyzingAsset:(id)arg1 ;
+(id)defaultImageCreationOptions;
+(void)disableANEForRequest:(id)arg1 ;
+(/*^block*/id)assetResourceLargestToSmallestComparator;
+(/*^block*/id)assetResourceSmallestToLargestComparator;
-(void)shutdown;
-(void)startup;
-(void)configureRequest:(id)arg1 algorithmUmbrellaVersion:(unsigned)arg2 ;
-(void)performVisionForcedCleanupWithOptions:(id)arg1 ;
-(void)performVisionForcedCleanup;
-(BOOL)startAnalysisJob:(id)arg1 error:(id*)arg2 ;
-(BOOL)stopAnalysisJob:(id)arg1 error:(id*)arg2 ;
-(void)visionServiceAssetsProcessingOperation:(id)arg1 didExecuteToCompletion:(BOOL)arg2 ;
-(void)didPerformJob:(id)arg1 ;
-(void)coalesceJobResult:(unsigned long long)arg1 forAssetLocalIdentifier:(id)arg2 ;
-(void)willCompleteJob:(id)arg1 ;
-(BOOL)supportsCoalescingResults;
-(unsigned long long)analyzeAssetWithLocalIdentifier:(id)arg1 workerJob:(id)arg2 error:(id*)arg3 ;
-(void)willPerformJob:(id)arg1 ;
-(id)initWithPhotoAnalysisManager:(id)arg1 dataLoader:(id)arg2 ;
-(void)_checkForDarkWakeStateTransition;
-(BOOL)isExecutingDuringDarkWake;
-(unsigned long long)lastPerformedJobScenario;
-(Class)assetsAnalyzingOperationClass;
-(BOOL)canProvideAnalysisJobResultInformation:(id)arg1 withoutRequiringAssetResourceForAsset:(id)arg2 ;
-(unsigned long long)analyzeAssetWithLocalIdentifier:(id)arg1 dataLoadingOptions:(id)arg2 usingBlock:(/*^block*/id)arg3 error:(id*)arg4 ;
-(unsigned long long)analyzeImageData:(id)arg1 forAsset:(id)arg2 withAttributes:(id)arg3 error:(id*)arg4 ;
-(unsigned long long)analyzeAssetResourceFileAtURL:(id)arg1 forAsset:(id)arg2 withAttributes:(id)arg3 error:(id*)arg4 ;
-(CGImageRef)_createCGImageFromImageSource:(CGImageSourceRef)arg1 imageOptions:(id)arg2 orientation:(unsigned long long*)arg3 error:(id*)arg4 ;
-(id)assetWithLocalIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)getLocallyAvailableAssetResource:(id*)arg1 forAnalyzingAsset:(id)arg2 error:(id*)arg3 ;
-(BOOL)processAsset:(id)arg1 error:(id*)arg2 ;
-(id)assetResourcesForAsset:(id)arg1 fromDesiredTypes:(const long long*)arg2 count:(unsigned long long)arg3 ;
-(id)localFileURLForAssetResource:(id)arg1 error:(id*)arg2 ;
-(id)imageDataForAssetResource:(id)arg1 error:(id*)arg2 ;
-(CGImageRef)createCGImageForAssetResource:(id)arg1 imageOptions:(id)arg2 orientation:(unsigned long long*)arg3 error:(id*)arg4 ;
-(CGImageRef)createCGImageFromImageFileURL:(id)arg1 imageOptions:(id)arg2 orientation:(unsigned long long*)arg3 error:(id*)arg4 ;
-(void)coalesceResultsDictionary:(id)arg1 forAssetLocalIdentifier:(id)arg2 ;
-(void)insidePhotoLibraryTransactionPersistResultsDictionary:(id)arg1 forAsset:(id)arg2 ;
-(unsigned)visionAlgorithmUmbrellaVersion;
-(void)setVisionAlgorithmUmbrellaVersion:(unsigned)arg1 ;
-(BOOL)analysisJobCancelled;
-(void)setAnalysisJobCancelled:(BOOL)arg1 ;
@end

