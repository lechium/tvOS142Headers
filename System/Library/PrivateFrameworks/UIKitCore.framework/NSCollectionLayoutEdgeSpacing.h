/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:08 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSCollectionLayoutSpacing;

@interface NSCollectionLayoutEdgeSpacing : NSObject <NSCopying> {

	NSCollectionLayoutSpacing* _leading;
	NSCollectionLayoutSpacing* _top;
	NSCollectionLayoutSpacing* _trailing;
	NSCollectionLayoutSpacing* _bottom;

}

@property (nonatomic,readonly) NSCollectionLayoutSpacing * leading; 
@property (nonatomic,readonly) NSCollectionLayoutSpacing * top; 
@property (nonatomic,readonly) NSCollectionLayoutSpacing * trailing; 
@property (nonatomic,readonly) NSCollectionLayoutSpacing * bottom; 
+(id)fixedSpacing:(double)arg1 ;
+(id)defaultSpacing;
+(id)flexibleSpacing:(double)arg1 ;
+(id)spacingForLeading:(id)arg1 top:(id)arg2 trailing:(id)arg3 bottom:(id)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSCollectionLayoutSpacing *)top;
-(NSCollectionLayoutSpacing *)bottom;
-(NSCollectionLayoutSpacing *)leading;
-(NSCollectionLayoutSpacing *)trailing;
-(BOOL)_hasSpacing;
-(NSDirectionalEdgeInsets)edgeOutsets;
-(id)initWithLeading:(id)arg1 top:(id)arg2 trailing:(id)arg3 bottom:(id)arg4 ;
-(id)_spacingForEdge:(unsigned long long)arg1 ;
-(BOOL)isSpacingFixedForEdge:(unsigned long long)arg1 ;
-(BOOL)isSpacingFlexibleForEdge:(unsigned long long)arg1 ;
-(double)spacingForEdge:(unsigned long long)arg1 ;
@end
