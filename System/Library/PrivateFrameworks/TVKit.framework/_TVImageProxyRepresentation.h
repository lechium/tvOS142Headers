/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:44 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVKit/TVKit-Structs.h>
#import <TVKit/TVImageRepresentation.h>

@class TVImageProxy;

@interface _TVImageProxyRepresentation : TVImageRepresentation {

	TVImageProxy* _imageProxy;
	CGImageRef _originalImage;

}
-(void)dealloc;
-(CGImageRef)_originalImage;
-(id)initWithImageProxy:(id)arg1 ;
-(id)_originalImageCacheKey;
-(void)loadImageWithCompletion:(/*^block*/id)arg1 ;
@end

