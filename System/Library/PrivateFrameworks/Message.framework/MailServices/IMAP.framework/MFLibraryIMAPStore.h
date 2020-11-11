/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:54 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IMAP/IMAP-Structs.h>
#import <Message/MFLibraryStore.h>
#import <libobjc.A.dylib/MFIMAPConnectionDelegate.h>
#import <libobjc.A.dylib/MFIMAPSequenceIdentifierProvider.h>

@class NSString, MFIMAPDownloadCache, MFIMAPCommandPipeline, NSArray, MFIMAPConnection, NSLock, MFCancelationToken;

@interface MFLibraryIMAPStore : MFLibraryStore <MFIMAPConnectionDelegate, MFIMAPSequenceIdentifierProvider> {

	unsigned _supportsCustomPermanentFlags : 1;
	unsigned _supportsJunkFlag : 1;
	unsigned _supportsDollarJunkFlag : 1;
	unsigned _supportsNotJunkFlag : 1;
	unsigned _supportsDollarNotJunkFlag : 1;
	unsigned _supportsForwardedFlag : 1;
	unsigned _supportsDollarForwardedFlag : 1;
	unsigned _updatingCache : 1;
	unsigned _updateMetadata : 1;
	unsigned _readyToDealloc : 1;
	unsigned _didSynchronizeOldMessages : 1;
	unsigned _recentsExist : 1;
	unsigned _settingServerCount : 1;
	unsigned _reserved : 16;
	NSString* _mailboxName;
	MFIMAPDownloadCache* _downloadCache;
	MFIMAPCommandPipeline* _fetchPipeline;
	unsigned long long _serverDeletedCount;
	unsigned long long _serverUidNext;
	unsigned long long _lastHighestModSequence;
	unsigned long long _highestModSequence;
	NSString* _selectedUID;
	unsigned _currentFetchUid;
	NSString* _relativePath;
	NSArray* _additionalSynchronizationSearchArguments;
	NSArray* _additionalFetchHeaders;
	id _downloadDelegate;
	MFIMAPConnection* _cachedConnection;
	NSLock* _cachedConnectionLock;
	BOOL _shouldUseIDLE;
	MFCancelationToken* _cancelationToken;

}

@property (assign) BOOL shouldUseIDLE;                                           //@synthesize shouldUseIDLE=_shouldUseIDLE - In the implementation block
@property (nonatomic,retain) MFCancelationToken * cancelationToken;              //@synthesize cancelationToken=_cancelationToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)copyRemoteIDForTemporaryUid:(unsigned)arg1 ;
+(void)setHandlerForTemporaryUidToRemoteIDMapping:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)close;
-(id)relativePath;
-(void)setDownloadDelegate:(id)arg1 ;
-(BOOL)bodyFetchRequiresNetworkActivity;
-(id)_fetchBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 downloadIfNecessary:(BOOL)arg3 partial:(BOOL*)arg4 ;
-(unsigned long long)serverMessageCount;
-(id)storeSearchResultMatchingCriterion:(id)arg1 limit:(unsigned)arg2 error:(id*)arg3 ;
-(id)setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2 ;
-(unsigned long long)appendMessages:(id)arg1 unsuccessfulOnes:(id)arg2 newMessageIDs:(id)arg3 newMessages:(id)arg4 flagsToSet:(id)arg5 ;
-(id)_fetchHeaderDataForMessage:(id)arg1 downloadIfNecessary:(BOOL)arg2 ;
-(void)setFlagsForAllMessagesFromDictionary:(id)arg1 ;
-(long long)fetchNumMessages:(unsigned long long)arg1 preservingUID:(id)arg2 options:(unsigned long long)arg3 ;
-(void)_setFlagsForMessages:(id)arg1 ;
-(id)initWithMailboxUid:(id)arg1 readOnly:(BOOL)arg2 ;
-(unsigned long long)growFetchWindow;
-(BOOL)canFetchSearchResults;
-(long long)fetchMessagesMatchingCriterion:(id)arg1 limit:(unsigned)arg2 ;
-(id)remoteIDsFromUniqueRemoteIDs:(id)arg1 ;
-(BOOL)canFetchMessageIDs;
-(long long)fetchMessagesWithMessageIDs:(id)arg1 andSetFlags:(unsigned long long)arg2 ;
-(long long)fetchMessagesWithRemoteIDs:(id)arg1 andSetFlags:(unsigned long long)arg2 ;
-(BOOL)canCompact;
-(void)doCompact;
-(void)deleteMessagesOlderThanNumberOfDays:(int)arg1 compact:(BOOL)arg2 ;
-(BOOL)allowsAppend;
-(id)messageForRemoteID:(id)arg1 ;
-(id)messageForRemoteID:(id)arg1 inMailbox:(id)arg2 ;
-(id)uniqueRemoteIDsForMessages:(id)arg1 ;
-(id)willSetFlagsFromDictionary:(id)arg1 forMessages:(id)arg2 ;
-(void)setFlagsCancelled:(id)arg1 forMessages:(id)arg2 ;
-(BOOL)setPreferredEncoding:(unsigned)arg1 forMessage:(id)arg2 ;
-(id)messageIdRollCall:(id)arg1 ;
-(id)mailboxName;
-(void)_handleFlagsChangedForMessages:(id)arg1 flags:(id)arg2 oldFlagsByMessage:(id)arg3 ;
-(BOOL)_fetchDataForMimePart:(id)arg1 range:(NSRange)arg2 isComplete:(BOOL*)arg3 consumer:(id)arg4 ;
-(id)_fetchFullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 downloadIfNecessary:(BOOL)arg3 didDownload:(BOOL*)arg4 ;
-(void)willRemoveDelegation:(id)arg1 ;
-(BOOL)connection:(id)arg1 shouldHandleUntaggedResponse:(id)arg2 forCommand:(SCD_Struct_MF2*)arg3 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 forCommand:(SCD_Struct_MF2*)arg3 ;
-(void)connectionDidDisconnect:(id)arg1 ;
-(void)connection:(id)arg1 didBeginBodyLoad:(id)arg2 section:(id)arg3 ;
-(void)connection:(id)arg1 didLoadMoreBodyData:(id)arg2 section:(id)arg3 ;
-(void)connection:(id)arg1 didFinishLoadingBodyData:(id)arg2 section:(id)arg3 ;
-(void)setServerMessageCount:(unsigned long long)arg1 ;
-(void)setHighestModSequence:(unsigned long long)arg1 ;
-(BOOL)shouldStartIdleForConnection:(id)arg1 ;
-(id)sequenceIdentifierForUIDs:(id)arg1 ;
-(void)setSequenceIdentifier:(id)arg1 forUIDs:(id)arg2 ;
-(BOOL)hasValidCacheFileForMessage:(id)arg1 ;
-(void)setUid:(unsigned)arg1 forMessageWithTemporaryUid:(unsigned)arg2 ;
-(void)focusedMessageDidChange:(id)arg1 ;
-(id)_observeChangesInIdleConditions;
-(unsigned long long)fetchMessagesWithUIDs:(id)arg1 connection:(id)arg2 newCount:(unsigned long long)arg3 flagsToSet:(unsigned long long)arg4 queueClass:(Class)arg5 ;
-(unsigned long long)syncMessagesWithUIDs:(id)arg1 connection:(id)arg2 libraryDetails:(id)arg3 flagSearchResults:(id)arg4 ;
-(void)_updateSelectedUID:(unsigned long long*)arg1 ;
-(id)_searchFlagsForUIDs:(id)arg1 usingConnection:(id)arg2 ;
-(void)_performActionsOnConnection:(id)arg1 uidsToFetch:(id*)arg2 uidsToSync:(id*)arg3 messagesToCompact:(id*)arg4 libraryDetails:(id)arg5 flagSearchResults:(id)arg6 shouldForce:(BOOL)arg7 newUIDsToFetch:(unsigned*)arg8 ;
-(BOOL)performOperationRequiringConnection:(BOOL)arg1 withOptions:(int)arg2 operation:(/*^block*/id)arg3 ;
-(void)updateDeletedCountWithNotDeletedCount:(unsigned long long)arg1 ;
-(BOOL)_shouldContinueToPreservedUID:(unsigned long long)arg1 ;
-(id)_searchArgumentsForSynchronize;
-(unsigned long long)_fetchMessagesWithArguments:(id)arg1 idRange:(id)arg2 onConnection:(id)arg3 synchronize:(BOOL)arg4 limit:(unsigned long long)arg5 topUIDToCompact:(unsigned long long)arg6 topKnownUID:(unsigned long long)arg7 success:(BOOL*)arg8 examinedRange:(NSRange*)arg9 fetchableUIDsFound:(unsigned long long*)arg10 preserveUID:(unsigned long long*)arg11 numFetchedUIDs:(unsigned long long*)arg12 ;
-(void)_fetchServerUnreadCountWithConnection:(id)arg1 ;
-(void)_fetchStatusCountWithConnection:(id)arg1 ;
-(void)_updateServerUnreadCount:(unsigned long long)arg1 ;
-(id)_remoteBodySearchForCriterion:(id)arg1 ;
-(id)_newSearchResponseQueueForConnection:(id)arg1 limit:(unsigned)arg2 ;
-(void)_fetchMessagesMatchingCriterion:(id)arg1 limit:(unsigned)arg2 withOptions:(int)arg3 handler:(/*^block*/id)arg4 ;
-(id)offlineCacheIfOffline;
-(id)deletedMessages;
-(id)addMessages:(id)arg1 newMessagesByOldMessage:(id)arg2 ;
-(id)_uidsForMessages:(id)arg1 ;
-(id)offlineCache;
-(id)_updateLibraryForTransferedMessages:(id)arg1 toDestinationMailbox:(id)arg2 newMessageInfo:(id)arg3 flagsToSet:(id)arg4 ;
-(BOOL)performBatchOperationWithUIDs:(id)arg1 requiringConnection:(BOOL)arg2 withOptions:(int)arg3 operation:(/*^block*/id)arg4 ;
-(BOOL)_doUidCopy:(SCD_Struct_MF22*)arg1 toStore:(id)arg2 newMessages:(id)arg3 ;
-(BOOL)canPerformOfflineAppend;
-(void)setMailboxUidValidity:(unsigned)arg1 ;
-(unsigned long long)appendMessages:(id)arg1 unsuccessfulOnes:(id)arg2 newMessageIDs:(id)arg3 newMessages:(id)arg4 flagsToSet:(id)arg5 customIMAPFlagsToSet:(id)arg6 ;
-(unsigned long long)_doAppend:(SCD_Struct_MF22*)arg1 ;
-(void)_synchronouslySetFlags:(id)arg1 clearFlags:(id)arg2 forMessages:(id)arg3 originalChanges:(id)arg4 ;
-(void)addFlagChanges:(id)arg1 forMessages:(id)arg2 ;
-(void)_setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2 ;
-(id)_dataForMessage:(id)arg1 readHeadersOnly:(BOOL)arg2 ;
-(id)_downloadForMessageBodyData:(id)arg1 ;
-(id)_performBodyDataDownload:(id)arg1 usingConnection:(id)arg2 isPartial:(BOOL*)arg3 ;
-(BOOL)shouldRetryEmptyBodyDownloadForMessage:(id)arg1 ;
-(id)_idleConditionsObservable;
-(void)_scheduleIdleTransition:(BOOL)arg1 ;
-(void)setShouldUseIDLE:(BOOL)arg1 ;
-(BOOL)shouldUseIDLE;
-(void)_setStatusCount:(unsigned long long)arg1 ;
-(void)updateDeletedCount;
-(void)setAdditionalFetchHeaders:(id)arg1 ;
-(void)setAdditionalSynchronizationSearchArguments:(id)arg1 ;
-(void)removeAllLocalMessages;
-(void)_addOfflineTransferMessages:(id)arg1 ;
-(id)moveMessages:(id)arg1 toMailbox:(id)arg2 markAsRead:(BOOL)arg3 ;
-(id)newDictionaryForLocalFlags:(unsigned long long)arg1 serverFlags:(unsigned long long)arg2 existingDictionary:(id)arg3 ;
-(void)reselectMailbox;
-(BOOL)_changedFlagsForMessage:(id)arg1 fetchResponse:(id)arg2 newFlags:(unsigned long long*)arg3 ;
-(id)fetchPipeline;
-(id)downloadCache;
-(MFCancelationToken *)cancelationToken;
-(void)setCancelationToken:(MFCancelationToken *)arg1 ;
@end

