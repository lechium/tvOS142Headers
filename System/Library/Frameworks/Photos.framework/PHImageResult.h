/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:38 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Photos/Photos-Structs.h>
#import <Photos/PHCompositeMediaResult.h>

@class NSNumber, NSString;

@interface PHImageResult : PHCompositeMediaResult {

	CGImageRef _imageRef;
	BOOL _isPlaceholder;
	BOOL _degraded;
	NSNumber* _exifOrientation;
	NSString* _uniformTypeIdentifier;

}

@property (nonatomic,copy) NSNumber * exifOrientation;                    //@synthesize exifOrientation=_exifOrientation - In the implementation block
@property (nonatomic,copy) NSString * uniformTypeIdentifier;              //@synthesize uniformTypeIdentifier=_uniformTypeIdentifier - In the implementation block
-(void)dealloc;
-(BOOL)isPlaceholder;
-(id)imageData;
-(void)setIsPlaceholder:(BOOL)arg1 ;
-(NSNumber *)exifOrientation;
-(void)setExifOrientation:(NSNumber *)arg1 ;
-(CGImageRef)imageRef;
-(void)setImageRef:(CGImageRef)arg1 ;
-(void)setImageData:(id)arg1 ;
-(id)imageURL;
-(NSString *)uniformTypeIdentifier;
-(void)setUniformTypeIdentifier:(NSString *)arg1 ;
-(BOOL)containsValidData;
-(id)allowedInfoKeys;
-(id)sanitizedInfoDictionary;
-(long long)uiOrientation;
-(BOOL)isDegraded;
-(void)setHighDynamicRangeGainMap:(CVBufferRef)arg1 orientation:(unsigned)arg2 averagePixelLuminance:(id)arg3 ;
-(void)setImageURL:(id)arg1 ;
-(void)setDegraded:(BOOL)arg1 ;
@end

