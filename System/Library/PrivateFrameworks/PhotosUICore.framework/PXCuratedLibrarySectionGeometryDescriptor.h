/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:35 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PXDisplayAsset;
#import <PhotosUICore/PhotosUICore-Structs.h>
@interface PXCuratedLibrarySectionGeometryDescriptor : NSObject {

	id<PXDisplayAsset> _headerAsset;
	long long _visualPosition;
	SCD_Struct_PX81 _headerCornerRadius;
	CGRect _sectionRect;
	CGRect _keyAssetRect;
	CGRect _headerRect;

}

@property (nonatomic,readonly) CGRect sectionRect;                              //@synthesize sectionRect=_sectionRect - In the implementation block
@property (nonatomic,readonly) CGRect keyAssetRect;                             //@synthesize keyAssetRect=_keyAssetRect - In the implementation block
@property (nonatomic,readonly) CGRect headerRect;                               //@synthesize headerRect=_headerRect - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PX82 headerCornerRadius;              //@synthesize headerCornerRadius=_headerCornerRadius - In the implementation block
@property (nonatomic,readonly) id<PXDisplayAsset> headerAsset;                  //@synthesize headerAsset=_headerAsset - In the implementation block
@property (nonatomic,readonly) long long visualPosition;                        //@synthesize visualPosition=_visualPosition - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(CGRect)sectionRect;
-(id)initWithSectionRect:(CGRect)arg1 headerRect:(CGRect)arg2 keyAssetRect:(CGRect)arg3 headerCornerRadius:(SCD_Struct_PX82)arg4 headerAsset:(id)arg5 ;
-(id)initWithSectionRect:(CGRect)arg1 headerRect:(CGRect)arg2 keyAssetRect:(CGRect)arg3 headerCornerRadius:(SCD_Struct_PX82)arg4 headerAsset:(id)arg5 visualPosition:(long long)arg6 ;
-(id)sectionGeometryDescriptorWithVisualPosition:(long long)arg1 ;
-(id)sectionGeometryDescriptorOffsetBy:(CGPoint)arg1 ;
-(id)sectionGeometryDescriptorTransformedBy:(CGAffineTransform)arg1 ;
-(id)sectionGeometryDescriptorWithMaximumHeightBelowHeader:(double)arg1 ;
-(id)sectionGeometryDescriptorWithHeaderRect:(CGRect)arg1 ;
-(CGRect)resizeRect:(CGRect)arg1 fromGeometryDesciptor:(id)arg2 inContainer:(long long)arg3 resizing:(unsigned long long)arg4 ;
-(SCD_Struct_PX82)cornerRadiusForRect:(CGRect)arg1 ;
-(CGRect)keyAssetRect;
-(CGRect)headerRect;
-(SCD_Struct_PX82)headerCornerRadius;
-(id<PXDisplayAsset>)headerAsset;
-(long long)visualPosition;
@end

