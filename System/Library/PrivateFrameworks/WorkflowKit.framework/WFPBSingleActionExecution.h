/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:20 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray, NSData;

@interface WFPBSingleActionExecution : PBCodable <NSCopying> {

	NSString* _actionIdentifier;
	NSMutableArray* _inputs;
	NSMutableArray* _processedParameters;
	NSData* _serializedParameters;
	NSMutableArray* _variables;

}

@property (nonatomic,retain) NSString * actionIdentifier;                       //@synthesize actionIdentifier=_actionIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * variables;                        //@synthesize variables=_variables - In the implementation block
@property (nonatomic,retain) NSMutableArray * processedParameters;              //@synthesize processedParameters=_processedParameters - In the implementation block
@property (nonatomic,readonly) BOOL hasSerializedParameters; 
@property (nonatomic,retain) NSData * serializedParameters;                     //@synthesize serializedParameters=_serializedParameters - In the implementation block
@property (nonatomic,retain) NSMutableArray * inputs;                           //@synthesize inputs=_inputs - In the implementation block
+(Class)inputType;
+(Class)variablesType;
+(Class)processedParametersType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)inputs;
-(NSString *)actionIdentifier;
-(void)addInput:(id)arg1 ;
-(void)setInputs:(NSMutableArray *)arg1 ;
-(NSMutableArray *)variables;
-(void)setActionIdentifier:(NSString *)arg1 ;
-(unsigned long long)inputsCount;
-(NSData *)serializedParameters;
-(void)setSerializedParameters:(NSData *)arg1 ;
-(BOOL)hasSerializedParameters;
-(void)setProcessedParameters:(NSMutableArray *)arg1 ;
-(NSMutableArray *)processedParameters;
-(void)clearVariables;
-(void)addVariables:(id)arg1 ;
-(unsigned long long)variablesCount;
-(id)variablesAtIndex:(unsigned long long)arg1 ;
-(void)clearProcessedParameters;
-(void)addProcessedParameters:(id)arg1 ;
-(unsigned long long)processedParametersCount;
-(id)processedParametersAtIndex:(unsigned long long)arg1 ;
-(void)clearInputs;
-(id)inputAtIndex:(unsigned long long)arg1 ;
-(void)setVariables:(NSMutableArray *)arg1 ;
@end

