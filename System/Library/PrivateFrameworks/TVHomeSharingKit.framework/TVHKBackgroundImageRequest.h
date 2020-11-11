/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:41 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class TVImageProxy;

@interface TVHKBackgroundImageRequest : NSObject {

	BOOL _requiresBackdropImage;
	TVImageProxy* _imageProxy;

}

@property (nonatomic,readonly) TVImageProxy * imageProxy;              //@synthesize imageProxy=_imageProxy - In the implementation block
@property (assign,nonatomic) BOOL requiresBackdropImage;               //@synthesize requiresBackdropImage=_requiresBackdropImage - In the implementation block
+(id)new;
-(id)description;
-(id)init;
-(TVImageProxy *)imageProxy;
-(id)initWithImageProxy:(id)arg1 ;
-(BOOL)requiresBackdropImage;
-(void)setRequiresBackdropImage:(BOOL)arg1 ;
@end
