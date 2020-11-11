/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:01 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class BWVideoFormat, NSDictionary;

@interface BWInferenceVideoFormat : NSObject <NSCopying> {

	BWVideoFormat* _underlyingVideoFormat;
	BOOL _deviceOriented;
	long long _videoContentMode;
	BOOL _includesInvalidContent;
	int _rotationDegrees;

}

@property (nonatomic,readonly) unsigned long long width; 
@property (nonatomic,readonly) unsigned long long height; 
@property (nonatomic,readonly) unsigned pixelFormat; 
@property (nonatomic,readonly) unsigned long long extendedWidth; 
@property (nonatomic,readonly) unsigned long long extendedHeight; 
@property (nonatomic,readonly) int colorSpaceProperties; 
@property (nonatomic,readonly) BOOL deviceOriented; 
@property (nonatomic,readonly) int rotationDegrees; 
@property (nonatomic,readonly) NSDictionary * pixelBufferAttributes; 
@property (readonly) opaqueCMFormatDescriptionRef formatDescription; 
@property (nonatomic,readonly) BWVideoFormat * underlyingVideoFormat; 
@property (nonatomic,readonly) long long videoContentMode; 
@property (nonatomic,readonly) BOOL includesInvalidContent; 
+(id)formatByResolvingRequirements:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(unsigned long long)width;
-(unsigned long long)height;
-(unsigned)pixelFormat;
-(opaqueCMFormatDescriptionRef)formatDescription;
-(NSDictionary *)pixelBufferAttributes;
-(BWVideoFormat *)underlyingVideoFormat;
-(int)colorSpaceProperties;
-(id)initWithUnderlyingFormat:(id)arg1 isDeviceOriented:(BOOL)arg2 videoContentMode:(long long)arg3 includesInvalidContent:(BOOL)arg4 rotationDegrees:(int)arg5 ;
-(BOOL)includesInvalidContent;
-(long long)videoContentMode;
-(BOOL)deviceOriented;
-(int)rotationDegrees;
-(unsigned long long)extendedWidth;
-(unsigned long long)extendedHeight;
@end

