/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:59 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/GLKit.framework/GLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <GLKit/GLKit-Structs.h>
@class EAGLContext, NSLock;

@interface GLKTextureLoader : NSObject {

	BOOL _supportsASTC_LDR;
	BOOL _supportsETC2;
	EAGLContext* _glContext;
	NSLock* _nsLock;

}

@property (retain) EAGLContext * glContext;              //@synthesize glContext=_glContext - In the implementation block
@property (retain) NSLock * nsLock;                      //@synthesize nsLock=_nsLock - In the implementation block
@property (assign) BOOL supportsASTC_LDR;                //@synthesize supportsASTC_LDR=_supportsASTC_LDR - In the implementation block
@property (assign) BOOL supportsETC2;                    //@synthesize supportsETC2=_supportsETC2 - In the implementation block
+(id)lockAndSwitchContext:(id)arg1 glContext:(id)arg2 ;
+(id)_textureWithTexture:(id)arg1 error:(id*)arg2 ;
+(void)unlockAndRestoreContext:(id)arg1 glContext:(id)arg2 ;
+(id)_textureWithTextureTXR:(id)arg1 error:(id*)arg2 ;
+(id)textureWithContentsOfURL:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)commonTextureWithContentsOfURL:(id)arg1 options:(id)arg2 error:(id*)arg3 lock:(id)arg4 glContext:(id)arg5 ;
+(id)commonTextureWithName:(id)arg1 scaleFactor:(double)arg2 bundle:(id)arg3 options:(id)arg4 error:(id*)arg5 lock:(id)arg6 glContext:(id)arg7 ;
+(id)commonTextureWithContentsOfData:(id)arg1 options:(id)arg2 error:(id*)arg3 lock:(id)arg4 glContext:(id)arg5 ;
+(id)commonTextureWithCGImage:(CGImageRef)arg1 options:(id)arg2 error:(id*)arg3 lock:(id)arg4 glContext:(id)arg5 ;
+(id)commonCubeMapWithContentsOfFiles:(id)arg1 options:(id)arg2 error:(id*)arg3 lock:(id)arg4 glContext:(id)arg5 ;
+(id)cubeMapWithContentsOfURL:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)commonCubeMapWithContentsOfURL:(id)arg1 options:(id)arg2 error:(id*)arg3 lock:(id)arg4 glContext:(id)arg5 ;
+(id)textureWithContentsOfFile:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)textureWithName:(id)arg1 scaleFactor:(double)arg2 bundle:(id)arg3 options:(id)arg4 error:(id*)arg5 ;
+(id)textureWithContentsOfData:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)textureWithCGImage:(CGImageRef)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)cubeMapWithContentsOfFiles:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)cubeMapWithContentsOfFile:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)dealloc;
-(void)setGlContext:(EAGLContext *)arg1 ;
-(EAGLContext *)glContext;
-(void)setNsLock:(NSLock *)arg1 ;
-(NSLock *)nsLock;
-(void)textureWithContentsOfURL:(id)arg1 options:(id)arg2 queue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)cubeMapWithContentsOfURL:(id)arg1 options:(id)arg2 queue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)initWithSharegroup:(id)arg1 ;
-(void)textureWithContentsOfFile:(id)arg1 options:(id)arg2 queue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)textureWithName:(id)arg1 scaleFactor:(double)arg2 bundle:(id)arg3 options:(id)arg4 queue:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)textureWithContentsOfData:(id)arg1 options:(id)arg2 queue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)textureWithCGImage:(CGImageRef)arg1 options:(id)arg2 queue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)cubeMapWithContentsOfFiles:(id)arg1 options:(id)arg2 queue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)cubeMapWithContentsOfFile:(id)arg1 options:(id)arg2 queue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)supportsASTC_LDR;
-(void)setSupportsASTC_LDR:(BOOL)arg1 ;
-(BOOL)supportsETC2;
-(void)setSupportsETC2:(BOOL)arg1 ;
@end
