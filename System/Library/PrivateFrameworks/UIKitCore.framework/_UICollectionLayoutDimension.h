/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:47 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <UIKitCore/_UICollectionLayoutAPIRespresenting.h>

@interface _UICollectionLayoutDimension : NSObject <NSCopying, _UICollectionLayoutAPIRespresenting> {

	long long _semantic;
	double _dimension;

}

@property (nonatomic,readonly) double dimension; 
@property (nonatomic,readonly) BOOL isAbsolute; 
@property (nonatomic,readonly) BOOL isEstimated; 
@property (nonatomic,readonly) BOOL isFractionalWidth; 
@property (nonatomic,readonly) BOOL isFractionalHeight; 
+(id)fractionalWidth:(double)arg1 ;
+(id)fractionalHeight:(double)arg1 ;
+(id)absolute:(double)arg1 ;
+(id)estimated:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)dimension;
-(BOOL)isEstimated;
-(BOOL)isAbsolute;
-(BOOL)isFractionalWidth;
-(BOOL)isFractionalHeight;
-(id)_apiRepresentation;
-(id)initWithSemantic:(long long)arg1 dimension:(double)arg2 ;
@end

