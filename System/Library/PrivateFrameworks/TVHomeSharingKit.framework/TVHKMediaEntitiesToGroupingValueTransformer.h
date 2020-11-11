/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:41 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSValueTransformer.h>

@class NSString, NSValueTransformer;

@interface TVHKMediaEntitiesToGroupingValueTransformer : NSValueTransformer {

	BOOL _performDefaultGroupsSort;
	BOOL _generateGroupingIndexBarItems;
	NSString* _identifierKeyPath;
	NSValueTransformer* _identifierTitleTransformer;
	/*^block*/id _groupsSortComparator;
	NSString* _mediaEntitiesIndexBarItemPropertyKey;

}

@property (nonatomic,copy) NSString * identifierKeyPath;                                   //@synthesize identifierKeyPath=_identifierKeyPath - In the implementation block
@property (nonatomic,retain) NSValueTransformer * identifierTitleTransformer;              //@synthesize identifierTitleTransformer=_identifierTitleTransformer - In the implementation block
@property (nonatomic,copy) id groupsSortComparator;                                        //@synthesize groupsSortComparator=_groupsSortComparator - In the implementation block
@property (assign,nonatomic) BOOL performDefaultGroupsSort;                                //@synthesize performDefaultGroupsSort=_performDefaultGroupsSort - In the implementation block
@property (nonatomic,copy) NSString * mediaEntitiesIndexBarItemPropertyKey;                //@synthesize mediaEntitiesIndexBarItemPropertyKey=_mediaEntitiesIndexBarItemPropertyKey - In the implementation block
@property (assign,nonatomic) BOOL generateGroupingIndexBarItems;                           //@synthesize generateGroupingIndexBarItems=_generateGroupingIndexBarItems - In the implementation block
+(BOOL)allowsReverseTransformation;
+(Class)transformedValueClass;
-(id)init;
-(id)transformedValue:(id)arg1 ;
-(NSString *)identifierKeyPath;
-(NSString *)mediaEntitiesIndexBarItemPropertyKey;
-(NSValueTransformer *)identifierTitleTransformer;
-(id)groupsSortComparator;
-(BOOL)performDefaultGroupsSort;
-(BOOL)generateGroupingIndexBarItems;
-(id)initWithIdentifierKeyPath:(id)arg1 ;
-(void)setIdentifierKeyPath:(NSString *)arg1 ;
-(void)setIdentifierTitleTransformer:(NSValueTransformer *)arg1 ;
-(void)setGroupsSortComparator:(id)arg1 ;
-(void)setPerformDefaultGroupsSort:(BOOL)arg1 ;
-(void)setMediaEntitiesIndexBarItemPropertyKey:(NSString *)arg1 ;
-(void)setGenerateGroupingIndexBarItems:(BOOL)arg1 ;
@end

