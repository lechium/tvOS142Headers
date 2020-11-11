/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:25 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVFCapture/AVFCapture-Structs.h>
@class NSString;

@interface AVSemanticSegmentationMatte : NSObject {

	NSString* _matteType;
	CVBufferRef _pixelBuffer;
	int _version;

}

@property (readonly) NSString * matteType; 
@property (readonly) unsigned pixelFormatType; 
@property (readonly) CVBufferRef mattingImage; 
+(void)initialize;
+(id)_allSupportedSemanticSegmentationMattePixelFormatTypes;
+(id)_allSupportedSemanticSegmentationMatteTypes;
+(id)semanticSegmentationMatteFromImageSourceAuxiliaryDataType:(CFStringRef)arg1 dictionaryRepresentation:(id)arg2 error:(id*)arg3 ;
-(id)debugDescription;
-(id)description;
-(void)dealloc;
-(unsigned)pixelFormatType;
-(id)dictionaryRepresentationForAuxiliaryDataType:(id*)arg1 ;
-(CVBufferRef)mattingImage;
-(NSString *)matteType;
-(id)semanticSegmentationMatteByReplacingSemanticSegmentationMatteWithPixelBuffer:(CVBufferRef)arg1 error:(id*)arg2 ;
-(id)initWithType:(id)arg1 pixelBuffer:(CVBufferRef)arg2 auxiliaryMetadata:(const CGImageMetadataRef)arg3 ;
-(id)initWithType:(id)arg1 pixelBuffer:(CVBufferRef)arg2 semanticSegmentationMatteMetadataDictionary:(id)arg3 ;
-(const CGImageMetadataRef)copyAuxiliaryMetadata;
-(const CFStringRef)auxiliaryImageType;
-(id)semanticSegmentationMatteByApplyingExifOrientation:(unsigned)arg1 ;
-(short)versionMajor;
-(short)versionMinor;
@end

