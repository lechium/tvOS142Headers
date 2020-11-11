/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:34 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IconServices/IconServices-Structs.h>
#import <libobjc.A.dylib/ISScalableCompositorResource.h>

@protocol ISScalableCompositorResource;
@class ISIconDecoration, NSString;

@interface ISIconDecorationResource : NSObject <ISScalableCompositorResource> {

	ISIconDecoration* _decoration;
	id<ISScalableCompositorResource> _internalResource;

}

@property (readonly) id<ISScalableCompositorResource> internalResource;              //@synthesize internalResource=_internalResource - In the implementation block
@property (readonly) ISIconDecoration * decoration;                                  //@synthesize decoration=_decoration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)imageForSize:(CGSize)arg1 scale:(double)arg2 ;
-(ISIconDecoration *)decoration;
-(void)configureWithType:(id)arg1 ;
-(id)initWithDecoration:(id)arg1 ;
-(id<ISScalableCompositorResource>)internalResource;
@end

