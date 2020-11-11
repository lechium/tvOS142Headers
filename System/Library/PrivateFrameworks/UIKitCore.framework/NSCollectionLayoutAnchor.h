/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:08 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NSCollectionLayoutAnchor : NSObject <NSCopying> {

	BOOL _offsetIsUnitOffset;
	unsigned long long _edges;
	CGPoint _offset;
	CGPoint _anchorPoint;

}

@property (assign,nonatomic) unsigned long long edges;               //@synthesize edges=_edges - In the implementation block
@property (assign,nonatomic) CGPoint offset;                         //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) CGPoint anchorPoint;                    //@synthesize anchorPoint=_anchorPoint - In the implementation block
@property (assign,nonatomic) BOOL offsetIsUnitOffset;                //@synthesize offsetIsUnitOffset=_offsetIsUnitOffset - In the implementation block
@property (nonatomic,readonly) BOOL isAbsoluteOffset; 
@property (nonatomic,readonly) BOOL isFractionalOffset; 
+(id)layoutAnchorWithEdges:(unsigned long long)arg1 ;
+(id)layoutAnchorWithEdges:(unsigned long long)arg1 absoluteOffset:(CGPoint)arg2 ;
+(id)layoutAnchorWithEdges:(unsigned long long)arg1 fractionalOffset:(CGPoint)arg2 ;
+(id)layoutAnchorWithAnchorPoint:(CGPoint)arg1 ;
+(id)layoutAnchorWithAnchorPoint:(CGPoint)arg1 offset:(CGPoint)arg2 ;
+(id)layoutAnchorWithAnchorPoint:(CGPoint)arg1 unitOffset:(CGPoint)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(CGPoint)offset;
-(void)setOffset:(CGPoint)arg1 ;
-(CGPoint)anchorPoint;
-(void)setAnchorPoint:(CGPoint)arg1 ;
-(unsigned long long)edges;
-(void)setEdges:(unsigned long long)arg1 ;
-(id)initWithEdges:(unsigned long long)arg1 offset:(CGPoint)arg2 anchorPoint:(CGPoint)arg3 offsetIsUnitOffset:(BOOL)arg4 ;
-(BOOL)offsetIsUnitOffset;
-(BOOL)isAbsoluteOffset;
-(BOOL)isFractionalOffset;
-(CGRect)_itemFrameForContainerRect:(CGRect)arg1 itemSize:(CGSize)arg2 itemLayoutAnchor:(id)arg3 ;
-(void)setOffsetIsUnitOffset:(BOOL)arg1 ;
@end

