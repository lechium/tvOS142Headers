/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:07 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMapTable, NSDictionary, NSSet, NSArray;

@interface BWInferenceDependencyProvider : NSObject {

	NSMapTable* _dependenciesByInputVideoRequirements;
	NSMapTable* _dependenciesByOutputVideoRequirements;
	NSDictionary* _providedVideoRequirementsByAttachedMediaKey;
	NSSet* _consumedVideoAttachedMediaKeys;
	int _supportedPixelBufferCompressionType;

}

@property (nonatomic,readonly) NSMapTable * dependenciesByInputVideoRequirements;                     //@synthesize dependenciesByInputVideoRequirements=_dependenciesByInputVideoRequirements - In the implementation block
@property (nonatomic,readonly) NSMapTable * dependenciesByOutputVideoRequirements;                    //@synthesize dependenciesByOutputVideoRequirements=_dependenciesByOutputVideoRequirements - In the implementation block
@property (nonatomic,retain) NSDictionary * providedVideoRequirementsByAttachedMediaKey;              //@synthesize providedVideoRequirementsByAttachedMediaKey=_providedVideoRequirementsByAttachedMediaKey - In the implementation block
@property (nonatomic,retain) NSSet * consumedVideoAttachedMediaKeys;                                  //@synthesize consumedVideoAttachedMediaKeys=_consumedVideoAttachedMediaKeys - In the implementation block
@property (nonatomic,copy,readonly) NSArray * allInputVideoDependencies; 
@property (nonatomic,copy,readonly) NSArray * allOutputVideoDependencies; 
@property (assign,nonatomic) int supportedPixelBufferCompressionType;                                 //@synthesize supportedPixelBufferCompressionType=_supportedPixelBufferCompressionType - In the implementation block
-(id)description;
-(id)init;
-(void)dealloc;
-(NSArray *)allInputVideoDependencies;
-(NSArray *)allOutputVideoDependencies;
-(NSSet *)consumedVideoAttachedMediaKeys;
-(id)dependenciesForInputVideoRequirement:(id)arg1 ;
-(id)dependenciesForOutputVideoRequirement:(id)arg1 ;
-(int)supportedPixelBufferCompressionType;
-(NSDictionary *)providedVideoRequirementsByAttachedMediaKey;
-(void)setSupportedPixelBufferCompressionType:(int)arg1 ;
-(NSMapTable *)dependenciesByInputVideoRequirements;
-(NSMapTable *)dependenciesByOutputVideoRequirements;
-(void)setProvidedVideoRequirementsByAttachedMediaKey:(NSDictionary *)arg1 ;
-(void)setConsumedVideoAttachedMediaKeys:(NSSet *)arg1 ;
@end

