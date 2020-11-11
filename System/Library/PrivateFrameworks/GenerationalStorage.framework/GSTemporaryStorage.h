/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:41 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/GSAdditionStoringPrivate.h>
#import <libobjc.A.dylib/GSAdditionStoring.h>

@protocol OS_dispatch_queue;
@class NSURL, NSObject;

@interface GSTemporaryStorage : NSObject <GSAdditionStoringPrivate, GSAdditionStoring> {

	NSURL* _libraryURL;
	NSURL* _documentURL;
	NSURL* _stagingURL;
	int _lockFd;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (nonatomic,readonly) NSURL * libraryURL;                                              //@synthesize libraryURL=_libraryURL - In the implementation block
@property (retain) NSURL * documentURL;                                                         //@synthesize documentURL=_documentURL - In the implementation block
@property (nonatomic,readonly) id<NSCopying><NSSecureCoding> persistentIdentifier; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)finalize;
-(id<NSCopying><NSSecureCoding>)persistentIdentifier;
-(id)enumeratorForAdditionsInNameSpace:(id)arg1 withOptions:(unsigned long long)arg2 withoutOptions:(unsigned long long)arg3 ordering:(int)arg4 ;
-(void)removeAdditions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSURL *)documentURL;
-(id)prepareAdditionCreationWithItemAtURL:(id)arg1 byMoving:(BOOL)arg2 creationInfo:(id)arg3 error:(id*)arg4 ;
-(void)cleanupStagingURL:(id)arg1 ;
-(void)createAdditionStagedAtURL:(id)arg1 creationInfo:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)removeAllAdditionsForNamespaces:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)additionWithName:(id)arg1 inNameSpace:(id)arg2 error:(id*)arg3 ;
-(void)_unlock;
-(NSURL *)libraryURL;
-(void)setDocumentURL:(NSURL *)arg1 ;
-(id)getAdditionDictionary:(id)arg1 error:(id*)arg2 ;
-(BOOL)setAdditionOptions:(id)arg1 value:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)setAdditionDisplayName:(id)arg1 value:(id)arg2 error:(id*)arg3 ;
-(id)setAdditionNameSpace:(id)arg1 value:(id)arg2 error:(id*)arg3 ;
-(BOOL)mergeAdditionUserInfo:(id)arg1 value:(id)arg2 error:(id*)arg3 ;
-(BOOL)replaceDocumentWithContentsOfAddition:(id)arg1 preservingCurrentVersionWithCreationInfo:(id)arg2 createdAddition:(id*)arg3 error:(id*)arg4 ;
-(id)URLforReplacingItemWithError:(id*)arg1 ;
-(id)stagingURLforCreatingAdditionWithError:(id*)arg1 ;
-(BOOL)replaceDocumentWithContentsOfItemAtURL:(id)arg1 preservingCurrentVersionWithCreationInfo:(id)arg2 createdAddition:(id*)arg3 error:(id*)arg4 ;
-(id)additionsWithNames:(id)arg1 inNameSpace:(id)arg2 error:(id*)arg3 ;
-(id)initWithLibraryURL:(id)arg1 forItemAtURL:(id)arg2 error:(id*)arg3 ;
-(id)_URLForNameSpace:(id)arg1 createIfNeeded:(BOOL)arg2 allowMissing:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)__lockWithFlags:(int)arg1 error:(id*)arg2 ;
-(BOOL)_readLock:(id*)arg1 ;
-(BOOL)_writeLock:(id*)arg1 ;
-(id)_enumerateItemsAtURL:(id)arg1 ;
-(void)_protectPath:(id)arg1 ;
-(void)_unprotectPath:(id)arg1 ;
@end

