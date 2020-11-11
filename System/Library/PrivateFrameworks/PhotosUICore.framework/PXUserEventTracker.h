/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:32 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXUserEventTrackerCommon.h>

@class NSHashTable;

@interface PXUserEventTracker : PXUserEventTrackerCommon {

	double _timeLoggedOnDetailViewWillAppear;
	double _timeLoggedOnMemoriesFeedWillAppear;
	unsigned long long _totalNumberOfRelatedJumps;
	unsigned long long _MaxDepthOfRelatedJumps;
	NSHashTable* __relatedLookupTable;

}

@property (setter=_setRelatedLookupTable:,nonatomic,retain) NSHashTable * _relatedLookupTable;              //@synthesize _relatedLookupTable=__relatedLookupTable - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(void)willViewDetailsWithCurrentContext:(id)arg1 ;
-(void)didFinishViewingDetailsWithCurrentContext:(id)arg1 ;
-(void)willViewMemoriesFeedView;
-(void)didFinishViewingMemoriesFeedView;
-(void)didViewDetailsForAssetCollection:(id)arg1 ;
-(void)didPlayMiroMovieForAssetCollection:(id)arg1 ;
-(void)didConfirmDeleteOfMemory;
-(void)didFavoriteMemory;
-(void)didCreateMemoryViaAddToMemories;
-(void)_resetDetailViewTraversalStatistics;
-(void)logInterestingMemoryNotificationSeenCount;
-(void)logInterestingMemoryNotificationRespondedCount;
-(void)didPresentOneUpFromOrigin:(long long)arg1 ;
-(void)didNavigateInOneUpFromOrigin:(long long)arg1 ;
-(BOOL)isEventSourceSenderAppearingForTheFirstTime:(id)arg1 ;
-(void)logViewCountForLogState:(unsigned long long)arg1 ;
-(void)logViewCountForLogSubState:(unsigned long long)arg1 ;
-(void)logViewCountForLogSubSubState:(unsigned long long)arg1 ;
-(void)logCounterValuesForLogState:(unsigned long long)arg1 duration:(double)arg2 ;
-(void)logCounterValuesForLogSubState:(unsigned long long)arg1 duration:(double)arg2 ;
-(void)logCounterValuesForLogSubSubState:(unsigned long long)arg1 duration:(double)arg2 ;
-(void)logImpressionCountForEventSource:(unsigned long long)arg1 ;
-(void)_logAggdAddValueForScalarKey:(CFStringRef)arg1 value:(long long)arg2 ;
-(void)_logAggdDurationCounterForLogState:(unsigned long long)arg1 duration:(double)arg2 ;
-(void)_logAggdDurationCounterForLogSubState:(unsigned long long)arg1 duration:(double)arg2 ;
-(void)_logAggdDurationCounterForLogSubSubState:(unsigned long long)arg1 duration:(double)arg2 ;
-(void)_logAggdRelatedJumpStatistics:(unsigned long long)arg1 totalJumpCount:(unsigned long long)arg2 ;
-(void)logPeopleHomeCount;
-(void)logPeopleDetailCount;
-(void)logPeopleMeSuggestionConfirmed:(BOOL)arg1 ;
-(void)logMergeCandidateInlineControlWithSignature:(unsigned long long)arg1 ;
-(void)logBootstrapMergeCandidatesVerifiedConfirmed:(unsigned long long)arg1 verifiedRejected:(unsigned long long)arg2 unverifiedConfirmed:(unsigned long long)arg3 unverifiedRejected:(unsigned long long)arg4 ;
-(void)logBootstrapMergeCandidateFaceCountVerifiedConfirmed:(unsigned long long)arg1 verifiedRejected:(unsigned long long)arg2 unverifiedConfirmed:(unsigned long long)arg3 unverifiedRejected:(unsigned long long)arg4 ;
-(void)logPeopleConfirmAdditionalViewCount;
-(void)logConfirmAdditionalSuggestionsConfirmed:(unsigned long long)arg1 rejected:(unsigned long long)arg2 ;
-(void)logConfirmAdditionalVisionFaceCountConfirmed:(unsigned long long)arg1 rejected:(unsigned long long)arg2 ;
-(void)logConfirmAdditionalMergeCandidateFaceCountVerifiedConfirmed:(unsigned long long)arg1 verifiedRejected:(unsigned long long)arg2 unverifiedConfirmed:(unsigned long long)arg3 unverifiedRejected:(unsigned long long)arg4 ;
-(void)logConfirmAdditionalMergeCandidatesVerifiedConfirmed:(unsigned long long)arg1 verifiedRejected:(unsigned long long)arg2 unverifiedConfirmed:(unsigned long long)arg3 unverifiedRejected:(unsigned long long)arg4 ;
-(void)logNamingTypeSelection:(unsigned long long)arg1 ;
-(void)logPeopleHomeFavoritePersonCount:(unsigned long long)arg1 totalPersonCount:(unsigned long long)arg2 ;
-(void)logPeopleHomeNumberOfPeopleWithContactName:(unsigned long long)arg1 numberOfPeopleWithStringName:(unsigned long long)arg2 ;
-(void)logPeopleAddToPeopleHome;
-(void)logPeopleRemoveFromPeopleHome;
-(void)logPeopleDetailKeyPhotoChanged;
-(void)logPeopleDetailNotThisPerson;
-(void)logPeopleDetailShowFaces;
-(void)logUserDidSelectGadgetAccessoryButtonWithKey:(CFStringRef)arg1 ;
-(void)logForYouMemoriesFeedCount;
-(void)logForYouMemoriesDetailsCount;
-(void)logForYouContextualMemoriesDetailsCount;
-(void)logForYouSharedAlbumInvitationAcceptedCount;
-(void)logForYouSharedAlbumInvitationDeclinedCount;
-(void)logForYouSharedAlbumInvitationReportedAsJunkCount;
-(void)logForYouNavigatedToSharedAlbumActivityViewFromCollageView;
-(void)logForYouNavigatedToSharedAlbumActivityViewFromRecentActivityEntry;
-(void)logForYouSuggestionViewedCount;
-(void)logForYouSuggestionViewed1UpCount;
-(void)logForYouSuggestionSharedCount;
-(void)logForYouSuggestionSavedCount;
-(void)logForYouInboxViewedCount;
-(void)logForYouInboxItemSelectedWithType:(long long)arg1 ;
-(void)logSearchResultType:(unsigned long long)arg1 ;
-(void)logTappedZKItemType:(long long)arg1 ;
-(void)logZKSectionVisible:(BOOL)arg1 forSectionType:(long long)arg2 ;
-(void)logSearchWordEmbeddingsPresented;
-(void)logSearchWordEmbeddingSelected;
-(void)logSearchWordCompletionTapped;
-(void)logSearchNextTokenSuggestionTapped;
-(void)logSearchZeroKeywordSearch;
-(void)logSearchTapSearch;
-(void)logSearchSiriFoundResults:(BOOL)arg1 ;
-(void)logSearchSuccessfulResult:(BOOL)arg1 ;
-(void)logSearchPerSessionNextTokenSuggestionTapped:(BOOL)arg1 wordCompletionTapped:(BOOL)arg2 ;
-(void)logSearchNumberOfTermsInSearchFieldOnSuccessfulSearch:(unsigned long long)arg1 ;
-(void)logNavigationListViewTapWithKey:(CFStringRef)arg1 ;
-(void)livePhotoEffectOptionsAppeared;
-(void)livePhotoEffectRenderingFailed;
-(void)livePhotoEffectPreviewFinishedRendering:(double)arg1 ;
-(void)livePhotoEffectSelected:(long long)arg1 ;
-(void)livePhotoEffectSavingFailed;
-(void)livePhotoEffectSavingFinished:(double)arg1 ;
-(void)livePhotoEffectReverted;
-(void)livePhotoEffectSuggested:(long long)arg1 ;
-(void)livePhotoEffectSuggestionApplied;
-(void)livePhotoEffectShared;
-(void)logFirstTimeExpericeReadiness:(BOOL)arg1 forLibrarySize:(long long)arg2 ;
-(CFStringRef)_aggdKeyForFirstTimeExperienceIsReady:(BOOL)arg1 librarySize:(long long)arg2 ;
-(void)_aggdDurationLoggingDryrunForSubState:(unsigned long long)arg1 duration:(double)arg2 ;
-(void)_aggdDurationLoggingDryrun:(unsigned long long)arg1 duration:(double)arg2 ;
-(void)_aggdJumpCountLoggingDryrun:(unsigned long long)arg1 totalJumpCount:(unsigned long long)arg2 ;
-(NSHashTable *)_relatedLookupTable;
-(void)_setRelatedLookupTable:(id)arg1 ;
@end

