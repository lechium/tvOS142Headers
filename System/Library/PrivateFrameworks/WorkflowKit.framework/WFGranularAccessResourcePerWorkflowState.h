/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:17 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/WFAccessResourcePerWorkflowState.h>

@class NSSet, NSMapTable, NSString;

@interface WFGranularAccessResourcePerWorkflowState : NSObject <WFAccessResourcePerWorkflowState> {

	NSSet* _entries;
	NSMapTable* _entriesMapTable;

}

@property (nonatomic,retain) NSMapTable * entriesMapTable;               //@synthesize entriesMapTable=_entriesMapTable - In the implementation block
@property (nonatomic,readonly) NSSet * entries;                          //@synthesize entries=_entries - In the implementation block
@property (nonatomic,readonly) BOOL hasDeniedEntries; 
@property (nonatomic,readonly) BOOL hasUndeterminedEntries; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(Class)entryTypeClass;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSSet *)entries;
-(id)initWithEntries:(id)arg1 ;
-(id)stateByPerformingUnionWithState:(id)arg1 ;
-(id)stateByPopulatingNotDeterminedEntriesUsingState:(id)arg1 ;
-(id)stateBySettingUndeterminedEntriesToAuthorized:(BOOL)arg1 ;
-(id)stateBySettingAllEntriesAsAuthorized:(BOOL)arg1 ;
-(BOOL)hasDeniedEntries;
-(BOOL)hasUndeterminedEntries;
-(NSMapTable *)entriesMapTable;
-(void)setEntriesMapTable:(NSMapTable *)arg1 ;
@end

