/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:14 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/VCPProtoResultLegacyConversionProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface VCPProtoMovieStabilizationRecipe : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying> {

	SCD_Struct_VC56* _homographyParams;
	SCD_Struct_VC58* _timeValues;
	float _cropRectHeight;
	float _cropRectWidth;
	float _cropRectX;
	float _cropRectY;
	float _inputBoundsHeight;
	float _inputBoundsWidth;
	float _inputBoundsX;
	float _inputBoundsY;
	float _sourceSizeHeight;
	float _sourceSizeWidth;
	int _timeScale;

}

@property (assign,nonatomic) float cropRectX;                                         //@synthesize cropRectX=_cropRectX - In the implementation block
@property (assign,nonatomic) float cropRectY;                                         //@synthesize cropRectY=_cropRectY - In the implementation block
@property (assign,nonatomic) float cropRectHeight;                                    //@synthesize cropRectHeight=_cropRectHeight - In the implementation block
@property (assign,nonatomic) float cropRectWidth;                                     //@synthesize cropRectWidth=_cropRectWidth - In the implementation block
@property (assign,nonatomic) float inputBoundsX;                                      //@synthesize inputBoundsX=_inputBoundsX - In the implementation block
@property (assign,nonatomic) float inputBoundsY;                                      //@synthesize inputBoundsY=_inputBoundsY - In the implementation block
@property (assign,nonatomic) float inputBoundsHeight;                                 //@synthesize inputBoundsHeight=_inputBoundsHeight - In the implementation block
@property (assign,nonatomic) float inputBoundsWidth;                                  //@synthesize inputBoundsWidth=_inputBoundsWidth - In the implementation block
@property (assign,nonatomic) float sourceSizeHeight;                                  //@synthesize sourceSizeHeight=_sourceSizeHeight - In the implementation block
@property (assign,nonatomic) float sourceSizeWidth;                                   //@synthesize sourceSizeWidth=_sourceSizeWidth - In the implementation block
@property (assign,nonatomic) int timeScale;                                           //@synthesize timeScale=_timeScale - In the implementation block
@property (nonatomic,readonly) unsigned long long timeValuesCount; 
@property (nonatomic,readonly) long long* timeValues; 
@property (nonatomic,readonly) unsigned long long homographyParamsCount; 
@property (nonatomic,readonly) float* homographyParams; 
+(id)resultFromLegacyDictionary:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)timeScale;
-(id)exportToLegacyDictionary;
-(float)cropRectX;
-(void)setCropRectX:(float)arg1 ;
-(float)cropRectY;
-(void)setCropRectY:(float)arg1 ;
-(float)cropRectHeight;
-(void)setCropRectHeight:(float)arg1 ;
-(float)cropRectWidth;
-(void)setCropRectWidth:(float)arg1 ;
-(void)setTimeScale:(int)arg1 ;
-(unsigned long long)homographyParamsCount;
-(void)clearHomographyParams;
-(float*)homographyParams;
-(void)setHomographyParams:(float*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)timeValuesCount;
-(void)clearTimeValues;
-(long long)timeValueAtIndex:(unsigned long long)arg1 ;
-(void)addTimeValue:(long long)arg1 ;
-(float)homographyParamsAtIndex:(unsigned long long)arg1 ;
-(void)addHomographyParams:(float)arg1 ;
-(long long*)timeValues;
-(void)setTimeValues:(long long*)arg1 count:(unsigned long long)arg2 ;
-(float)inputBoundsX;
-(void)setInputBoundsX:(float)arg1 ;
-(float)inputBoundsY;
-(void)setInputBoundsY:(float)arg1 ;
-(float)inputBoundsHeight;
-(void)setInputBoundsHeight:(float)arg1 ;
-(float)inputBoundsWidth;
-(void)setInputBoundsWidth:(float)arg1 ;
-(float)sourceSizeHeight;
-(void)setSourceSizeHeight:(float)arg1 ;
-(float)sourceSizeWidth;
-(void)setSourceSizeWidth:(float)arg1 ;
@end

