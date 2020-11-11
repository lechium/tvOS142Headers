/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:20 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Memories/Memories-Structs.h>
#import <libobjc.A.dylib/MiroAutoEditDelegate.h>

@class Project, MiroMemory, MiroAutoEditLogger, NSMapTable, MovieController, MiroRandomNumberGenerator, MiroAutoEdit_TrimController, MiroAutoEditProjectPolish, NSString;

@interface MiroAutoEditController : NSObject <MiroAutoEditDelegate> {

	BOOL _shouldBuildMovieController;
	BOOL _shouldSkipPolish;
	MiroAutoEditLogger* _logger;
	NSMapTable* _trimRangeForClipMap;
	Project* _project;
	MiroMemory* _activeMemory;
	MovieController* _movieController;
	MiroRandomNumberGenerator* _kenBurnsRandomNumberGenerator;
	MiroAutoEdit_TrimController* _trimController;
	MiroAutoEditProjectPolish* _polisher;
	CGSize _naturalSize;

}

@property (nonatomic,retain) MiroAutoEdit_TrimController * trimController;                           //@synthesize trimController=_trimController - In the implementation block
@property (nonatomic,retain) MiroAutoEditProjectPolish * polisher;                                   //@synthesize polisher=_polisher - In the implementation block
@property (nonatomic,retain) NSMapTable * trimRangeForClipMap;                                       //@synthesize trimRangeForClipMap=_trimRangeForClipMap - In the implementation block
@property (nonatomic,retain) MiroAutoEditLogger * logger;                                            //@synthesize logger=_logger - In the implementation block
@property (nonatomic,retain) Project * project;                                                      //@synthesize project=_project - In the implementation block
@property (nonatomic,retain) MiroMemory * activeMemory;                                              //@synthesize activeMemory=_activeMemory - In the implementation block
@property (assign,nonatomic) BOOL shouldBuildMovieController;                                        //@synthesize shouldBuildMovieController=_shouldBuildMovieController - In the implementation block
@property (nonatomic,retain) MovieController * movieController;                                      //@synthesize movieController=_movieController - In the implementation block
@property (assign,nonatomic) CGSize naturalSize;                                                     //@synthesize naturalSize=_naturalSize - In the implementation block
@property (nonatomic,retain) MiroRandomNumberGenerator * kenBurnsRandomNumberGenerator;              //@synthesize kenBurnsRandomNumberGenerator=_kenBurnsRandomNumberGenerator - In the implementation block
@property (assign,nonatomic) BOOL shouldSkipPolish;                                                  //@synthesize shouldSkipPolish=_shouldSkipPolish - In the implementation block
@property (nonatomic,readonly) BOOL titleIsSupported; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)localImageRequestOptions;
-(MiroAutoEditLogger *)logger;
-(CGSize)naturalSize;
-(void)setLogger:(MiroAutoEditLogger *)arg1 ;
-(void)setNaturalSize:(CGSize)arg1 ;
-(void)setMovieController:(MovieController *)arg1 ;
-(MovieController *)movieController;
-(Project *)project;
-(void)setProject:(Project *)arg1 ;
-(BOOL)titleIsSupported;
-(BOOL)shouldBuildMovieController;
-(void)setShouldBuildMovieController:(BOOL)arg1 ;
-(BOOL)shouldSkipPolish;
-(void)setPolisher:(MiroAutoEditProjectPolish *)arg1 ;
-(MiroAutoEditProjectPolish *)polisher;
-(id)_makePolisher;
-(MiroAutoEdit_TrimController *)trimController;
-(void)_finishPolisher;
-(MiroMemory *)activeMemory;
-(void)autoEditToDuration:(int)arg1 ;
-(MiroRandomNumberGenerator *)kenBurnsRandomNumberGenerator;
-(void)applyAutomaticThemeTitleToFirstClip;
-(void)_incrementCountForKey:(id)arg1 inDictionary:(id)arg2 ;
-(NSMapTable *)trimRangeForClipMap;
-(void)setTrimRangeForClipMap:(NSMapTable *)arg1 ;
-(void)setActiveMemory:(MiroMemory *)arg1 ;
-(void)setKenBurnsRandomNumberGenerator:(MiroRandomNumberGenerator *)arg1 ;
-(void)setShouldSkipPolish:(BOOL)arg1 ;
-(void)setTrimController:(MiroAutoEdit_TrimController *)arg1 ;
-(id)candidateAssetsForSaliencyAnalysis;
-(void)_removeSpeedRampFromEndOfClip:(id)arg1 ;
-(void)_removeSpeedRampFromBeginningOfClip:(id)arg1 ;
-(id)candidateAssetsForAutoCropAnalysis;
-(void)runRealTimeSaliencyModels;
@end

