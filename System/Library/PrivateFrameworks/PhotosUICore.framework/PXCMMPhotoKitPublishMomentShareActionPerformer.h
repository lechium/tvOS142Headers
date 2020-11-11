/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:20 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXCMMPublishActionPerformer.h>

@class UIAlertController, PHMomentShare, NSDate;

@interface PXCMMPhotoKitPublishMomentShareActionPerformer : PXCMMPublishActionPerformer {

	UIAlertController* _progressAlertController;
	int _thumbnailRequestID;
	int _previewRequestID;
	PHMomentShare* _momentShare;
	BOOL _didFinalize;
	NSDate* _initialStartDate;
	NSDate* _previewRequestStartDate;
	NSDate* _creationRequestStartDate;
	NSDate* _publishStartDate;
	NSDate* _finishedDate;

}
-(void)performUserInteractionTask;
-(void)_requestPreviewImagesForAsset:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(id)_keyAssetForMomentShareCreationWithAssets:(id)arg1 ;
-(void)_presentInternalSharingAlert;
-(void)_createMomentShare;
-(void)_createMomentShareWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_creatingMomentShareDidCompleteWithMomentShare:(id)arg1 error:(id)arg2 ;
-(void)_presentBudgetOverridePromptForMomentShare:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_budgetOverridePromptForMomentShare:(id)arg1 completedWithOutcome:(BOOL)arg2 error:(id)arg3 ;
-(void)_setupSharingProgressController;
-(void)_publishMomentShare:(id)arg1 ;
-(void)_publishMomentShare:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_publishingMomentShare:(id)arg1 didCompleteWithShareURL:(id)arg2 error:(id)arg3 ;
-(void)_acceptSuggestion:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_finalizePublishWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(void)_presentAlertControllerForCurrentCPLStateIfNeededWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_handleSharingProgressCancellation;
-(void)_performCleanupIfNeeded;
@end

