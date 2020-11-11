/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:36 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCoreSupport.framework/SoftwareUpdateCoreSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface SUCoreMAIdentifier : NSObject <NSSecureCoding> {

	NSString* _productVersion;
	NSString* _productBuildVersion;
	NSString* _releaseType;
	NSData* _measurement;
	NSString* _measurementAlgorithm;

}

@property (nonatomic,retain) NSString * productVersion;                    //@synthesize productVersion=_productVersion - In the implementation block
@property (nonatomic,retain) NSString * productBuildVersion;               //@synthesize productBuildVersion=_productBuildVersion - In the implementation block
@property (nonatomic,retain) NSString * releaseType;                       //@synthesize releaseType=_releaseType - In the implementation block
@property (nonatomic,retain) NSData * measurement;                         //@synthesize measurement=_measurement - In the implementation block
@property (nonatomic,retain) NSString * measurementAlgorithm;              //@synthesize measurementAlgorithm=_measurementAlgorithm - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)measurement;
-(void)setMeasurement:(NSData *)arg1 ;
-(NSString *)productVersion;
-(NSString *)productBuildVersion;
-(NSString *)releaseType;
-(void)setProductVersion:(NSString *)arg1 ;
-(void)setProductBuildVersion:(NSString *)arg1 ;
-(void)setReleaseType:(NSString *)arg1 ;
-(id)initWithProductVersion:(id)arg1 productBuildVersion:(id)arg2 releaseType:(id)arg3 measurement:(id)arg4 measurementAlgorithm:(id)arg5 ;
-(NSString *)measurementAlgorithm;
-(void)setMeasurementAlgorithm:(NSString *)arg1 ;
@end

