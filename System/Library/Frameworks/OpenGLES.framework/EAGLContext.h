/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:10:39 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/OpenGLES.framework/OpenGLES
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <OpenGLES/OpenGLES-Structs.h>
@class NSString, EAGLSharegroup;

@interface EAGLContext : NSObject {

	EAGLContextPrivate* _private;
	NSString* debugLabel;

}

@property (readonly) unsigned long long API; 
@property (readonly) EAGLSharegroup * sharegroup; 
@property (nonatomic,copy) NSString * debugLabel; 
@property (assign,getter=isMultiThreaded,nonatomic) BOOL multiThreaded; 
+(BOOL)setCurrentContext:(id)arg1 ;
+(id)currentContext;
-(id)init;
-(void)dealloc;
-(BOOL)isMultiThreaded;
-(id)initWithAPI:(unsigned long long)arg1 properties:(id)arg2 ;
-(id)commonInitWithAPI:(unsigned long long)arg1 properties:(id)arg2 ;
-(id)initWithAPI:(unsigned long long)arg1 sharedWithCompute:(BOOL)arg2 ;
-(void)setDebugLabel:(NSString *)arg1 ;
-(unsigned long long)getParameter:(unsigned)arg1 to:(int*)arg2 ;
-(unsigned long long)setParameter:(unsigned)arg1 to:(int*)arg2 ;
-(BOOL)texImageIOSurface:(IOSurfaceRef)arg1 target:(unsigned long long)arg2 internalFormat:(unsigned long long)arg3 width:(unsigned)arg4 height:(unsigned)arg5 format:(unsigned long long)arg6 type:(unsigned long long)arg7 plane:(unsigned)arg8 invert:(BOOL)arg9 ;
-(EAGLMacroContextRef)getMacroContextPrivate;
-(id)initWithAPI:(unsigned long long)arg1 ;
-(id)initWithAPI:(unsigned long long)arg1 sharegroup:(id)arg2 ;
-(unsigned long long)API;
-(EAGLSharegroup *)sharegroup;
-(void)setMultiThreaded:(BOOL)arg1 ;
-(BOOL)renderbufferStorage:(unsigned long long)arg1 fromDrawable:(id)arg2 ;
-(BOOL)presentRenderbuffer:(unsigned long long)arg1 ;
-(BOOL)presentRenderbuffer:(unsigned long long)arg1 atTime:(double)arg2 ;
-(BOOL)presentRenderbuffer:(unsigned long long)arg1 afterMinimumDuration:(double)arg2 ;
-(BOOL)attachImage:(unsigned long long)arg1 toCoreSurface:(IOSurfaceRef)arg2 invertedRender:(BOOL)arg3 ;
-(BOOL)texImageIOSurface:(IOSurfaceRef)arg1 target:(unsigned long long)arg2 internalFormat:(unsigned long long)arg3 width:(unsigned)arg4 height:(unsigned)arg5 format:(unsigned long long)arg6 type:(unsigned long long)arg7 plane:(unsigned)arg8 ;
-(BOOL)setBlockFence:(/*^block*/id)arg1 onQueue:(id)arg2 ;
-(EAGLMacroContextRef)GetMacroContextPrivate;
-(NSString *)debugLabel;
@end

