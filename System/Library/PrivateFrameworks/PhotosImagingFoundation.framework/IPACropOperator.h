/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:01 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosImagingFoundation/PhotosImagingFoundation-Structs.h>
#import <PhotosImagingFoundation/IPAGeometryOperator.h>

@interface IPACropOperator : IPAGeometryOperator {

	CGRect _cropRect;

}
+(id)operatorWithCropRect:(CGRect)arg1 ;
+(id)operatorWithIdentifier:(id)arg1 cropRect:(CGRect)arg2 ;
-(id)description;
-(id)transformForGeometry:(id)arg1 ;
@end

