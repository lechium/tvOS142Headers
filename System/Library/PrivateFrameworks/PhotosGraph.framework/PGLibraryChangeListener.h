/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:52 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PHPhotoLibraryChangeObserver.h>
#import <libobjc.A.dylib/PHPhotoLibraryAvailabilityObserver.h>
#import <libobjc.A.dylib/PGLibraryChangeProducer.h>

@protocol OS_dispatch_queue, PGGraphUpdateHealthRecording;
@class NSObject, NSString, PHPhotoLibrary, PGLibraryChangeListenerStateStore, NSHashTable, NSMutableOrderedSet, NSMapTable, NSCountedSet, PHPersistentChangeToken;

@interface PGLibraryChangeListener : NSObject <PHPhotoLibraryChangeObserver, PHPhotoLibraryAvailabilityObserver, PGLibraryChangeProducer> {

	NSObject*<OS_dispatch_queue> _changeObservationQueue;
	BOOL _libraryBecameUnavailable;
	NSString* _clientIdentifier;
	PHPhotoLibrary* _photoLibrary;
	PGLibraryChangeListenerStateStore* _stateStore;
	NSHashTable* _changeConsumers;
	NSMutableOrderedSet* _outstandingChangeTokens;
	NSMapTable* _outstandingChangeTokensByConsumer;
	NSCountedSet* _outstandingChangeTokenCounts;
	unsigned long long _outstandingTokensHighWaterMark;
	unsigned long long _outstandingTokensLowWaterMark;
	unsigned long long _maximumNumberOfMutationsToFetch;
	unsigned long long _mode;
	PHPersistentChangeToken* _lastReadToken;
	id<PGGraphUpdateHealthRecording> _updateHealthRecorder;

}

@property (nonatomic,__weak,readonly) PHPhotoLibrary * photoLibrary;                               //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (nonatomic,readonly) PGLibraryChangeListenerStateStore * stateStore;                     //@synthesize stateStore=_stateStore - In the implementation block
@property (nonatomic,readonly) NSHashTable * changeConsumers;                                      //@synthesize changeConsumers=_changeConsumers - In the implementation block
@property (nonatomic,readonly) NSMutableOrderedSet * outstandingChangeTokens;                      //@synthesize outstandingChangeTokens=_outstandingChangeTokens - In the implementation block
@property (nonatomic,readonly) NSMapTable * outstandingChangeTokensByConsumer;                     //@synthesize outstandingChangeTokensByConsumer=_outstandingChangeTokensByConsumer - In the implementation block
@property (nonatomic,readonly) NSCountedSet * outstandingChangeTokenCounts;                        //@synthesize outstandingChangeTokenCounts=_outstandingChangeTokenCounts - In the implementation block
@property (nonatomic,readonly) unsigned long long outstandingTokensHighWaterMark;                  //@synthesize outstandingTokensHighWaterMark=_outstandingTokensHighWaterMark - In the implementation block
@property (nonatomic,readonly) unsigned long long outstandingTokensLowWaterMark;                   //@synthesize outstandingTokensLowWaterMark=_outstandingTokensLowWaterMark - In the implementation block
@property (nonatomic,readonly) unsigned long long maximumNumberOfMutationsToFetch;                 //@synthesize maximumNumberOfMutationsToFetch=_maximumNumberOfMutationsToFetch - In the implementation block
@property (assign) unsigned long long mode;                                                        //@synthesize mode=_mode - In the implementation block
@property (nonatomic,retain) PHPersistentChangeToken * lastReadToken;                              //@synthesize lastReadToken=_lastReadToken - In the implementation block
@property (nonatomic,readonly) id<PGGraphUpdateHealthRecording> updateHealthRecorder;              //@synthesize updateHealthRecorder=_updateHealthRecorder - In the implementation block
@property (assign) BOOL libraryBecameUnavailable;                                                  //@synthesize libraryBecameUnavailable=_libraryBecameUnavailable - In the implementation block
@property (nonatomic,readonly) NSString * clientIdentifier;                                        //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,readonly) PHPersistentChangeToken * currentToken; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setMode:(unsigned long long)arg1 ;
-(unsigned long long)mode;
-(NSString *)clientIdentifier;
-(void)startListening;
-(void)stopListening;
-(PHPersistentChangeToken *)currentToken;
-(PHPhotoLibrary *)photoLibrary;
-(void)photoLibraryDidChange:(id)arg1 ;
-(void)photoLibraryDidBecomeUnavailable:(id)arg1 ;
-(void)consumer:(id)arg1 didConsumeChangeTokens:(id)arg2 ;
-(void)consumer:(id)arg1 didIgnoreChangeTokens:(id)arg2 ;
-(id)initWithPhotoLibrary:(id)arg1 clientIdentifier:(id)arg2 ;
-(void)registerChangeConsumer:(id)arg1 ;
-(void)unregisterChangeConsumer:(id)arg1 ;
-(void)persistToken:(id)arg1 ;
-(void)_notifyConsumersWithChangesFromFromChangeToken:(id)arg1 ;
-(id)_consumer:(id)arg1 withChangeTokens:(id)arg2 processedChangeTokens:(id)arg3 consumedTokens:(BOOL)arg4 ;
-(void)_clearConsumerTokenState;
-(BOOL)_distributeChangesInFetchResult:(id)arg1 ;
-(PGLibraryChangeListenerStateStore *)stateStore;
-(NSHashTable *)changeConsumers;
-(NSMutableOrderedSet *)outstandingChangeTokens;
-(NSMapTable *)outstandingChangeTokensByConsumer;
-(NSCountedSet *)outstandingChangeTokenCounts;
-(unsigned long long)outstandingTokensHighWaterMark;
-(unsigned long long)outstandingTokensLowWaterMark;
-(unsigned long long)maximumNumberOfMutationsToFetch;
-(PHPersistentChangeToken *)lastReadToken;
-(void)setLastReadToken:(PHPersistentChangeToken *)arg1 ;
-(id<PGGraphUpdateHealthRecording>)updateHealthRecorder;
-(BOOL)libraryBecameUnavailable;
-(void)setLibraryBecameUnavailable:(BOOL)arg1 ;
@end

