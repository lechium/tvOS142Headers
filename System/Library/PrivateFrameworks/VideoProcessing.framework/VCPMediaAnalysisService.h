/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:13 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/VCPMediaAnalysisClientProtocol.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSMutableDictionary;

@interface VCPMediaAnalysisService : NSObject <VCPMediaAnalysisClientProtocol> {

	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _managementQueue;
	NSObject*<OS_dispatch_queue> _handlerQueue;
	NSMutableDictionary* _progressBlocks;
	int _nextRequestID;

}
+(int)queryProgressDetail:(id*)arg1 forPhotoLibraryURL:(id)arg2 andTaskID:(unsigned long long)arg3 ;
+(id)sharedAnalysisService;
+(id)errorWithDescription:(id)arg1 ;
+(int)queryProgress:(float*)arg1 forPhotoLibrary:(id)arg2 andTaskID:(unsigned long long)arg3 ;
+(int)queryProgressDetail:(id*)arg1 forPhotoLibrary:(id)arg2 andTaskID:(unsigned long long)arg3 ;
+(id)analysisService;
-(id)init;
-(void)invalidate;
-(id)connection;
-(void)cancelRequest:(int)arg1 ;
-(int)requestQuickFaceIdentificationForPhotoLibraryURL:(id)arg1 withOptions:(id)arg2 andCompletionHandler:(/*^block*/id)arg3 ;
-(int)requestSuggestedPersonsForPersonWithLocalIdentifier:(id)arg1 toBeConfirmedPersonSuggestions:(id)arg2 toBeRejectedPersonSuggestions:(id)arg3 photoLibraryURL:(id)arg4 progessHandler:(/*^block*/id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(int)requestUpdateKeyFacesOfPersonsWithLocalIdentifiers:(id)arg1 forceUpdate:(BOOL)arg2 photoLibraryURL:(id)arg3 progessHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(int)requestResetFaceClusteringStateWithPhotoLibraryURL:(id)arg1 progressHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(int)requestResetFaceClassificationModelForPhotoLibraryURL:(id)arg1 progressHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(int)requestClusterCacheValidationWithPhotoLibraryURL:(id)arg1 progressHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(int)requestSuggestedMePersonIdentifierWithContext:(id)arg1 photoLibraryURL:(id)arg2 progressHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(int)requestPersonPromoterStatusWithAdvancedFlag:(BOOL)arg1 photoLibraryURL:(id)arg2 progressHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(int)requestFaceCandidatesforKeyFaceForPersonsWithLocalIdentifiers:(id)arg1 photoLibraryURL:(id)arg2 progessHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(int)requestRebuildPersonsWithLocalIdentifiers:(id)arg1 photoLibraryURL:(id)arg2 progressHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(int)requestReclusterFacesWithPhotoLibraryURL:(id)arg1 progressHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)notifyLibraryAvailableAtURL:(id)arg1 ;
-(void)cancelAllRequests;
-(void)reportProgress:(double)arg1 forRequest:(int)arg2 ;
-(int)requestProcessingWithTaskID:(unsigned long long)arg1 forPhotoLibrary:(id)arg2 withOptions:(id)arg3 progessHandler:(/*^block*/id)arg4 andCompletionHandler:(/*^block*/id)arg5 ;
-(int)requestProcessingWithTaskID:(unsigned long long)arg1 forAssets:(id)arg2 withOptions:(id)arg3 progressHandler:(/*^block*/id)arg4 andCompletionHandler:(/*^block*/id)arg5 ;
-(int)requestAnalysisTypes:(unsigned long long)arg1 forAssetWithResourceURLs:(id)arg2 withOptions:(id)arg3 progressHandler:(/*^block*/id)arg4 andCompletionHandler:(/*^block*/id)arg5 ;
-(int)requestBackgroundAnalysisForAssets:(id)arg1 realTime:(BOOL)arg2 progessHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(int)requestBackgroundProcessingWithTaskID:(unsigned long long)arg1 forPhotoLibrary:(id)arg2 progessHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(int)requestSceneProcessingForPhotoLibrary:(id)arg1 withOptions:(id)arg2 progressHandler:(/*^block*/id)arg3 andCompletionHandler:(/*^block*/id)arg4 ;
-(int)requestFaceProcessingForPhotoLibrary:(id)arg1 withOptions:(id)arg2 progressHandler:(/*^block*/id)arg3 andCompletionHandler:(/*^block*/id)arg4 ;
-(int)requestMultiWorkerProcessingForPhotoLibrary:(id)arg1 withOptions:(id)arg2 progressHandler:(/*^block*/id)arg3 andCompletionHandler:(/*^block*/id)arg4 ;
-(int)requestFullProcessingForPhotoLibrary:(id)arg1 withOptions:(id)arg2 progressHandler:(/*^block*/id)arg3 andCompletionHandler:(/*^block*/id)arg4 ;
-(int)requestLivePhotoEffectsForAssets:(id)arg1 withOptions:(id)arg2 progressHandler:(/*^block*/id)arg3 andCompletionHandler:(/*^block*/id)arg4 ;
-(int)requestSceneProcessingForAssets:(id)arg1 withOptions:(id)arg2 progressHandler:(/*^block*/id)arg3 andCompletionHandler:(/*^block*/id)arg4 ;
-(int)requestFaceProcessingForAssets:(id)arg1 withOptions:(id)arg2 progressHandler:(/*^block*/id)arg3 andCompletionHandler:(/*^block*/id)arg4 ;
-(int)requestSceneprintProcessingForAssets:(id)arg1 withOptions:(id)arg2 progressHandler:(/*^block*/id)arg3 andCompletionHandler:(/*^block*/id)arg4 ;
-(int)requestVideoStabilizationForAssets:(id)arg1 withOptions:(id)arg2 progressHandler:(/*^block*/id)arg3 andCompletionHandler:(/*^block*/id)arg4 ;
-(void)cancelBackgroundActivity;
-(int)requestPersonPreferenceForPhotoLibraryURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(int)requestVIPModelFilepathForPhotoLibraryURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

