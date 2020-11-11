/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:42 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreML/CoreML-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface MLPredictionOptions : NSObject <NSCopying, NSSecureCoding> {

	BOOL _usesCPUOnly;
	unsigned long long _classifyTopK;
	NSDictionary* _outputBackings;
	NSDictionary* _automaticOutputBackingMode;
	unsigned long long _maxComputationBatchSize;

}

@property (assign) unsigned long long classifyTopK;                                //@synthesize classifyTopK=_classifyTopK - In the implementation block
@property (assign) BOOL useCPUOnly; 
@property (nonatomic,copy) NSDictionary * outputBackings;                          //@synthesize outputBackings=_outputBackings - In the implementation block
@property (nonatomic,copy) NSDictionary * automaticOutputBackingMode;              //@synthesize automaticOutputBackingMode=_automaticOutputBackingMode - In the implementation block
@property (assign) unsigned long long maxComputationBatchSize;                     //@synthesize maxComputationBatchSize=_maxComputationBatchSize - In the implementation block
@property (assign,nonatomic) BOOL usesCPUOnly;                                     //@synthesize usesCPUOnly=_usesCPUOnly - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)defaultOptions;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setUsesCPUOnly:(BOOL)arg1 ;
-(id)initWithUsesCPUOnly:(BOOL)arg1 ;
-(id)initWithUseCPUOnly:(BOOL)arg1 ;
-(BOOL)useCPUOnly;
-(void)setUseCPUOnly:(BOOL)arg1 ;
-(BOOL)usesCPUOnly;
-(unsigned long long)classifyTopK;
-(void)setClassifyTopK:(unsigned long long)arg1 ;
-(NSDictionary *)outputBackings;
-(void)setOutputBackings:(NSDictionary *)arg1 ;
-(NSDictionary *)automaticOutputBackingMode;
-(void)setAutomaticOutputBackingMode:(NSDictionary *)arg1 ;
-(unsigned long long)maxComputationBatchSize;
-(void)setMaxComputationBatchSize:(unsigned long long)arg1 ;
@end

