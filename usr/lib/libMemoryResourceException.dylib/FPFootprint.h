/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:21 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /usr/lib/libMemoryResourceException.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <libMemoryResourceException.dylib/libMemoryResourceException.dylib-Structs.h>
@class NSArray, NSMutableDictionary, NSMutableArray, FPTime;

@interface FPFootprint : NSObject {

	NSArray* _processes;
	NSMutableDictionary* _pidToFootprint;
	CFDictionaryRef _memoryObjects;
	CFDictionaryRef _sharedCacheTranslatedMemoryObjects;
	CFDictionaryRef _sharedCacheMemoryObjects;
	CFDictionaryRef _textMemoryObjects;
	CFDictionaryRef _linkeditMemoryObjects;
	NSMutableArray* _uniqueMemoryObjects;
	NSMutableArray* _outputFormatters;
	BOOL _earlyExit;
	unsigned _qualityOfService;
	FPTime* _gatherStartTime;
	FPTime* _gatherEndTime;

}

@property (nonatomic,readonly) NSArray * processes;                   //@synthesize processes=_processes - In the implementation block
@property (assign,nonatomic) unsigned qualityOfService;               //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (nonatomic,readonly) FPTime * gatherStartTime;              //@synthesize gatherStartTime=_gatherStartTime - In the implementation block
@property (nonatomic,readonly) FPTime * gatherEndTime;                //@synthesize gatherEndTime=_gatherEndTime - In the implementation block
+(void)setBreakDownPhysFootprint:(BOOL)arg1 ;
+(void)setSharingAnalysisDisabled:(BOOL)arg1 ;
+(void)_totalForCategories:(id)arg1 outTotal:(SCD_Struct_FP0*)arg2 ;
+(BOOL)breakDownPhysFootprint;
+(BOOL)isSharingAnalysisDisabled;
+(id)_processesBySortingPidDesc:(id)arg1 ;
+(id)installCancelHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)cancel;
-(unsigned)qualityOfService;
-(void)setQualityOfService:(unsigned)arg1 ;
-(NSArray *)processes;
-(id)initWithProcesses:(id)arg1 ;
-(BOOL)gatherData;
-(void)analyzeData;
-(id)_categoriesForAllProcessesShouldSummarize:(BOOL)arg1 ;
-(void)_addProcess:(id)arg1 ;
-(void)finalizeObjects;
-(void)_buildProcessToFootprintMap;
-(id)_notHiddenProcesses;
-(id)_processesBySortingFootprint:(id)arg1 ;
-(void)printVmmapLikeOutputForProcesses:(id)arg1 ;
-(id)_generateProcessToProcessGroups;
-(id)_categoriesForObjects:(id)arg1 viewedByProcess:(id)arg2 hasProcessView:(unsigned char*)arg3 summarize:(BOOL)arg4 ;
-(unsigned long long)_calculateFootprintForProcess:(id)arg1 ;
-(void)addOutputFormatter:(id)arg1 ;
-(void)printOutputVerbose:(BOOL)arg1 summarize:(BOOL)arg2 ;
-(FPTime *)gatherStartTime;
-(FPTime *)gatherEndTime;
@end

