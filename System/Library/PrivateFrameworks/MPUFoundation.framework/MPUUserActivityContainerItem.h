/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:02 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class MPMediaEntity, MPUContentItemIdentifierCollection, _MPUProtoBufUserActivityContainerItem;

@interface MPUUserActivityContainerItem : NSObject <NSCopying, NSMutableCopying> {

	long long _containerItemType;
	MPMediaEntity* _selectedMediaEntity;
	MPMediaEntity* _visualReferenceMediaEntity;

}

@property (nonatomic,readonly) MPUContentItemIdentifierCollection * MPU_selectedContentItemIdentifierCollection; 
@property (nonatomic,readonly) MPUContentItemIdentifierCollection * MPU_visualReferenceContentItemIdentifierCollection; 
@property (nonatomic,readonly) _MPUProtoBufUserActivityContainerItem * protoBufUserActivityContainerItem; 
@property (nonatomic,readonly) long long containerItemType;                                                                          //@synthesize containerItemType=_containerItemType - In the implementation block
@property (nonatomic,readonly) MPMediaEntity * selectedMediaEntity;                                                                  //@synthesize selectedMediaEntity=_selectedMediaEntity - In the implementation block
@property (nonatomic,readonly) MPMediaEntity * visualReferenceMediaEntity;                                                           //@synthesize visualReferenceMediaEntity=_visualReferenceMediaEntity - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(long long)containerItemType;
-(id)initWithContainerItemType:(long long)arg1 ;
-(MPMediaEntity *)selectedMediaEntity;
-(MPMediaEntity *)visualReferenceMediaEntity;
-(id)initWithProtoBufUserActivityContainerItem:(id)arg1 ;
-(_MPUProtoBufUserActivityContainerItem *)protoBufUserActivityContainerItem;
-(id)_MPU_contentItemIdentifierCollectionWithMediaEntity:(id)arg1 ;
-(MPUContentItemIdentifierCollection *)MPU_selectedContentItemIdentifierCollection;
-(MPUContentItemIdentifierCollection *)MPU_visualReferenceContentItemIdentifierCollection;
@end

