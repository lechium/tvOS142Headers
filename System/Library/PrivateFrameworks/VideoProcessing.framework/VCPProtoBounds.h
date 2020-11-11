/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:14 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface VCPProtoBounds : PBCodable <NSCopying> {

	double _height;
	double _width;
	double _x0;
	double _y0;

}

@property (assign,nonatomic) double x0;                  //@synthesize x0=_x0 - In the implementation block
@property (assign,nonatomic) double y0;                  //@synthesize y0=_y0 - In the implementation block
@property (assign,nonatomic) double width;               //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) double height;              //@synthesize height=_height - In the implementation block
+(id)boundsWithCGRect:(CGRect)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(CGRect)rectValue;
-(double)width;
-(double)height;
-(void)setWidth:(double)arg1 ;
-(void)setHeight:(double)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(double)x0;
-(void)setX0:(double)arg1 ;
-(double)y0;
-(void)setY0:(double)arg1 ;
@end

