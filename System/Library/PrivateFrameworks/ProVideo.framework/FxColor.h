/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:24 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface FxColor : NSObject <NSCoding> {

	void* _priv;
	void** _pad[3];

}
+(id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
+(id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 ;
+(id)colorWithCGColor:(CGColorRef)arg1 ;
+(id)colorWithString:(id)arg1 ;
+(id)colorWithCIColor:(id)arg1 ;
-(id)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(const double*)components;
-(double)red;
-(double)green;
-(double)blue;
-(double)alpha;
-(id)stringRepresentation;
-(CGColorSpaceRef)colorSpace;
-(id)initWithCGColor:(CGColorRef)arg1 ;
-(id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
-(unsigned long long)numberOfComponents;
-(CGColorRef)_cgColor;
-(void)convertToRGBA:(double*)arg1 ;
-(id)ciColor;
@end

