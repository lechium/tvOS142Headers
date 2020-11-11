/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:28 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/_MPStateDumpPropertyListTransformable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString;

@interface MPSectionedCollection : NSObject <_MPStateDumpPropertyListTransformable, NSCopying, NSMutableCopying, NSSecureCoding> {

	NSArray* _sectionedItems;
	NSArray* _sections;

}

@property (nonatomic,readonly) id firstSection; 
@property (nonatomic,readonly) id lastSection; 
@property (nonatomic,readonly) id firstItem; 
@property (nonatomic,readonly) id lastItem; 
@property (nonatomic,readonly) long long totalItemCount; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)debugDescription;
-(NSString *)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)sectionAtIndex:(long long)arg1 ;
-(id)firstItem;
-(id)lastItem;
-(id)allItems;
-(long long)numberOfSections;
-(id)itemAtIndexPath:(id)arg1 ;
-(id)allSections;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(id)_stateDumpObject;
-(void)enumerateSectionsUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateItemsUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateItemsInSectionAtIndex:(long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)firstSection;
-(long long)globalIndexForIndexPath:(id)arg1 ;
-(id)indexPathForGlobalIndex:(long long)arg1 ;
-(id)itemsInSectionAtIndex:(long long)arg1 ;
-(BOOL)hasSameContentAsSectionedCollection:(id)arg1 ;
-(id)lastSection;
-(long long)totalItemCount;
-(id)changeDetailsToSectionedCollection:(id)arg1 isEqualBlock:(/*^block*/id)arg2 isUpdatedBlock:(/*^block*/id)arg3 ;
-(id)changeDetailsToSectionedCollection:(id)arg1 applyingUIKitWorkarounds:(BOOL)arg2 isEqualBlock:(/*^block*/id)arg3 isUpdatedBlock:(/*^block*/id)arg4 ;
-(void)_initializeAsEmptySectionedCollection;
-(id)identifiersForItemAtIndexPath:(id)arg1 ;
-(id)identifiersForSectionAtIndex:(long long)arg1 ;
-(void)enumerateItemIdentifiersUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateSectionIdentifiersUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateItemIdentifiersInSectionAtIndex:(long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)indexPathForItemWithIdentifiersIntersectingSet:(id)arg1 ;
@end

