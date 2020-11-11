/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:28 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/_MPSectionedIdentifierListEncodableNextEntriesProviding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/MPSectionedIdentifierListEnumerationResult.h>

@class NSMutableArray, MPSectionedIdentifierListEntryPositionKey, NSString, NSArray;

@interface MPSectionedIdentifierListEntry : NSObject <_MPSectionedIdentifierListEncodableNextEntriesProviding, NSSecureCoding, MPSectionedIdentifierListEnumerationResult> {

	NSMutableArray* _nextEntries;
	BOOL _dataSourceRemoved;
	MPSectionedIdentifierListEntryPositionKey* _positionKey;
	NSString* _sectionIdentifier;
	NSString* _hostedSectionIdentifier;
	MPSectionedIdentifierListEntry* _previousEntry;
	long long _branchDepth;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) MPSectionedIdentifierListEntryPositionKey * positionKey;              //@synthesize positionKey=_positionKey - In the implementation block
@property (nonatomic,readonly) NSString * sectionIdentifier;                                         //@synthesize sectionIdentifier=_sectionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * hostedSectionIdentifier;                                       //@synthesize hostedSectionIdentifier=_hostedSectionIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * nextEntries;                                                //@synthesize nextEntries=_nextEntries - In the implementation block
@property (assign,nonatomic,__weak) MPSectionedIdentifierListEntry * previousEntry;                  //@synthesize previousEntry=_previousEntry - In the implementation block
@property (assign,nonatomic) long long branchDepth;                                                  //@synthesize branchDepth=_branchDepth - In the implementation block
@property (getter=isDataSourceRemoved,nonatomic,readonly) BOOL dataSourceRemoved;                    //@synthesize dataSourceRemoved=_dataSourceRemoved - In the implementation block
@property (nonatomic,readonly) long long entryType; 
+(BOOL)supportsSecureCoding;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)entryType;
-(NSString *)sectionIdentifier;
-(id)itemResult;
-(id)trackingEntryResult;
-(long long)branchDepth;
-(id)initWithPositionKey:(id)arg1 sectionIdentifier:(id)arg2 ;
-(void)addBranch:(id)arg1 forceBranchDepthIncrease:(BOOL)arg2 ;
-(void)addNextEntry:(id)arg1 ;
-(void)prepareForDealloc;
-(void)setDataSourceRemoved;
-(BOOL)isDataSourceRemoved;
-(NSArray *)nextEntries;
-(MPSectionedIdentifierListEntryPositionKey *)positionKey;
-(NSString *)hostedSectionIdentifier;
-(void)setHostedSectionIdentifier:(NSString *)arg1 ;
-(MPSectionedIdentifierListEntry *)previousEntry;
-(void)setPreviousEntry:(MPSectionedIdentifierListEntry *)arg1 ;
-(void)setBranchDepth:(long long)arg1 ;
-(id)encodableNextEntriesWithExclusiveAccessToken:(id)arg1 ;
@end

