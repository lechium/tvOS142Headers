/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:21 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIImageView.h>
#import <libobjc.A.dylib/PXGReusableView.h>

@class PXGNamedImageViewConfiguration;

@interface PXGNamedImageView : UIImageView <PXGReusableView> {

	PXGNamedImageViewConfiguration* _userData;
	CGRect _clippingRect;

}

@property (nonatomic,copy) PXGNamedImageViewConfiguration * userData;              //@synthesize userData=_userData - In the implementation block
@property (assign,nonatomic) CGRect clippingRect;                                  //@synthesize clippingRect=_clippingRect - In the implementation block
-(void)prepareForReuse;
-(void)setUserData:(PXGNamedImageViewConfiguration *)arg1 ;
-(PXGNamedImageViewConfiguration *)userData;
-(CGRect)clippingRect;
-(void)setClippingRect:(CGRect)arg1 ;
-(void)becomeReusable;
@end

