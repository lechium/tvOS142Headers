//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSXPCListener.h>

#import "NSXPCListenerDelegate-Protocol.h"
#import "_CDInteractionXPCProtocol-Protocol.h"

@class NSObject, NSString, _CDInteractionAdviceEngine, _CDInteractionPolicies, _CDInteractionStore, _DKDataProtectionStateMonitor, _PSContactSuggester, _PSEnsembleModel, _PSFamilyRecommender, _PSMessagesPinningSuggester, _PSSuggester;
@protocol OS_dispatch_queue, _DKKnowledgeQuerying><_DKKnowledgeSaving, _DKLocationHistorian;

@interface CDPeopleDaemon : NSXPCListener <NSXPCListenerDelegate, _CDInteractionXPCProtocol>
{
    _CDInteractionAdviceEngine *_advisor;	// 8 = 0x8
    _DKDataProtectionStateMonitor *_dataProtection;	// 16 = 0x10
    _CDInteractionPolicies *_policies;	// 24 = 0x18
    id <_DKLocationHistorian> _locationHistorian;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_workQueue;	// 40 = 0x28
    _CDInteractionStore *_store;	// 48 = 0x30
    id <_DKKnowledgeQuerying><_DKKnowledgeSaving> _knowledgeStore;	// 56 = 0x38
    _PSSuggester *_suggester;	// 64 = 0x40
    _PSEnsembleModel *_ensembleModel;	// 72 = 0x48
    _PSFamilyRecommender *_familyRecommender;	// 80 = 0x50
    _PSMessagesPinningSuggester *_messagesPinningSuggester;	// 88 = 0x58
    _PSContactSuggester *_contactSuggester;	// 96 = 0x60
}

+ (id)readRepopulationCheckpoint;	// IMP=0x0000000100006fb0
+ (_Bool)writeRepopulationCheckpoint:(id)arg1;	// IMP=0x0000000100006ec0
- (void).cxx_destruct;	// IMP=0x000000010000a6fc
@property(readonly, nonatomic) _PSContactSuggester *contactSuggester; // @synthesize contactSuggester=_contactSuggester;
@property(readonly, nonatomic) _PSMessagesPinningSuggester *messagesPinningSuggester; // @synthesize messagesPinningSuggester=_messagesPinningSuggester;
@property(readonly, nonatomic) _PSFamilyRecommender *familyRecommender; // @synthesize familyRecommender=_familyRecommender;
@property(readonly, nonatomic) _PSEnsembleModel *ensembleModel; // @synthesize ensembleModel=_ensembleModel;
@property(readonly, nonatomic) _PSSuggester *suggester; // @synthesize suggester=_suggester;
@property(readonly, nonatomic) id <_DKKnowledgeQuerying><_DKKnowledgeSaving> knowledgeStore; // @synthesize knowledgeStore=_knowledgeStore;
@property(readonly, nonatomic) _CDInteractionStore *store; // @synthesize store=_store;
- (void)reportPeopleStatistics;	// IMP=0x000000010000a414
- (void)logSizeOfStorage:(id)arg1;	// IMP=0x000000010000a0ac
- (void)populateSharingAppUsageCache;	// IMP=0x000000010000a04c
- (void)_maintainPrivacy;	// IMP=0x0000000100009b78
- (void)maintainPrivacy;	// IMP=0x00000001000099d8
- (void)tuneSocialAdvisorUsingSettings:(id)arg1 heartBeatHandler:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000001000098d0
- (void)adviseSocialInteractionsForDate:(id)arg1 andSeedContacts:(id)arg2 usingSettings:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000100009770
- (void)adviseInteractionsForLocation:(id)arg1 usingSettings:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000001000095dc
- (void)adviseInteractionsForKeywordsInString:(id)arg1 usingSettings:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100009498
- (void)adviseInteractionsForDate:(id)arg1 usingSettings:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100009354
- (void)adviseInteractionsUsingSettings:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100009220
- (void)fillInCurrentLocationIfNeeded:(id)arg1;	// IMP=0x000000010000910c
- (void)rankCandidateContacts:(id)arg1 usingSettings:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100008fc8
- (void)contactSuggestionsWithMaxSuggestions:(id)arg1 excludedContactIds:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100008ec0
- (void)relativeAppUsageProbabilitiesForCandidateBundleIds:(id)arg1 daysAgo:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100008da8
- (void)rankedHandlesFromCandidateHandles:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100008cd8
- (void)rankedSiriMLCRHandlesFromContext:(id)arg1 handles:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100008be4
- (void)rankedFamilySuggestionsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100008b88
- (void)provideMessagesPinningFeedback:(id)arg1;	// IMP=0x0000000100008b84
- (void)rankedMessagesPinsWithMaxSuggestions:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100008b28
- (void)rankedAutocompleteSuggestionsFromContext:(id)arg1 candidates:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100008a34
- (void)rankedSiriNLContactSuggestionsFromContext:(id)arg1 maxSuggestions:(id)arg2 interactionId:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000100008910
- (void)rankedGlobalSuggestionsFromContext:(id)arg1 contactsOnly:(_Bool)arg2 maxSuggestions:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000100008800
- (void)rankedNameSuggestionsFromContext:(id)arg1 name:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000010000870c
- (void)messagesZKWSuggestionsFromContext:(id)arg1 maxSuggestions:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100008604
- (void)mapsSuggestionsFromContext:(id)arg1 maxSuggestions:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000001000084fc
- (void)shareExtensionSuggestionsFromContext:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010000842c
- (void)suggestInteractionsFromContext:(id)arg1 maxSuggestions:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000010000831c
- (void)deleteInteractionsWithBundleId:(id)arg1 domainIdentifier:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100008110
- (void)deleteInteractionsWithBundleId:(id)arg1 account:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100007f04
- (void)deleteInteractionsWithBundleId:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100007d1c
- (void)deleteInteractionsMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000100007af8
- (void)countContactsUsingPredicate:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100007910
- (void)countInteractionsUsingPredicate:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100007728
- (void)queryContactsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000100007500
- (void)queryInteractionsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00000001000072a0
- (void)recordInteractions:(id)arg1 enforceDataLimits:(_Bool)arg2 enforcePrivacy:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000100007134
- (void)setLocationHistorian:(id)arg1;	// IMP=0x00000001000070c8
- (_Bool)isClassCLocked;	// IMP=0x0000000100007090
- (_Bool)requestInteractionRepopulation;	// IMP=0x0000000100007088
- (_Bool)versionCheckAndUpgradeIfNecessaryAndPossible;	// IMP=0x0000000100006be4
- (void)writeVersionNumberToDefaults:(unsigned long long)arg1;	// IMP=0x0000000100006b7c
- (long long)readVersionNumberFromDefaults;	// IMP=0x0000000100006b20
- (void)handleError:(id)arg1;	// IMP=0x000000010000680c
- (void)populatePeopleSuggesterCaches;	// IMP=0x00000001000066e8
- (void)setupDataProtectionChangeHandler;	// IMP=0x00000001000063b8
- (id)workQueue;	// IMP=0x00000001000063a8
- (id)initWithKnowledgeStore:(id)arg1;	// IMP=0x0000000100006014
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000100005d8c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

