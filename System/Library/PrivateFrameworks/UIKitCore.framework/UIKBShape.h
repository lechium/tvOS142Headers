/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:26 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIKBGeometry;

@interface UIKBShape : NSObject <NSCoding, NSCopying> {

	UIKBGeometry* m_geometry;
	CGRect m_frame;
	CGRect m_paddedFrame;
	unsigned long long m_concaveCorner;
	CGSize m_concaveCornerOffset;
	unsigned long long m_uid;
	BOOL m_scaled;
	UIKBShape* m_originalShape;

}

@property (assign,nonatomic) BOOL scaled; 
@property (nonatomic,retain) UIKBShape * originalShape; 
@property (nonatomic,retain) UIKBGeometry * geometry; 
@property (assign,nonatomic) CGRect frame; 
@property (assign,nonatomic) CGRect paddedFrame; 
@property (assign,nonatomic) unsigned long long concaveCorner; 
@property (assign,nonatomic) CGSize concaveCornerOffset; 
@property (nonatomic,readonly) unsigned long long uid; 
+(id)shape;
+(id)shapeByCombining:(id)arg1 withShape:(id)arg2 ;
+(id)shapeByResizingShape:(id)arg1 byAmount:(CGSize)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(BOOL)isEmpty;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGRect)frame;
-(void)setFrame:(CGRect)arg1 ;
-(unsigned long long)uid;
-(UIKBGeometry *)geometry;
-(void)setGeometry:(UIKBGeometry *)arg1 ;
-(void)setPaddedFrame:(CGRect)arg1 ;
-(CGRect)paddedFrame;
-(UIKBShape *)originalShape;
-(void)setOriginalShape:(UIKBShape *)arg1 ;
-(unsigned long long)concaveCorner;
-(CGSize)concaveCornerOffset;
-(void)setConcaveCorner:(unsigned long long)arg1 ;
-(void)setConcaveCornerOffset:(CGSize)arg1 ;
-(void)addRectFrom:(id)arg1 widthFraction:(double)arg2 heightFraction:(double)arg3 adjustOriginXFactor:(double)arg4 adjustOriginYFactor:(double)arg5 absoluteOriginFactors:(BOOL)arg6 ;
-(CGRect)_scaleRect:(CGRect)arg1 inYAxis:(BOOL)arg2 ;
-(id)initWithGeometry:(id)arg1 frame:(CGRect)arg2 paddedFrame:(CGRect)arg3 ;
-(id)initWithGeometry:(id)arg1 frame:(CGRect)arg2 paddedFrame:(CGRect)arg3 concaveCorner:(unsigned long long)arg4 concaveCornerOffset:(CGSize)arg5 ;
-(void)makeLikeOther:(id)arg1 ;
-(void)setConcaveCornerSize:(CGSize)arg1 ;
-(BOOL)shouldUseGeometry;
-(void)addRectFrom:(id)arg1 ;
-(void)addRectFrom:(id)arg1 widthFraction:(double)arg2 heightFraction:(double)arg3 adjustOriginXFactor:(double)arg4 adjustOriginYFactor:(double)arg5 ;
-(void)addRectFrom:(id)arg1 mergeActionFactors:(id)arg2 ;
-(void)scaleWidth:(double)arg1 ;
-(void)scaleIfNeeded:(double)arg1 onlyYAxis:(BOOL)arg2 ;
-(BOOL)scaled;
-(void)setScaled:(BOOL)arg1 ;
@end

