/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:39 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/MediaConversionService.framework/MediaConversionService
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface PAMediaConversionServiceResourceURLCollection : NSObject {

	NSMutableDictionary* _urlReferencesByRole;

}

@property (retain) NSMutableDictionary * urlReferencesByRole;              //@synthesize urlReferencesByRole=_urlReferencesByRole - In the implementation block
@property (readonly) unsigned long long urlCount; 
@property (readonly) BOOL allURLsAreReadable; 
+(id)collectionWithMainResourceURL:(id)arg1 ;
+(id)collectionForBookmarkDataDictionaryRepresentation:(id)arg1 error:(id*)arg2 ;
+(BOOL)getSignatureString:(id*)arg1 filenameSummary:(id*)arg2 forDictionaryRepresentation:(id)arg3 ;
+(id)filenameSummaryStringForDictionaryRepresentation:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(void)setResourceURL:(id)arg1 forRole:(id)arg2 ;
-(id)resourceURLForRole:(id)arg1 ;
-(unsigned long long)urlCount;
-(void)setResourceURL:(id)arg1 forRole:(id)arg2 deleteOnDeallocation:(BOOL)arg3 ;
-(void)setShouldDeleteURLOnDeallocation:(BOOL)arg1 forRole:(id)arg2 ;
-(BOOL)containsAllRoles:(id)arg1 ;
-(BOOL)containsAnyRole:(id)arg1 ;
-(id)typeIdentifierForResourceURLWithRole:(id)arg1 ;
-(id)bookmarkDataDictionaryRepresentationWithError:(id*)arg1 ;
-(BOOL)ensureFilesExistWithError:(id*)arg1 ;
-(BOOL)removeExistingEmptyFilesWithError:(id*)arg1 ;
-(BOOL)allURLsAreReadable;
-(id)logMessageSummaryWithFullPath:(BOOL)arg1 ;
-(id)logMessageSummary;
-(id)fileSizeSummary;
-(void)enumerateResourceURLReferences:(/*^block*/id)arg1 ;
-(void)enumerateResourceURLs:(/*^block*/id)arg1 ;
-(id)urlForDebugDumpWithDirectoryName:(id)arg1 inExistingParentDirectory:(id)arg2 error:(id*)arg3 ;
-(BOOL)copyURL:(id)arg1 forRole:(id)arg2 toDirectory:(id)arg3 error:(id*)arg4 ;
-(NSMutableDictionary *)urlReferencesByRole;
-(void)setUrlReferencesByRole:(NSMutableDictionary *)arg1 ;
@end

