/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:40 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CalDAV/CalDAVContainerSyncTaskGroup.h>

@class NSString, NSMutableDictionary, NSDictionary, NSArray, CoreDAVItemParserMapping;

@interface CalDAVContainerChecksumSyncTaskGroup : CalDAVContainerSyncTaskGroup {

	NSString* _unusedSyncToken;
	NSString* _unusedCTag;
	NSMutableDictionary* _serverURLsToChecksums;
	NSDictionary* _localURLsToChecksums;
	BOOL _mismatchDetected;
	NSArray* _preferredChecksumVersions;
	CoreDAVItemParserMapping* _bestServerChecksumVersion;

}

@property (nonatomic,retain) NSArray * preferredChecksumVersions;                               //@synthesize preferredChecksumVersions=_preferredChecksumVersions - In the implementation block
@property (assign,nonatomic) id<CalDAVChecksumLocalDBInfoProvider> delegate; 
@property (nonatomic,retain) CoreDAVItemParserMapping * bestServerChecksumVersion;              //@synthesize bestServerChecksumVersion=_bestServerChecksumVersion - In the implementation block
@property (nonatomic,readonly) BOOL mismatchDetected;                                           //@synthesize mismatchDetected=_mismatchDetected - In the implementation block
-(void)startTaskGroup;
-(id)copyAdditionalResourcePropertiesToFetch;
-(BOOL)shouldDownloadResource:(id)arg1 localETag:(id)arg2 serverETag:(id)arg3 ;
-(void)deleteResourceURLs:(id)arg1 ;
-(void)receivedPropertiesToValues:(id)arg1 forURL:(id)arg2 ;
-(id)initWithFolderURL:(id)arg1 previousCTag:(id)arg2 previousSyncToken:(id)arg3 actions:(id)arg4 accountInfoProvider:(id)arg5 taskManager:(id)arg6 appSpecificCalendarItemClass:(Class)arg7 ;
-(void)setBestServerChecksumVersion:(CoreDAVItemParserMapping *)arg1 ;
-(id)_calculatedCalendarHome;
-(void)_handleResponseToChecksumPropfind:(id)arg1 ;
-(void)_serverChecksumSupportPropfind;
-(BOOL)_hadOutOfDateCollectionToken;
-(NSArray *)preferredChecksumVersions;
-(void)setPreferredChecksumVersions:(NSArray *)arg1 ;
-(CoreDAVItemParserMapping *)bestServerChecksumVersion;
-(BOOL)mismatchDetected;
@end
