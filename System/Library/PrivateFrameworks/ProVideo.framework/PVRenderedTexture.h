/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:21 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ProVideo/ProVideo-Structs.h>
@interface PVRenderedTexture : NSObject {

	HGRef<HGGLTexture>* _glTexture;

}

@property (nonatomic,readonly) unsigned textureName; 
@property (nonatomic,readonly) unsigned textureTarget; 
@property (nonatomic,readonly) CGRect textureRect; 
@property (nonatomic,readonly) CGRect bitmapRect; 
-(unsigned)textureTarget;
-(CGRect)textureRect;
-(CGSize)textureSize;
-(id)initWithHGGLTexture:(HGRef<HGGLTexture>*)arg1 ;
-(unsigned)textureName;
-(CGRect)bitmapRect;
@end
