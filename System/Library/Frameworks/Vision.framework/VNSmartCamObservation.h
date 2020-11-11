/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:54 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Vision/Vision-Structs.h>
#import <Vision/VNObservation.h>

@class NSArray, NSString;

@interface VNSmartCamObservation : VNObservation {

	NSArray* _smartCamprints;
	NSString* _smartCamprintVersion;

}

@property (nonatomic,copy) NSArray * smartCamprints;                              //@synthesize smartCamprints=_smartCamprints - In the implementation block
@property (nonatomic,copy,readonly) NSString * smartCamprintVersion;              //@synthesize smartCamprintVersion=_smartCamprintVersion - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)smartCamprintCurrentVersion;
+(id)observationWithSmartCamprints:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithRequestRevision:(unsigned long long)arg1 smartCamprints:(id)arg2 ;
-(NSArray *)smartCamprints;
-(void)setSmartCamprints:(NSArray *)arg1 ;
-(NSString *)smartCamprintVersion;
@end

